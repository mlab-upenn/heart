/* Include files */

#include <stddef.h>
#include "blas.h"
#include "SimpleModeling_sfun.h"
#include "c6_SimpleModeling.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "SimpleModeling_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c6_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c6_IN_pacemakerDDD             ((uint8_T)1U)
#define c6_IN_LRI                      ((uint8_T)1U)
#define c6_IN_st1                      ((uint8_T)1U)
#define c6_IN_st2                      ((uint8_T)2U)
#define c6_IN_ARPs1                    ((uint8_T)1U)
#define c6_IN_ARPs2                    ((uint8_T)2U)
#define c6_IN_VRPst1                   ((uint8_T)1U)
#define c6_IN_VRPst2                   ((uint8_T)2U)
#define c6_IN_URIst1                   ((uint8_T)1U)
#define c6_IN_URIst2                   ((uint8_T)2U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void initialize_params_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance);
static void enable_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void disable_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void c6_update_debugger_state_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance);
static void set_sim_state_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_st);
static void c6_set_sim_state_side_effects_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance);
static void finalize_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void sf_gateway_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void mdl_start_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void initSimStructsc6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void c6_pacemakerDDD(SFc6_SimpleModelingInstanceStruct *chartInstance);
static void c6_LRI(SFc6_SimpleModelingInstanceStruct *chartInstance);
static void c6_AVI(SFc6_SimpleModelingInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber);
static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData);
static int32_T c6_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint8_T c6_b_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_tp_pacemakerDDD, const char_T
  *c6_identifier);
static uint8_T c6_c_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint16_T c6_d_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_LRIcur, const char_T *c6_identifier);
static uint16_T c6_e_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static boolean_T c6_f_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_LRIout, const char_T *c6_identifier);
static boolean_T c6_g_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_e_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static int16_T c6_h_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_AVIcur, const char_T *c6_identifier);
static int16_T c6_i_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_f_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static real_T c6_j_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_AR, const char_T *c6_identifier);
static real_T c6_k_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_l_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_setSimStateSideEffectsInfo, const char_T
  *c6_identifier);
static const mxArray *c6_m_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static int16_T c6__s16_u16_(SFc6_SimpleModelingInstanceStruct *chartInstance,
  uint16_T c6_b);
static uint16_T c6__u16_s32_(SFc6_SimpleModelingInstanceStruct *chartInstance,
  int32_T c6_b);
static int16_T c6__s16_s32_(SFc6_SimpleModelingInstanceStruct *chartInstance,
  int32_T c6_b);
static void init_dsm_address_info(SFc6_SimpleModelingInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc6_SimpleModelingInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_doSetSimStateSideEffects = 0U;
  chartInstance->c6_setSimStateSideEffectsInfo = NULL;
  chartInstance->c6_tp_pacemakerDDD = 0U;
  chartInstance->c6_is_active_AVI = 0U;
  chartInstance->c6_is_AVI = c6_IN_NO_ACTIVE_CHILD;
  chartInstance->c6_tp_AVI = 0U;
  chartInstance->c6_tp_st1 = 0U;
  chartInstance->c6_tp_st2 = 0U;
  chartInstance->c6_is_active_LRI = 0U;
  chartInstance->c6_is_LRI = c6_IN_NO_ACTIVE_CHILD;
  chartInstance->c6_b_tp_LRI = 0U;
  chartInstance->c6_tp_LRI = 0U;
  chartInstance->c6_is_active_PVARP = 0U;
  chartInstance->c6_is_PVARP = c6_IN_NO_ACTIVE_CHILD;
  chartInstance->c6_tp_PVARP = 0U;
  chartInstance->c6_tp_ARPs1 = 0U;
  chartInstance->c6_tp_ARPs2 = 0U;
  chartInstance->c6_is_active_URI = 0U;
  chartInstance->c6_is_URI = c6_IN_NO_ACTIVE_CHILD;
  chartInstance->c6_tp_URI = 0U;
  chartInstance->c6_tp_URIst1 = 0U;
  chartInstance->c6_tp_URIst2 = 0U;
  chartInstance->c6_is_active_VRP = 0U;
  chartInstance->c6_is_VRP = c6_IN_NO_ACTIVE_CHILD;
  chartInstance->c6_tp_VRP = 0U;
  chartInstance->c6_tp_VRPst1 = 0U;
  chartInstance->c6_tp_VRPst2 = 0U;
  chartInstance->c6_is_active_c6_SimpleModeling = 0U;
  chartInstance->c6_is_c6_SimpleModeling = c6_IN_NO_ACTIVE_CHILD;
  chartInstance->c6_LRIcur = 0U;
  chartInstance->c6_AVIcur = 0;
  chartInstance->c6_ARPcur = 0U;
  chartInstance->c6_VRPcur = 0U;
  chartInstance->c6_URIcur = 0U;
  chartInstance->c6_AVIst = false;
  chartInstance->c6_URIst = false;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c6_LRIout = false;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c6_AVIout = false;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c6_ARPout = false;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c6_VRPout = false;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 5) != 0)) {
    *chartInstance->c6_AR = 0.0;
  }
}

static void initialize_params_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c6_update_debugger_state_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance)
{
  uint32_T c6_prevAniVal;
  c6_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c6_is_active_c6_SimpleModeling == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_SimpleModeling == c6_IN_pacemakerDDD) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_LRI == c6_IN_LRI) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_VRP == c6_IN_VRPst2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_active_LRI == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_URI == c6_IN_URIst1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_AVI == c6_IN_st1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_AVI == c6_IN_st2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_URI == c6_IN_URIst2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_PVARP == c6_IN_ARPs1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_PVARP == c6_IN_ARPs2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_VRP == c6_IN_VRPst1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_active_AVI == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_active_PVARP == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_active_VRP == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_active_URI == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, chartInstance->c6_sfEvent);
  }

  _SFD_SET_ANIMATION(c6_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  real_T c6_hoistedGlobal;
  real_T c6_u;
  const mxArray *c6_b_y = NULL;
  boolean_T c6_b_hoistedGlobal;
  boolean_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  boolean_T c6_c_hoistedGlobal;
  boolean_T c6_c_u;
  const mxArray *c6_d_y = NULL;
  boolean_T c6_d_hoistedGlobal;
  boolean_T c6_d_u;
  const mxArray *c6_e_y = NULL;
  boolean_T c6_e_hoistedGlobal;
  boolean_T c6_e_u;
  const mxArray *c6_f_y = NULL;
  uint16_T c6_f_hoistedGlobal;
  uint16_T c6_f_u;
  const mxArray *c6_g_y = NULL;
  int16_T c6_g_hoistedGlobal;
  int16_T c6_g_u;
  const mxArray *c6_h_y = NULL;
  boolean_T c6_h_hoistedGlobal;
  boolean_T c6_h_u;
  const mxArray *c6_i_y = NULL;
  uint16_T c6_i_hoistedGlobal;
  uint16_T c6_i_u;
  const mxArray *c6_j_y = NULL;
  uint16_T c6_j_hoistedGlobal;
  uint16_T c6_j_u;
  const mxArray *c6_k_y = NULL;
  boolean_T c6_k_hoistedGlobal;
  boolean_T c6_k_u;
  const mxArray *c6_l_y = NULL;
  uint16_T c6_l_hoistedGlobal;
  uint16_T c6_l_u;
  const mxArray *c6_m_y = NULL;
  uint8_T c6_m_hoistedGlobal;
  uint8_T c6_m_u;
  const mxArray *c6_n_y = NULL;
  uint8_T c6_n_hoistedGlobal;
  uint8_T c6_n_u;
  const mxArray *c6_o_y = NULL;
  uint8_T c6_o_hoistedGlobal;
  uint8_T c6_o_u;
  const mxArray *c6_p_y = NULL;
  uint8_T c6_p_hoistedGlobal;
  uint8_T c6_p_u;
  const mxArray *c6_q_y = NULL;
  uint8_T c6_q_hoistedGlobal;
  uint8_T c6_q_u;
  const mxArray *c6_r_y = NULL;
  uint8_T c6_r_hoistedGlobal;
  uint8_T c6_r_u;
  const mxArray *c6_s_y = NULL;
  uint8_T c6_s_hoistedGlobal;
  uint8_T c6_s_u;
  const mxArray *c6_t_y = NULL;
  uint8_T c6_t_hoistedGlobal;
  uint8_T c6_t_u;
  const mxArray *c6_u_y = NULL;
  uint8_T c6_u_hoistedGlobal;
  uint8_T c6_u_u;
  const mxArray *c6_v_y = NULL;
  uint8_T c6_v_hoistedGlobal;
  uint8_T c6_v_u;
  const mxArray *c6_w_y = NULL;
  uint8_T c6_w_hoistedGlobal;
  uint8_T c6_w_u;
  const mxArray *c6_x_y = NULL;
  uint8_T c6_x_hoistedGlobal;
  uint8_T c6_x_u;
  const mxArray *c6_y_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(24, 1), false);
  c6_hoistedGlobal = *chartInstance->c6_AR;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = *chartInstance->c6_ARPout;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_c_hoistedGlobal = *chartInstance->c6_AVIout;
  c6_c_u = c6_c_hoistedGlobal;
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_c_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_d_hoistedGlobal = *chartInstance->c6_LRIout;
  c6_d_u = c6_d_hoistedGlobal;
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", &c6_d_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  c6_e_hoistedGlobal = *chartInstance->c6_VRPout;
  c6_e_u = c6_e_hoistedGlobal;
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", &c6_e_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 4, c6_f_y);
  c6_f_hoistedGlobal = chartInstance->c6_ARPcur;
  c6_f_u = c6_f_hoistedGlobal;
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y", &c6_f_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 5, c6_g_y);
  c6_g_hoistedGlobal = chartInstance->c6_AVIcur;
  c6_g_u = c6_g_hoistedGlobal;
  c6_h_y = NULL;
  sf_mex_assign(&c6_h_y, sf_mex_create("y", &c6_g_u, 4, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 6, c6_h_y);
  c6_h_hoistedGlobal = chartInstance->c6_AVIst;
  c6_h_u = c6_h_hoistedGlobal;
  c6_i_y = NULL;
  sf_mex_assign(&c6_i_y, sf_mex_create("y", &c6_h_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 7, c6_i_y);
  c6_i_hoistedGlobal = chartInstance->c6_LRIcur;
  c6_i_u = c6_i_hoistedGlobal;
  c6_j_y = NULL;
  sf_mex_assign(&c6_j_y, sf_mex_create("y", &c6_i_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 8, c6_j_y);
  c6_j_hoistedGlobal = chartInstance->c6_URIcur;
  c6_j_u = c6_j_hoistedGlobal;
  c6_k_y = NULL;
  sf_mex_assign(&c6_k_y, sf_mex_create("y", &c6_j_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 9, c6_k_y);
  c6_k_hoistedGlobal = chartInstance->c6_URIst;
  c6_k_u = c6_k_hoistedGlobal;
  c6_l_y = NULL;
  sf_mex_assign(&c6_l_y, sf_mex_create("y", &c6_k_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 10, c6_l_y);
  c6_l_hoistedGlobal = chartInstance->c6_VRPcur;
  c6_l_u = c6_l_hoistedGlobal;
  c6_m_y = NULL;
  sf_mex_assign(&c6_m_y, sf_mex_create("y", &c6_l_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 11, c6_m_y);
  c6_m_hoistedGlobal = chartInstance->c6_is_active_c6_SimpleModeling;
  c6_m_u = c6_m_hoistedGlobal;
  c6_n_y = NULL;
  sf_mex_assign(&c6_n_y, sf_mex_create("y", &c6_m_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 12, c6_n_y);
  c6_n_hoistedGlobal = chartInstance->c6_is_active_LRI;
  c6_n_u = c6_n_hoistedGlobal;
  c6_o_y = NULL;
  sf_mex_assign(&c6_o_y, sf_mex_create("y", &c6_n_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 13, c6_o_y);
  c6_o_hoistedGlobal = chartInstance->c6_is_active_AVI;
  c6_o_u = c6_o_hoistedGlobal;
  c6_p_y = NULL;
  sf_mex_assign(&c6_p_y, sf_mex_create("y", &c6_o_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 14, c6_p_y);
  c6_p_hoistedGlobal = chartInstance->c6_is_active_PVARP;
  c6_p_u = c6_p_hoistedGlobal;
  c6_q_y = NULL;
  sf_mex_assign(&c6_q_y, sf_mex_create("y", &c6_p_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 15, c6_q_y);
  c6_q_hoistedGlobal = chartInstance->c6_is_active_VRP;
  c6_q_u = c6_q_hoistedGlobal;
  c6_r_y = NULL;
  sf_mex_assign(&c6_r_y, sf_mex_create("y", &c6_q_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 16, c6_r_y);
  c6_r_hoistedGlobal = chartInstance->c6_is_active_URI;
  c6_r_u = c6_r_hoistedGlobal;
  c6_s_y = NULL;
  sf_mex_assign(&c6_s_y, sf_mex_create("y", &c6_r_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 17, c6_s_y);
  c6_s_hoistedGlobal = chartInstance->c6_is_c6_SimpleModeling;
  c6_s_u = c6_s_hoistedGlobal;
  c6_t_y = NULL;
  sf_mex_assign(&c6_t_y, sf_mex_create("y", &c6_s_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 18, c6_t_y);
  c6_t_hoistedGlobal = chartInstance->c6_is_LRI;
  c6_t_u = c6_t_hoistedGlobal;
  c6_u_y = NULL;
  sf_mex_assign(&c6_u_y, sf_mex_create("y", &c6_t_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 19, c6_u_y);
  c6_u_hoistedGlobal = chartInstance->c6_is_AVI;
  c6_u_u = c6_u_hoistedGlobal;
  c6_v_y = NULL;
  sf_mex_assign(&c6_v_y, sf_mex_create("y", &c6_u_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 20, c6_v_y);
  c6_v_hoistedGlobal = chartInstance->c6_is_PVARP;
  c6_v_u = c6_v_hoistedGlobal;
  c6_w_y = NULL;
  sf_mex_assign(&c6_w_y, sf_mex_create("y", &c6_v_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 21, c6_w_y);
  c6_w_hoistedGlobal = chartInstance->c6_is_VRP;
  c6_w_u = c6_w_hoistedGlobal;
  c6_x_y = NULL;
  sf_mex_assign(&c6_x_y, sf_mex_create("y", &c6_w_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 22, c6_x_y);
  c6_x_hoistedGlobal = chartInstance->c6_is_URI;
  c6_x_u = c6_x_hoistedGlobal;
  c6_y_y = NULL;
  sf_mex_assign(&c6_y_y, sf_mex_create("y", &c6_x_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 23, c6_y_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_AR = c6_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 0)), "AR");
  *chartInstance->c6_ARPout = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 1)), "ARPout");
  *chartInstance->c6_AVIout = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 2)), "AVIout");
  *chartInstance->c6_LRIout = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 3)), "LRIout");
  *chartInstance->c6_VRPout = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 4)), "VRPout");
  chartInstance->c6_ARPcur = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 5)), "ARPcur");
  chartInstance->c6_AVIcur = c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 6)), "AVIcur");
  chartInstance->c6_AVIst = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 7)), "AVIst");
  chartInstance->c6_LRIcur = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 8)), "LRIcur");
  chartInstance->c6_URIcur = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 9)), "URIcur");
  chartInstance->c6_URIst = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 10)), "URIst");
  chartInstance->c6_VRPcur = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 11)), "VRPcur");
  chartInstance->c6_is_active_c6_SimpleModeling = c6_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 12)),
     "is_active_c6_SimpleModeling");
  chartInstance->c6_is_active_LRI = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 13)), "is_active_LRI");
  chartInstance->c6_is_active_AVI = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 14)), "is_active_AVI");
  chartInstance->c6_is_active_PVARP = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 15)), "is_active_PVARP");
  chartInstance->c6_is_active_VRP = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 16)), "is_active_VRP");
  chartInstance->c6_is_active_URI = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 17)), "is_active_URI");
  chartInstance->c6_is_c6_SimpleModeling = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 18)), "is_c6_SimpleModeling");
  chartInstance->c6_is_LRI = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 19)), "is_LRI");
  chartInstance->c6_is_AVI = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 20)), "is_AVI");
  chartInstance->c6_is_PVARP = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 21)), "is_PVARP");
  chartInstance->c6_is_VRP = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 22)), "is_VRP");
  chartInstance->c6_is_URI = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 23)), "is_URI");
  sf_mex_assign(&chartInstance->c6_setSimStateSideEffectsInfo,
                c6_l_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 24)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c6_u);
  chartInstance->c6_doSetSimStateSideEffects = 1U;
  c6_update_debugger_state_c6_SimpleModeling(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void c6_set_sim_state_side_effects_c6_SimpleModeling
  (SFc6_SimpleModelingInstanceStruct *chartInstance)
{
  if (chartInstance->c6_doSetSimStateSideEffects != 0) {
    if (chartInstance->c6_is_c6_SimpleModeling == c6_IN_pacemakerDDD) {
      chartInstance->c6_tp_pacemakerDDD = 1U;
    } else {
      chartInstance->c6_tp_pacemakerDDD = 0U;
    }

    if (chartInstance->c6_is_active_LRI == 1U) {
      chartInstance->c6_b_tp_LRI = 1U;
    } else {
      chartInstance->c6_b_tp_LRI = 0U;
    }

    if (chartInstance->c6_is_LRI == c6_IN_LRI) {
      chartInstance->c6_tp_LRI = 1U;
    } else {
      chartInstance->c6_tp_LRI = 0U;
    }

    if (chartInstance->c6_is_active_AVI == 1U) {
      chartInstance->c6_tp_AVI = 1U;
    } else {
      chartInstance->c6_tp_AVI = 0U;
    }

    if (chartInstance->c6_is_AVI == c6_IN_st1) {
      chartInstance->c6_tp_st1 = 1U;
    } else {
      chartInstance->c6_tp_st1 = 0U;
    }

    if (chartInstance->c6_is_AVI == c6_IN_st2) {
      chartInstance->c6_tp_st2 = 1U;
    } else {
      chartInstance->c6_tp_st2 = 0U;
    }

    if (chartInstance->c6_is_active_PVARP == 1U) {
      chartInstance->c6_tp_PVARP = 1U;
    } else {
      chartInstance->c6_tp_PVARP = 0U;
    }

    if (chartInstance->c6_is_PVARP == c6_IN_ARPs1) {
      chartInstance->c6_tp_ARPs1 = 1U;
    } else {
      chartInstance->c6_tp_ARPs1 = 0U;
    }

    if (chartInstance->c6_is_PVARP == c6_IN_ARPs2) {
      chartInstance->c6_tp_ARPs2 = 1U;
    } else {
      chartInstance->c6_tp_ARPs2 = 0U;
    }

    if (chartInstance->c6_is_active_VRP == 1U) {
      chartInstance->c6_tp_VRP = 1U;
    } else {
      chartInstance->c6_tp_VRP = 0U;
    }

    if (chartInstance->c6_is_VRP == c6_IN_VRPst1) {
      chartInstance->c6_tp_VRPst1 = 1U;
    } else {
      chartInstance->c6_tp_VRPst1 = 0U;
    }

    if (chartInstance->c6_is_VRP == c6_IN_VRPst2) {
      chartInstance->c6_tp_VRPst2 = 1U;
    } else {
      chartInstance->c6_tp_VRPst2 = 0U;
    }

    if (chartInstance->c6_is_active_URI == 1U) {
      chartInstance->c6_tp_URI = 1U;
    } else {
      chartInstance->c6_tp_URI = 0U;
    }

    if (chartInstance->c6_is_URI == c6_IN_URIst1) {
      chartInstance->c6_tp_URIst1 = 1U;
    } else {
      chartInstance->c6_tp_URIst1 = 0U;
    }

    if (chartInstance->c6_is_URI == c6_IN_URIst2) {
      chartInstance->c6_tp_URIst2 = 1U;
    } else {
      chartInstance->c6_tp_URIst2 = 0U;
    }

    chartInstance->c6_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c6_setSimStateSideEffectsInfo);
}

static void sf_gateway_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  c6_set_sim_state_side_effects_c6_SimpleModeling(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_LRIcur, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_LRIout, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_Ain, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_ARPout, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_VRPout, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_Vin, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIcur, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_ARPcur, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_VRPcur, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIcur, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_LRIdef, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_ARPdef, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIdef, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_URIdef, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIst, 15U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIst, 16U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_VRPdef, 17U);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c6_AR, 18U);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
  if (chartInstance->c6_is_active_c6_SimpleModeling == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_active_c6_SimpleModeling = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_c6_SimpleModeling = c6_IN_pacemakerDDD;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_pacemakerDDD = 1U;
    chartInstance->c6_is_active_LRI = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c6_sfEvent);
    chartInstance->c6_b_tp_LRI = 1U;
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, chartInstance->c6_sfEvent);
    chartInstance->c6_LRIcur = *chartInstance->c6_LRIdef;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_LRIcur, 0U);
    *chartInstance->c6_LRIout = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_LRIout, 1U);
    chartInstance->c6_is_LRI = c6_IN_LRI;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_LRI = 1U;
    chartInstance->c6_is_active_AVI = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_AVI = 1U;
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
    *chartInstance->c6_AVIout = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
    chartInstance->c6_is_AVI = c6_IN_st1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_st1 = 1U;
    chartInstance->c6_AVIcur = c6__s16_u16_(chartInstance,
      *chartInstance->c6_AVIdef);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIcur, 7U);
    chartInstance->c6_AVIst = true;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIst, 15U);
    chartInstance->c6_is_active_PVARP = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_PVARP = 1U;
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c6_sfEvent);
    *chartInstance->c6_ARPout = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_ARPout, 4U);
    chartInstance->c6_ARPcur = *chartInstance->c6_ARPdef;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_ARPcur, 8U);
    chartInstance->c6_is_PVARP = c6_IN_ARPs1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_ARPs1 = 1U;
    chartInstance->c6_is_active_VRP = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_VRP = 1U;
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
    *chartInstance->c6_VRPout = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_VRPout, 5U);
    chartInstance->c6_is_VRP = c6_IN_VRPst1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_VRPst1 = 1U;
    chartInstance->c6_VRPcur = *chartInstance->c6_VRPdef;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_VRPcur, 9U);
    chartInstance->c6_is_active_URI = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_URI = 1U;
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_URI = c6_IN_URIst1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_URIst1 = 1U;
    chartInstance->c6_URIst = true;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIst, 16U);
    chartInstance->c6_URIcur = *chartInstance->c6_URIdef;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIcur, 10U);
  } else {
    c6_pacemakerDDD(chartInstance);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_SimpleModelingMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc6_SimpleModeling(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c6_pacemakerDDD(SFc6_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T c6_temp;
  boolean_T c6_b_temp;
  boolean_T c6_c_temp;
  boolean_T c6_out;
  boolean_T c6_d_temp;
  boolean_T c6_b_out;
  boolean_T c6_c_out;
  boolean_T c6_d_out;
  boolean_T c6_e_out;
  boolean_T c6_f_out;
  boolean_T c6_g_out;
  boolean_T c6_e_temp;
  boolean_T c6_h_out;
  boolean_T c6_f_temp;
  boolean_T c6_i_out;
  boolean_T c6_j_out;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c6_sfEvent);
  c6_LRI(chartInstance);
  c6_AVI(chartInstance);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U, chartInstance->c6_sfEvent);
  switch (chartInstance->c6_is_PVARP) {
   case c6_IN_ARPs1:
    CV_STATE_EVAL(6, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U, chartInstance->c6_sfEvent);
    c6_temp = (_SFD_CCP_CALL(7U, 0, *chartInstance->c6_Ain != 0U,
                chartInstance->c6_sfEvent) != 0);
    if (c6_temp) {
      c6_temp = (_SFD_CCP_CALL(7U, 1, CV_RELATIONAL_EVAL(5U, 7U, 0, (real_T)
        chartInstance->c6_AVIst, 1.0, 0, 0U, (int32_T)chartInstance->c6_AVIst ==
        1) != 0U, chartInstance->c6_sfEvent) != 0);
    }

    c6_b_temp = c6_temp;
    if (c6_b_temp) {
      c6_b_temp = !(_SFD_CCP_CALL(7U, 2, *chartInstance->c6_AVIout != 0U,
        chartInstance->c6_sfEvent) != 0);
    }

    c6_c_temp = c6_b_temp;
    if (c6_c_temp) {
      c6_c_temp = !(_SFD_CCP_CALL(7U, 3, *chartInstance->c6_VRPout != 0U,
        chartInstance->c6_sfEvent) != 0);
    }

    c6_out = (CV_TRANSITION_EVAL(7U, (int32_T)c6_c_temp) != 0);
    if (c6_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
      *chartInstance->c6_ARPout = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_ARPout, 4U);
      chartInstance->c6_tp_ARPs1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_PVARP = c6_IN_ARPs1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_ARPs1 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   chartInstance->c6_sfEvent);
      c6_d_temp = (_SFD_CCP_CALL(8U, 0, *chartInstance->c6_AVIout != 0U,
        chartInstance->c6_sfEvent) != 0);
      if (!c6_d_temp) {
        c6_d_temp = (_SFD_CCP_CALL(8U, 1, *chartInstance->c6_VRPout != 0U,
          chartInstance->c6_sfEvent) != 0);
      }

      c6_b_out = (CV_TRANSITION_EVAL(8U, (int32_T)c6_d_temp) != 0);
      if (c6_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
        *chartInstance->c6_ARPout = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_ARPout, 4U);
        chartInstance->c6_tp_ARPs1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_PVARP = c6_IN_ARPs2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_ARPs2 = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     chartInstance->c6_sfEvent);
        *chartInstance->c6_ARPout = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_ARPout, 4U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c6_sfEvent);
    break;

   case c6_IN_ARPs2:
    CV_STATE_EVAL(6, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, chartInstance->c6_sfEvent);
    c6_c_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
      CV_RELATIONAL_EVAL(5U, 9U, 0, (real_T)chartInstance->c6_ARPcur, 0.0, 0, 0U,
                         chartInstance->c6_ARPcur == 0) != 0U,
      chartInstance->c6_sfEvent)) != 0);
    if (c6_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c6_sfEvent);
      chartInstance->c6_ARPcur = *chartInstance->c6_ARPdef;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_ARPcur, 8U);
      chartInstance->c6_tp_ARPs2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_PVARP = c6_IN_ARPs1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_ARPs1 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                   chartInstance->c6_sfEvent);
      c6_d_out = (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18U, 0,
        *chartInstance->c6_Ain != 0U, chartInstance->c6_sfEvent)) != 0);
      if (c6_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, chartInstance->c6_sfEvent);
        *chartInstance->c6_AR = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_AR, 18U);
        chartInstance->c6_tp_ARPs2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_PVARP = c6_IN_ARPs2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_ARPs2 = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     chartInstance->c6_sfEvent);
        chartInstance->c6_ARPcur = c6__u16_s32_(chartInstance,
          chartInstance->c6_ARPcur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_ARPcur, 8U);
        *chartInstance->c6_ARPout = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_ARPout, 4U);
        *chartInstance->c6_AR = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_AR, 18U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c6_sfEvent);
    break;

   default:
    CV_STATE_EVAL(6, 0, 0);
    chartInstance->c6_is_PVARP = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c6_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U, chartInstance->c6_sfEvent);
  switch (chartInstance->c6_is_VRP) {
   case c6_IN_VRPst1:
    CV_STATE_EVAL(12, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                 chartInstance->c6_sfEvent);
    c6_e_out = (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0,
      *chartInstance->c6_Vin != 0U, chartInstance->c6_sfEvent)) != 0);
    if (c6_e_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c6_sfEvent);
      *chartInstance->c6_VRPout = *chartInstance->c6_Vin;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_VRPout, 5U);
      chartInstance->c6_tp_VRPst1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_VRP = c6_IN_VRPst2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_VRPst2 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   chartInstance->c6_sfEvent);
      c6_f_out = (CV_TRANSITION_EVAL(19U, (int32_T)_SFD_CCP_CALL(19U, 0,
        *chartInstance->c6_AVIout != 0U, chartInstance->c6_sfEvent)) != 0);
      if (c6_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_VRPst1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_VRP = c6_IN_VRPst2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_VRPst2 = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 13U,
                     chartInstance->c6_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, chartInstance->c6_sfEvent);
    break;

   case c6_IN_VRPst2:
    CV_STATE_EVAL(12, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                 chartInstance->c6_sfEvent);
    c6_g_out = (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0,
      CV_RELATIONAL_EVAL(5U, 12U, 0, (real_T)chartInstance->c6_VRPcur, 0.0, 0,
                         0U, chartInstance->c6_VRPcur == 0) != 0U,
      chartInstance->c6_sfEvent)) != 0);
    if (c6_g_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c6_sfEvent);
      *chartInstance->c6_VRPout = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_VRPout, 5U);
      chartInstance->c6_tp_VRPst2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_VRP = c6_IN_VRPst1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_VRPst1 = 1U;
      chartInstance->c6_VRPcur = *chartInstance->c6_VRPdef;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_VRPcur, 9U);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                   chartInstance->c6_sfEvent);
      chartInstance->c6_VRPcur = c6__u16_s32_(chartInstance,
        chartInstance->c6_VRPcur - 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_VRPcur, 9U);
      *chartInstance->c6_VRPout = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_VRPout, 5U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, chartInstance->c6_sfEvent);
    break;

   default:
    CV_STATE_EVAL(12, 0, 0);
    chartInstance->c6_is_VRP = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, chartInstance->c6_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U, chartInstance->c6_sfEvent);
  switch (chartInstance->c6_is_URI) {
   case c6_IN_URIst1:
    CV_STATE_EVAL(9, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                 chartInstance->c6_sfEvent);
    c6_e_temp = (_SFD_CCP_CALL(14U, 0, *chartInstance->c6_AVIout != 0U,
      chartInstance->c6_sfEvent) != 0);
    if (!c6_e_temp) {
      c6_e_temp = (_SFD_CCP_CALL(14U, 1, *chartInstance->c6_VRPout != 0U,
        chartInstance->c6_sfEvent) != 0);
    }

    c6_h_out = (CV_TRANSITION_EVAL(14U, (int32_T)c6_e_temp) != 0);
    if (c6_h_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, chartInstance->c6_sfEvent);
      chartInstance->c6_URIst = false;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIst, 16U);
      chartInstance->c6_tp_URIst1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_URI = c6_IN_URIst2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_URIst2 = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                   chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, chartInstance->c6_sfEvent);
    break;

   case c6_IN_URIst2:
    CV_STATE_EVAL(9, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 chartInstance->c6_sfEvent);
    c6_f_temp = (_SFD_CCP_CALL(15U, 0, CV_RELATIONAL_EVAL(5U, 15U, 0, (real_T)
      chartInstance->c6_URIcur, 0.0, 0, 0U, chartInstance->c6_URIcur == 0) != 0U,
      chartInstance->c6_sfEvent) != 0);
    if (c6_f_temp) {
      c6_f_temp = (_SFD_CCP_CALL(15U, 1, CV_RELATIONAL_EVAL(5U, 15U, 1, (real_T)
        chartInstance->c6_AVIcur, 0.0, 0, 2U, chartInstance->c6_AVIcur < 0) !=
        0U, chartInstance->c6_sfEvent) != 0);
    }

    c6_i_out = (CV_TRANSITION_EVAL(15U, (int32_T)c6_f_temp) != 0);
    if (c6_i_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, chartInstance->c6_sfEvent);
      *chartInstance->c6_AVIout = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
      chartInstance->c6_AVIcur = c6__s16_u16_(chartInstance,
        *chartInstance->c6_AVIdef);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIcur, 7U);
      chartInstance->c6_tp_URIst2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_URI = c6_IN_URIst1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_URIst1 = 1U;
      chartInstance->c6_URIst = true;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIst, 16U);
      chartInstance->c6_URIcur = *chartInstance->c6_URIdef;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIcur, 10U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                   chartInstance->c6_sfEvent);
      c6_j_out = (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16U, 0,
        CV_RELATIONAL_EVAL(5U, 16U, 0, (real_T)chartInstance->c6_URIcur, 0.0, 0,
                           0U, chartInstance->c6_URIcur == 0) != 0U,
        chartInstance->c6_sfEvent)) != 0);
      if (c6_j_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_URIst2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_URI = c6_IN_URIst1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_URIst1 = 1U;
        chartInstance->c6_URIst = true;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIst, 16U);
        chartInstance->c6_URIcur = *chartInstance->c6_URIdef;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIcur, 10U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                     chartInstance->c6_sfEvent);
        chartInstance->c6_URIcur = c6__u16_s32_(chartInstance,
          chartInstance->c6_URIcur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_URIcur, 10U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c6_sfEvent);
    break;

   default:
    CV_STATE_EVAL(9, 0, 0);
    chartInstance->c6_is_URI = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, chartInstance->c6_sfEvent);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c6_sfEvent);
}

static void c6_LRI(SFc6_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T c6_temp;
  boolean_T c6_b_temp;
  boolean_T c6_out;
  boolean_T c6_c_temp;
  boolean_T c6_b_out;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U, chartInstance->c6_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c6_sfEvent);
  c6_temp = (_SFD_CCP_CALL(1U, 0, CV_RELATIONAL_EVAL(5U, 1U, 0, (real_T)
    chartInstance->c6_LRIcur, 0.0, 0, 0U, chartInstance->c6_LRIcur == 0) != 0U,
              chartInstance->c6_sfEvent) != 0);
  if (!c6_temp) {
    c6_temp = (_SFD_CCP_CALL(1U, 1, *chartInstance->c6_AVIout != 0U,
                chartInstance->c6_sfEvent) != 0);
  }

  c6_b_temp = c6_temp;
  if (!c6_b_temp) {
    c6_b_temp = (_SFD_CCP_CALL(1U, 2, *chartInstance->c6_VRPout != 0U,
      chartInstance->c6_sfEvent) != 0);
  }

  c6_out = (CV_TRANSITION_EVAL(1U, (int32_T)c6_b_temp) != 0);
  if (c6_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
    chartInstance->c6_LRIcur = *chartInstance->c6_LRIdef;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_LRIcur, 0U);
    *chartInstance->c6_LRIout = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_LRIout, 1U);
    chartInstance->c6_tp_LRI = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_LRI = c6_IN_LRI;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_LRI = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c6_sfEvent);
    c6_c_temp = (_SFD_CCP_CALL(0U, 0, CV_RELATIONAL_EVAL(5U, 0U, 0, (real_T)
      chartInstance->c6_LRIcur, (real_T)*chartInstance->c6_AVIdef, 0, 0U,
      chartInstance->c6_LRIcur == *chartInstance->c6_AVIdef) != 0U,
      chartInstance->c6_sfEvent) != 0);
    if (c6_c_temp) {
      c6_c_temp = (_SFD_CCP_CALL(0U, 1, CV_RELATIONAL_EVAL(5U, 0U, 1, (real_T)
        chartInstance->c6_AVIst, 1.0, 0, 0U, (int32_T)chartInstance->c6_AVIst ==
        1) != 0U, chartInstance->c6_sfEvent) != 0);
    }

    c6_b_out = (CV_TRANSITION_EVAL(0U, (int32_T)c6_c_temp) != 0);
    if (c6_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
      *chartInstance->c6_LRIout = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_LRIout, 1U);
      chartInstance->c6_LRIcur = c6__u16_s32_(chartInstance,
        chartInstance->c6_LRIcur - 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_LRIcur, 0U);
      chartInstance->c6_tp_LRI = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_LRI = c6_IN_LRI;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_LRI = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   chartInstance->c6_sfEvent);
      chartInstance->c6_LRIcur = c6__u16_s32_(chartInstance,
        chartInstance->c6_LRIcur - 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_LRIcur, 0U);
      *chartInstance->c6_LRIout = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_LRIout, 1U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c6_sfEvent);
}

static void c6_AVI(SFc6_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T c6_temp;
  boolean_T c6_out;
  boolean_T c6_b_out;
  boolean_T c6_b_temp;
  boolean_T c6_c_out;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c6_sfEvent);
  switch (chartInstance->c6_is_AVI) {
   case c6_IN_st1:
    CV_STATE_EVAL(1, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c6_sfEvent);
    c6_temp = (_SFD_CCP_CALL(3U, 0, *chartInstance->c6_LRIout != 0U,
                chartInstance->c6_sfEvent) != 0);
    if (!c6_temp) {
      c6_temp = (_SFD_CCP_CALL(3U, 1, *chartInstance->c6_ARPout != 0U,
                  chartInstance->c6_sfEvent) != 0);
    }

    c6_out = (CV_TRANSITION_EVAL(3U, (int32_T)c6_temp) != 0);
    if (c6_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
      chartInstance->c6_AVIst = false;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIst, 15U);
      chartInstance->c6_tp_st1 = 0U;
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
      *chartInstance->c6_AVIout = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_AVI = c6_IN_st2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_st2 = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c6_sfEvent);
      *chartInstance->c6_AVIout = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
    break;

   case c6_IN_st2:
    CV_STATE_EVAL(1, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U, chartInstance->c6_sfEvent);
    c6_b_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
      *chartInstance->c6_VRPout != 0U, chartInstance->c6_sfEvent)) != 0);
    if (c6_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c6_sfEvent);
      *chartInstance->c6_AVIout = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
      chartInstance->c6_tp_st2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_AVI = c6_IN_st1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_st1 = 1U;
      chartInstance->c6_AVIcur = c6__s16_u16_(chartInstance,
        *chartInstance->c6_AVIdef);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIcur, 7U);
      chartInstance->c6_AVIst = true;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIst, 15U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c6_sfEvent);
      c6_b_temp = (_SFD_CCP_CALL(5U, 0, CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)
        chartInstance->c6_AVIcur, 0.0, 0, 3U, chartInstance->c6_AVIcur <= 0) !=
        0U, chartInstance->c6_sfEvent) != 0);
      if (c6_b_temp) {
        c6_b_temp = (_SFD_CCP_CALL(5U, 1, CV_RELATIONAL_EVAL(5U, 5U, 1, (real_T)
          chartInstance->c6_URIst, 1.0, 0, 0U, (int32_T)chartInstance->c6_URIst ==
          1) != 0U, chartInstance->c6_sfEvent) != 0);
      }

      c6_c_out = (CV_TRANSITION_EVAL(5U, (int32_T)c6_b_temp) != 0);
      if (c6_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
        *chartInstance->c6_AVIout = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
        chartInstance->c6_tp_st2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_AVI = c6_IN_st1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_st1 = 1U;
        chartInstance->c6_AVIcur = c6__s16_u16_(chartInstance,
          *chartInstance->c6_AVIdef);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIcur, 7U);
        chartInstance->c6_AVIst = true;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIst, 15U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     chartInstance->c6_sfEvent);
        chartInstance->c6_AVIcur = c6__s16_s32_(chartInstance,
          chartInstance->c6_AVIcur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_AVIcur, 7U);
        *chartInstance->c6_AVIout = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AVIout, 3U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
    break;

   default:
    CV_STATE_EVAL(1, 0, 0);
    chartInstance->c6_is_AVI = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c6_sfEvent);
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber)
{
  (void)c6_machineNumber;
  (void)c6_chartNumber;
  (void)c6_instanceNumber;
}

const mxArray *sf_c6_SimpleModeling_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static int32_T c6_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int32_T c6_y;
  int32_T c6_i0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i0, 1, 6, 0U, 0, 0U, 0);
  c6_y = c6_i0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_sfEvent;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int32_T c6_y;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_b_sfEvent = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_sfEvent), &c6_thisId);
  sf_mex_destroy(&c6_b_sfEvent);
  *(int32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint8_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint8_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static uint8_T c6_b_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_tp_pacemakerDDD, const char_T
  *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_pacemakerDDD),
    &c6_thisId);
  sf_mex_destroy(&c6_b_tp_pacemakerDDD);
  return c6_y;
}

static uint8_T c6_c_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_u0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u0, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_tp_pacemakerDDD;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_b_tp_pacemakerDDD = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_pacemakerDDD),
    &c6_thisId);
  sf_mex_destroy(&c6_b_tp_pacemakerDDD);
  *(uint8_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint16_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint16_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static uint16_T c6_d_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_LRIcur, const char_T *c6_identifier)
{
  uint16_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_LRIcur),
    &c6_thisId);
  sf_mex_destroy(&c6_b_LRIcur);
  return c6_y;
}

static uint16_T c6_e_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint16_T c6_y;
  uint16_T c6_u1;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u1, 1, 5, 0U, 0, 0U, 0);
  c6_y = c6_u1;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_LRIcur;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint16_T c6_y;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_b_LRIcur = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_LRIcur),
    &c6_thisId);
  sf_mex_destroy(&c6_b_LRIcur);
  *(uint16_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  boolean_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(boolean_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static boolean_T c6_f_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_LRIout, const char_T *c6_identifier)
{
  boolean_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_LRIout),
    &c6_thisId);
  sf_mex_destroy(&c6_b_LRIout);
  return c6_y;
}

static boolean_T c6_g_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  boolean_T c6_y;
  boolean_T c6_b0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b0, 1, 11, 0U, 0, 0U, 0);
  c6_y = c6_b0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_LRIout;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  boolean_T c6_y;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_b_LRIout = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_LRIout),
    &c6_thisId);
  sf_mex_destroy(&c6_b_LRIout);
  *(boolean_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_e_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int16_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int16_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 4, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static int16_T c6_h_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_AVIcur, const char_T *c6_identifier)
{
  int16_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_AVIcur),
    &c6_thisId);
  sf_mex_destroy(&c6_b_AVIcur);
  return c6_y;
}

static int16_T c6_i_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int16_T c6_y;
  int16_T c6_i1;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i1, 1, 4, 0U, 0, 0U, 0);
  c6_y = c6_i1;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_AVIcur;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int16_T c6_y;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_b_AVIcur = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_AVIcur),
    &c6_thisId);
  sf_mex_destroy(&c6_b_AVIcur);
  *(int16_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_f_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  real_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(real_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static real_T c6_j_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_AR, const char_T *c6_identifier)
{
  real_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_AR), &c6_thisId);
  sf_mex_destroy(&c6_b_AR);
  return c6_y;
}

static real_T c6_k_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_y;
  real_T c6_d0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_AR;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)chartInstanceVoid;
  c6_b_AR = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_AR), &c6_thisId);
  sf_mex_destroy(&c6_b_AR);
  *(real_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_l_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_b_setSimStateSideEffectsInfo, const char_T
  *c6_identifier)
{
  const mxArray *c6_y = NULL;
  emlrtMsgIdentifier c6_thisId;
  c6_y = NULL;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  sf_mex_assign(&c6_y, c6_m_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_setSimStateSideEffectsInfo), &c6_thisId), false);
  sf_mex_destroy(&c6_b_setSimStateSideEffectsInfo);
  return c6_y;
}

static const mxArray *c6_m_emlrt_marshallIn(SFc6_SimpleModelingInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  const mxArray *c6_y = NULL;
  (void)chartInstance;
  (void)c6_parentId;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_duplicatearraysafe(&c6_u), false);
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static int16_T c6__s16_u16_(SFc6_SimpleModelingInstanceStruct *chartInstance,
  uint16_T c6_b)
{
  int16_T c6_a;
  (void)chartInstance;
  c6_a = (int16_T)c6_b;
  if (c6_a < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW);
  }

  return c6_a;
}

static uint16_T c6__u16_s32_(SFc6_SimpleModelingInstanceStruct *chartInstance,
  int32_T c6_b)
{
  uint16_T c6_a;
  (void)chartInstance;
  c6_a = (uint16_T)c6_b;
  if (c6_a != c6_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW);
  }

  return c6_a;
}

static int16_T c6__s16_s32_(SFc6_SimpleModelingInstanceStruct *chartInstance,
  int32_T c6_b)
{
  int16_T c6_a;
  (void)chartInstance;
  c6_a = (int16_T)c6_b;
  if (c6_a != c6_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW);
  }

  return c6_a;
}

static void init_dsm_address_info(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_SimpleModelingInstanceStruct
  *chartInstance)
{
  chartInstance->c6_LRIout = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_Ain = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c6_AVIout = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_ARPout = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_VRPout = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c6_Vin = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_LRIdef = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_ARPdef = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_AVIdef = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c6_URIdef = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c6_VRPdef = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c6_AR = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c6_SimpleModeling_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(789323314U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3575453733U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3516745506U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(301720579U);
}

mxArray* sf_c6_SimpleModeling_get_post_codegen_info(void);
mxArray *sf_c6_SimpleModeling_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("TOcudz5hxdYt7Y6ZtkRPRC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,7,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c6_SimpleModeling_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c6_SimpleModeling_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_SimpleModeling_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "incompatibleSymbol", };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 3, infoFields);
  mxArray *fallbackReason = mxCreateString("feature_off");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxArray *fallbackType = mxCreateString("early");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c6_SimpleModeling_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c6_SimpleModeling_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c6_SimpleModeling(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[221],T\"AR\",},{M[1],M[145],T\"ARPout\",},{M[1],M[144],T\"AVIout\",},{M[1],M[24],T\"LRIout\",},{M[1],M[146],T\"VRPout\",},{M[3],M[149],T\"ARPcur\",},{M[3],M[148],T\"AVIcur\",},{M[3],M[167],T\"AVIst\",},{M[3],M[17],T\"LRIcur\",},{M[3],M[151],T\"URIcur\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[3],M[173],T\"URIst\",},{M[3],M[150],T\"VRPcur\",},{M[8],M[0],T\"is_active_c6_SimpleModeling\",},{M[8],M[200],T\"is_active_LRI\",},{M[8],M[205],T\"is_active_AVI\",},{M[8],M[207],T\"is_active_PVARP\",},{M[8],M[208],T\"is_active_VRP\",},{M[8],M[209],T\"is_active_URI\",},{M[9],M[0],T\"is_c6_SimpleModeling\",},{M[9],M[200],T\"is_LRI\",}}",
    "100 S1x4'type','srcId','name','auxInfo'{{M[9],M[205],T\"is_AVI\",},{M[9],M[207],T\"is_PVARP\",},{M[9],M[208],T\"is_VRP\",},{M[9],M[209],T\"is_URI\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 24, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_SimpleModeling_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_SimpleModelingInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc6_SimpleModelingInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SimpleModelingMachineNumber_,
           6,
           15,
           20,
           0,
           19,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_SimpleModelingMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_SimpleModelingMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _SimpleModelingMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"LRIcur");
          _SFD_SET_DATA_PROPS(1,2,0,1,"LRIout");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Ain");
          _SFD_SET_DATA_PROPS(3,2,0,1,"AVIout");
          _SFD_SET_DATA_PROPS(4,2,0,1,"ARPout");
          _SFD_SET_DATA_PROPS(5,2,0,1,"VRPout");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Vin");
          _SFD_SET_DATA_PROPS(7,0,0,0,"AVIcur");
          _SFD_SET_DATA_PROPS(8,0,0,0,"ARPcur");
          _SFD_SET_DATA_PROPS(9,0,0,0,"VRPcur");
          _SFD_SET_DATA_PROPS(10,0,0,0,"URIcur");
          _SFD_SET_DATA_PROPS(11,1,1,0,"LRIdef");
          _SFD_SET_DATA_PROPS(12,1,1,0,"ARPdef");
          _SFD_SET_DATA_PROPS(13,1,1,0,"AVIdef");
          _SFD_SET_DATA_PROPS(14,1,1,0,"URIdef");
          _SFD_SET_DATA_PROPS(15,0,0,0,"AVIst");
          _SFD_SET_DATA_PROPS(16,0,0,0,"URIst");
          _SFD_SET_DATA_PROPS(17,1,1,0,"VRPdef");
          _SFD_SET_DATA_PROPS(18,2,0,1,"AR");
          _SFD_STATE_INFO(0,1,0);
          _SFD_STATE_INFO(1,0,1);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,1);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,1);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,1);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,1);
          _SFD_STATE_INFO(13,0,0);
          _SFD_STATE_INFO(14,0,0);
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,5);
          _SFD_ST_SUBSTATE_INDEX(0,0,4);
          _SFD_ST_SUBSTATE_INDEX(0,1,1);
          _SFD_ST_SUBSTATE_INDEX(0,2,6);
          _SFD_ST_SUBSTATE_INDEX(0,3,12);
          _SFD_ST_SUBSTATE_INDEX(0,4,9);
          _SFD_ST_SUBSTATE_COUNT(4,1);
          _SFD_ST_SUBSTATE_INDEX(4,0,5);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(1,2);
          _SFD_ST_SUBSTATE_INDEX(1,0,2);
          _SFD_ST_SUBSTATE_INDEX(1,1,3);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(6,2);
          _SFD_ST_SUBSTATE_INDEX(6,0,7);
          _SFD_ST_SUBSTATE_INDEX(6,1,8);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(12,2);
          _SFD_ST_SUBSTATE_INDEX(12,0,13);
          _SFD_ST_SUBSTATE_INDEX(12,1,14);
          _SFD_ST_SUBSTATE_COUNT(13,0);
          _SFD_ST_SUBSTATE_COUNT(14,0);
          _SFD_ST_SUBSTATE_COUNT(9,2);
          _SFD_ST_SUBSTATE_INDEX(9,0,10);
          _SFD_ST_SUBSTATE_INDEX(9,1,11);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,5,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,1,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(13,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(14,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 14, 24 };

          static unsigned int sEndGuardMap[] = { 11, 20, 30 };

          static int sPostFixPredicateTree[] = { 0, 1, -2, 2, -2 };

          _SFD_CV_INIT_TRANS(1,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(1,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 20 };

          static unsigned int sEndGuardMap[] = { 16, 28 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(0,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 20 };

          static unsigned int sEndRelationalopMap[] = { 16, 28 };

          static int sRelationalopEps[] = { 0, 0 };

          static int sRelationalopType[] = { 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(0,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 15 };

          static unsigned int sEndGuardMap[] = { 11, 23 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 15 };

          static unsigned int sEndRelationalopMap[] = { 11, 23 };

          static int sRelationalopEps[] = { 0, 0 };

          static int sRelationalopType[] = { 3, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 9 };

          static unsigned int sEndGuardMap[] = { 7, 15 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 4 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(12,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 4 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 9 };

          static unsigned int sEndGuardMap[] = { 7, 15 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 7, 20, 31 };

          static unsigned int sEndGuardMap[] = { 4, 15, 26, 37 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -1, -3, 3, -1, -3
          };

          _SFD_CV_INIT_TRANS(7,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),9,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 7 };

          static unsigned int sEndRelationalopMap[] = { 15 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 11 };

          static unsigned int sEndGuardMap[] = { 7, 17 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(14,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 10 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(16,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 15 };

          static unsigned int sEndGuardMap[] = { 11, 23 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(15,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 15 };

          static unsigned int sEndRelationalopMap[] = { 11, 23 };

          static int sRelationalopEps[] = { 0, 0 };

          static int sRelationalopType[] = { 0, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(15,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)c6_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)c6_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)c6_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)c6_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)c6_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_INT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_e_sf_marshallOut,(MexInFcnForType)c6_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)c6_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)c6_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)c6_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)c6_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)c6_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_f_sf_marshallOut,(MexInFcnForType)c6_f_sf_marshallIn);
        _SFD_SET_DATA_VALUE_PTR(0U, &chartInstance->c6_LRIcur);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c6_LRIout);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c6_Ain);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c6_AVIout);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c6_ARPout);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c6_VRPout);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c6_Vin);
        _SFD_SET_DATA_VALUE_PTR(7U, &chartInstance->c6_AVIcur);
        _SFD_SET_DATA_VALUE_PTR(8U, &chartInstance->c6_ARPcur);
        _SFD_SET_DATA_VALUE_PTR(9U, &chartInstance->c6_VRPcur);
        _SFD_SET_DATA_VALUE_PTR(10U, &chartInstance->c6_URIcur);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c6_LRIdef);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c6_ARPdef);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c6_AVIdef);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c6_URIdef);
        _SFD_SET_DATA_VALUE_PTR(15U, &chartInstance->c6_AVIst);
        _SFD_SET_DATA_VALUE_PTR(16U, &chartInstance->c6_URIst);
        _SFD_SET_DATA_VALUE_PTR(17U, chartInstance->c6_VRPdef);
        _SFD_SET_DATA_VALUE_PTR(18U, chartInstance->c6_AR);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _SimpleModelingMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "Iu7NUGoKCAYPZ5qWd1AR7E";
}

static void sf_opaque_initialize_c6_SimpleModeling(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc6_SimpleModelingInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
    chartInstanceVar);
  initialize_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_SimpleModeling(void *chartInstanceVar)
{
  enable_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_SimpleModeling(void *chartInstanceVar)
{
  disable_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c6_SimpleModeling(void *chartInstanceVar)
{
  sf_gateway_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_SimpleModeling(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_SimpleModeling(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c6_SimpleModeling(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_SimpleModelingInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SimpleModeling_optimization_info();
    }

    finalize_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_SimpleModeling(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    initialize_params_c6_SimpleModeling((SFc6_SimpleModelingInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_SimpleModeling(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SimpleModeling_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,6,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,6,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,6);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,6,7);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,6,5);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=5; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 7; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,6);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2802031571U));
  ssSetChecksum1(S,(1744308901U));
  ssSetChecksum2(S,(2397741923U));
  ssSetChecksum3(S,(266731244U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c6_SimpleModeling(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c6_SimpleModeling(SimStruct *S)
{
  SFc6_SimpleModelingInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc6_SimpleModelingInstanceStruct *)utMalloc(sizeof
    (SFc6_SimpleModelingInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc6_SimpleModelingInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_SimpleModeling;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_SimpleModeling;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c6_SimpleModeling;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_SimpleModeling;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_SimpleModeling;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_SimpleModeling;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_SimpleModeling;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_SimpleModeling;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_SimpleModeling;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_SimpleModeling;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_SimpleModeling;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  crtInfo->checksum = SF_RUNTIME_INFO_CHECKSUM;
  crtInfo->instanceInfo = (&(chartInstance->chartInfo));
  crtInfo->isJITEnabled = false;
  crtInfo->compiledInfo = NULL;
  ssSetUserData(S,(void *)(crtInfo));  /* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c6_SimpleModeling_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_SimpleModeling(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_SimpleModeling(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_SimpleModeling(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_SimpleModeling_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
