/* Include files */

#include <stddef.h>
#include "blas.h"
#include "SimpleModeling_sfun.h"
#include "c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "SimpleModeling_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NodeAutomaton ((uint8_T)1U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP ((uint8_T)1U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_IN_RRP ((uint8_T)2U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_IN_Rest ((uint8_T)3U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_const_TRRP_def ((uint16_T)100U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_const_TERP_defs ((uint16_T)150U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_const_TERP_s ((uint16_T)150U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_const_TRRP_s ((uint16_T)100U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_const_Trest_s ((uint16_T)9999U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_const_Terp_min ((uint16_T)150U)
#define c4_AKWZ2hTz1Kt3zen8afYfSH_const_Terp_max ((uint16_T)150U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void initialize_params_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void enable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void disable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void c4_AKWZ2hTz1Kt3zen8afYfSH_update_debugger_state_c4_AKWZ2hTz1Kt3z
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void set_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_st);
static void c4_AKWZ2hTz1Kt3zen8afYfSH_set_sim_state_side_effects_c4_AKWZ2hTz
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void finalize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void initSimStructsc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void registerMessagesc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void c4_AKWZ2hTz1Kt3zen8afYfSH_NodeAutomaton
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T
  c4_AKWZ2hTz1Kt3zen8afYfSH_machineNumber, uint32_T
  c4_AKWZ2hTz1Kt3zen8afYfSH_chartNumber);
static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData);
static int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId);
static void c4_AKWZ2hTz1Kt3zen8afYfSH_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData);
static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData);
static uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_b_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton, const char_T
   *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier);
static uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_c_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId);
static void c4_AKWZ2hTz1Kt3zen8afYfSH_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData);
static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData);
static uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur, const char_T
   *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier);
static uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_e_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId);
static void c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData);
static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_d_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData);
static boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_f_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_Active, const char_T
   *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier);
static boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_g_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId);
static void c4_AKWZ2hTz1Kt3zen8afYfSH_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData);
static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_h_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_setSimStateSideEffectsInfo, const
   char_T *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier);
static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_i_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId);
static uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH__u16_s32_
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_b);
static void init_dsm_address_info
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
  uint8_T *c4_AKWZ2hTz1Kt3zen8afYfSH_state;
  uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer;
  c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = (uint16_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c4_AKWZ2hTz1Kt3zen8afYfSH_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c4_AKWZ2hTz1Kt3zen8afYfSH_Active = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_doSetSimStateSideEffects = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_setSimStateSideEffectsInfo = NULL;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
    c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NO_ACTIVE_CHILD;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_NodeAutomaton = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_RRP = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_Si
    = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleMod
    = c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NO_ACTIVE_CHILD;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_ratio = 0U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_def = 100U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_defs = 150U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_s = 150U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_s = 100U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_s = 9999U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_min = 150U;
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_max = 150U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c4_AKWZ2hTz1Kt3zen8afYfSH_Active = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c4_AKWZ2hTz1Kt3zen8afYfSH_state = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 0U;
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_Si
    = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleMod
    = c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NodeAutomaton;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_NodeAutomaton = 1U;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  *c4_AKWZ2hTz1Kt3zen8afYfSH_Active = FALSE;
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_Active, 4U);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur =
    c4_AKWZ2hTz1Kt3zen8afYfSH_const_Trest_s;
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur, 2U);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def =
    c4_AKWZ2hTz1Kt3zen8afYfSH_const_TERP_defs;
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def, 13U);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur =
    c4_AKWZ2hTz1Kt3zen8afYfSH_const_TERP_s;
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur, 0U);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur =
    c4_AKWZ2hTz1Kt3zen8afYfSH_const_TRRP_s;
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur, 1U);
  *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
    c4_AKWZ2hTz1Kt3zen8afYfSH_IN_Rest;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_SimpleModelingMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initialize_params_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
}

static void enable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c4_AKWZ2hTz1Kt3zen8afYfSH_update_debugger_state_c4_AKWZ2hTz1Kt3z
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  uint32_T c4_AKWZ2hTz1Kt3zen8afYfSH_prevAniVal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_Si
      == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  }

  if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleMod
      == c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NodeAutomaton) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  }

  if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton ==
      c4_AKWZ2hTz1Kt3zen8afYfSH_IN_Rest) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  }

  if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton ==
      c4_AKWZ2hTz1Kt3zen8afYfSH_IN_RRP) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  }

  if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton ==
      c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  }

  _SFD_SET_ANIMATION(c4_AKWZ2hTz1Kt3zen8afYfSH_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_st;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_hoistedGlobal;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_y = NULL;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_b_hoistedGlobal;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_b_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_c_y = NULL;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_c_hoistedGlobal;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_c_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_d_y = NULL;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_d_hoistedGlobal;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_d_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_e_y = NULL;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_e_hoistedGlobal;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_e_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_f_y = NULL;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_f_hoistedGlobal;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_f_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_g_y = NULL;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_g_hoistedGlobal;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_g_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_h_y = NULL;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_h_hoistedGlobal;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_h_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_i_y = NULL;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_i_hoistedGlobal;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_i_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_j_y = NULL;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_j_hoistedGlobal;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_j_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_k_y = NULL;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_k_hoistedGlobal;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_k_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_l_y = NULL;
  boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
  uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer;
  uint8_T *c4_AKWZ2hTz1Kt3zen8afYfSH_state;
  c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = (uint16_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c4_AKWZ2hTz1Kt3zen8afYfSH_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c4_AKWZ2hTz1Kt3zen8afYfSH_Active = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  c4_AKWZ2hTz1Kt3zen8afYfSH_st = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_st = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_y, sf_mex_createcellarray(11), FALSE);
  c4_AKWZ2hTz1Kt3zen8afYfSH_hoistedGlobal = *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
  c4_AKWZ2hTz1Kt3zen8afYfSH_u = c4_AKWZ2hTz1Kt3zen8afYfSH_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_b_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_b_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 0, c4_AKWZ2hTz1Kt3zen8afYfSH_b_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_b_hoistedGlobal =
    *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer;
  c4_AKWZ2hTz1Kt3zen8afYfSH_b_u = c4_AKWZ2hTz1Kt3zen8afYfSH_b_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_c_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_c_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_b_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 1, c4_AKWZ2hTz1Kt3zen8afYfSH_c_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_c_hoistedGlobal = *c4_AKWZ2hTz1Kt3zen8afYfSH_state;
  c4_AKWZ2hTz1Kt3zen8afYfSH_c_u = c4_AKWZ2hTz1Kt3zen8afYfSH_c_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_d_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_d_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 2, c4_AKWZ2hTz1Kt3zen8afYfSH_d_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_d_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur;
  c4_AKWZ2hTz1Kt3zen8afYfSH_d_u = c4_AKWZ2hTz1Kt3zen8afYfSH_d_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_e_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_e_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_d_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 3, c4_AKWZ2hTz1Kt3zen8afYfSH_e_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_e_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def;
  c4_AKWZ2hTz1Kt3zen8afYfSH_e_u = c4_AKWZ2hTz1Kt3zen8afYfSH_e_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_f_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_f_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_e_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 4, c4_AKWZ2hTz1Kt3zen8afYfSH_f_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_f_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur;
  c4_AKWZ2hTz1Kt3zen8afYfSH_f_u = c4_AKWZ2hTz1Kt3zen8afYfSH_f_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_g_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_g_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_f_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 5, c4_AKWZ2hTz1Kt3zen8afYfSH_g_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_g_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur;
  c4_AKWZ2hTz1Kt3zen8afYfSH_g_u = c4_AKWZ2hTz1Kt3zen8afYfSH_g_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_h_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_h_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_g_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 6, c4_AKWZ2hTz1Kt3zen8afYfSH_h_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_h_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_ratio;
  c4_AKWZ2hTz1Kt3zen8afYfSH_h_u = c4_AKWZ2hTz1Kt3zen8afYfSH_h_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_i_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_i_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_h_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 7, c4_AKWZ2hTz1Kt3zen8afYfSH_i_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_i_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_Si;
  c4_AKWZ2hTz1Kt3zen8afYfSH_i_u = c4_AKWZ2hTz1Kt3zen8afYfSH_i_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_j_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_j_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_i_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 8, c4_AKWZ2hTz1Kt3zen8afYfSH_j_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_j_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleMod;
  c4_AKWZ2hTz1Kt3zen8afYfSH_j_u = c4_AKWZ2hTz1Kt3zen8afYfSH_j_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_k_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_k_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_j_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 9, c4_AKWZ2hTz1Kt3zen8afYfSH_k_y);
  c4_AKWZ2hTz1Kt3zen8afYfSH_k_hoistedGlobal =
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton;
  c4_AKWZ2hTz1Kt3zen8afYfSH_k_u = c4_AKWZ2hTz1Kt3zen8afYfSH_k_hoistedGlobal;
  c4_AKWZ2hTz1Kt3zen8afYfSH_l_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_l_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_k_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_AKWZ2hTz1Kt3zen8afYfSH_y, 10, c4_AKWZ2hTz1Kt3zen8afYfSH_l_y);
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_st, c4_AKWZ2hTz1Kt3zen8afYfSH_y,
                FALSE);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_st;
}

static void set_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_st)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u;
  boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
  uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer;
  uint8_T *c4_AKWZ2hTz1Kt3zen8afYfSH_state;
  c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = (uint16_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c4_AKWZ2hTz1Kt3zen8afYfSH_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c4_AKWZ2hTz1Kt3zen8afYfSH_Active = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_doneDoubleBufferReInit = TRUE;
  c4_AKWZ2hTz1Kt3zen8afYfSH_u = sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_st);
  *c4_AKWZ2hTz1Kt3zen8afYfSH_Active =
    c4_AKWZ2hTz1Kt3zen8afYfSH_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 0)), "Active");
  *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer =
    c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 1)), "path_timer");
  *c4_AKWZ2hTz1Kt3zen8afYfSH_state =
    c4_AKWZ2hTz1Kt3zen8afYfSH_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 2)), "state");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur =
    c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 3)), "TERP_cur");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def =
    c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 4)), "TERP_def");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur =
    c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 5)), "TRRP_cur");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur =
    c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 6)), "Trest_cur");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_ratio =
    c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 7)), "ratio");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_Si
    = c4_AKWZ2hTz1Kt3zen8afYfSH_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 8)),
    "is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleMod
    = c4_AKWZ2hTz1Kt3zen8afYfSH_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 9)),
    "is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling");
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
    c4_AKWZ2hTz1Kt3zen8afYfSH_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 10)), "is_NodeAutomaton");
  sf_mex_assign
    (&chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_setSimStateSideEffectsInfo,
     c4_AKWZ2hTz1Kt3zen8afYfSH_h_emlrt_marshallIn(chartInstance, sf_mex_dup
      (sf_mex_getcell(c4_AKWZ2hTz1Kt3zen8afYfSH_u, 11)),
      "setSimStateSideEffectsInfo"), TRUE);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_u);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_doSetSimStateSideEffects = 1U;
  c4_AKWZ2hTz1Kt3zen8afYfSH_update_debugger_state_c4_AKWZ2hTz1Kt3z(chartInstance);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_st);
}

static void c4_AKWZ2hTz1Kt3zen8afYfSH_set_sim_state_side_effects_c4_AKWZ2hTz
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_doSetSimStateSideEffects != 0) {
    if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleMod
        == c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NodeAutomaton) {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_NodeAutomaton = 1U;
    } else {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_NodeAutomaton = 0U;
    }

    if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton ==
        c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP) {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 1U;
    } else {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 0U;
    }

    if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton ==
        c4_AKWZ2hTz1Kt3zen8afYfSH_IN_RRP) {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_RRP = 1U;
    } else {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_RRP = 0U;
    }

    if (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton ==
        c4_AKWZ2hTz1Kt3zen8afYfSH_IN_Rest) {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest = 1U;
    } else {
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest = 0U;
    }

    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  sf_mex_destroy
    (&chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_setSimStateSideEffectsInfo);
}

static void sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
  boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive;
  uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def;
  uint8_T *c4_AKWZ2hTz1Kt3zen8afYfSH_state;
  uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer;
  c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = (uint16_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c4_AKWZ2hTz1Kt3zen8afYfSH_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 1);
  c4_AKWZ2hTz1Kt3zen8afYfSH_inActive = (boolean_T *)ssGetInputPortSignal
    (chartInstance->S, 0);
  c4_AKWZ2hTz1Kt3zen8afYfSH_Active = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  c4_AKWZ2hTz1Kt3zen8afYfSH_set_sim_state_side_effects_c4_AKWZ2hTz(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_def, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_Active, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_inActive, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_defs, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_s,
                        8U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_s,
                        9U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_s,
                        10U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_min, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_max, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_state, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_ratio,
                        16U);
  chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  c4_AKWZ2hTz1Kt3zen8afYfSH_NodeAutomaton(chartInstance);
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_SimpleModelingMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
}

static void registerMessagesc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
}

static void c4_AKWZ2hTz1Kt3zen8afYfSH_NodeAutomaton
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_b_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_temp;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_c_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_d_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_e_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_b_temp;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_f_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_c_temp;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_g_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_h_out;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_i_out;
  boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive;
  uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer;
  boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
  uint8_T *c4_AKWZ2hTz1Kt3zen8afYfSH_state;
  uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def;
  c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = (uint16_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c4_AKWZ2hTz1Kt3zen8afYfSH_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 1);
  c4_AKWZ2hTz1Kt3zen8afYfSH_inActive = (boolean_T *)ssGetInputPortSignal
    (chartInstance->S, 0);
  c4_AKWZ2hTz1Kt3zen8afYfSH_Active = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
  switch (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton) {
   case c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP:
    CV_STATE_EVAL(0, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
    c4_AKWZ2hTz1Kt3zen8afYfSH_out = (CV_TRANSITION_EVAL(2U, (int32_T)
      _SFD_CCP_CALL(2U, 0, *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive != 0U,
                    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent)) != 0);
    if (c4_AKWZ2hTz1Kt3zen8afYfSH_out) {
      if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 2;
        _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
        c4_AKWZ2hTz1Kt3zen8afYfSH_b_out = ((!*c4_AKWZ2hTz1Kt3zen8afYfSH_inActive)
          && (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur == 0));
        if (c4_AKWZ2hTz1Kt3zen8afYfSH_b_out) {
          transitionList[numTransitions] = 6;
          numTransitions++;
        }

        _SFD_TRANSITION_CONFLICT_CHECK_END();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur =
        c4_AKWZ2hTz1Kt3zen8afYfSH_const_Terp_min;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur,
                            0U);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def =
        c4_AKWZ2hTz1Kt3zen8afYfSH_const_Terp_min;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def,
                            13U);
      *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 3U;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 0U;
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 1U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      *c4_AKWZ2hTz1Kt3zen8afYfSH_Active = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_Active, 4U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
        c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      c4_AKWZ2hTz1Kt3zen8afYfSH_temp = !(_SFD_CCP_CALL(6U, 0,
        *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive != 0U,
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent) != 0);
      if (c4_AKWZ2hTz1Kt3zen8afYfSH_temp) {
        c4_AKWZ2hTz1Kt3zen8afYfSH_temp = (_SFD_CCP_CALL(6U, 1,
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur == 0 != 0U,
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent) != 0);
      }

      c4_AKWZ2hTz1Kt3zen8afYfSH_c_out = (CV_TRANSITION_EVAL(6U, (int32_T)
        c4_AKWZ2hTz1Kt3zen8afYfSH_temp) != 0);
      if (c4_AKWZ2hTz1Kt3zen8afYfSH_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur =
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur,
                              0U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 0U;
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 1U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_Active = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_Active, 4U);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
          c4_AKWZ2hTz1Kt3zen8afYfSH_IN_RRP;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_RRP = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur =
          c4_AKWZ2hTz1Kt3zen8afYfSH__u16_s32_(chartInstance,
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur,
                              0U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_Active = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_Active, 4U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_state = 2U;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_state, 14U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
    break;

   case c4_AKWZ2hTz1Kt3zen8afYfSH_IN_RRP:
    CV_STATE_EVAL(0, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
    c4_AKWZ2hTz1Kt3zen8afYfSH_d_out = (CV_TRANSITION_EVAL(3U, (int32_T)
      _SFD_CCP_CALL(3U, 0, *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive != 0U,
                    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent)) != 0);
    if (c4_AKWZ2hTz1Kt3zen8afYfSH_d_out) {
      if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 3;
        _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
        c4_AKWZ2hTz1Kt3zen8afYfSH_e_out = ((!*c4_AKWZ2hTz1Kt3zen8afYfSH_inActive)
          && (chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur == 0));
        if (c4_AKWZ2hTz1Kt3zen8afYfSH_e_out) {
          transitionList[numTransitions] = 5;
          numTransitions++;
        }

        _SFD_TRANSITION_CONFLICT_CHECK_END();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def =
        c4_AKWZ2hTz1Kt3zen8afYfSH_const_Terp_min;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def,
                            13U);
      *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 3U;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur =
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur,
                            0U);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur =
        c4_AKWZ2hTz1Kt3zen8afYfSH_const_TRRP_def;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur,
                            1U);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_RRP = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
        c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      c4_AKWZ2hTz1Kt3zen8afYfSH_b_temp = !(_SFD_CCP_CALL(5U, 0,
        *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive != 0U,
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent) != 0);
      if (c4_AKWZ2hTz1Kt3zen8afYfSH_b_temp) {
        c4_AKWZ2hTz1Kt3zen8afYfSH_b_temp = (_SFD_CCP_CALL(5U, 1,
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur == 0 != 0U,
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent) != 0);
      }

      c4_AKWZ2hTz1Kt3zen8afYfSH_f_out = (CV_TRANSITION_EVAL(5U, (int32_T)
        c4_AKWZ2hTz1Kt3zen8afYfSH_b_temp) != 0);
      if (c4_AKWZ2hTz1Kt3zen8afYfSH_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur =
          c4_AKWZ2hTz1Kt3zen8afYfSH_const_TRRP_def;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur,
                              1U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_RRP = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
          c4_AKWZ2hTz1Kt3zen8afYfSH_IN_Rest;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur =
          c4_AKWZ2hTz1Kt3zen8afYfSH__u16_s32_(chartInstance,
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur,
                              1U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_state = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_state, 14U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
    break;

   case c4_AKWZ2hTz1Kt3zen8afYfSH_IN_Rest:
    CV_STATE_EVAL(0, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
    c4_AKWZ2hTz1Kt3zen8afYfSH_c_temp = !(_SFD_CCP_CALL(4U, 0,
      *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive != 0U,
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent) != 0);
    if (c4_AKWZ2hTz1Kt3zen8afYfSH_c_temp) {
      c4_AKWZ2hTz1Kt3zen8afYfSH_c_temp = (_SFD_CCP_CALL(4U, 1,
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur == 0 != 0U,
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent) != 0);
    }

    c4_AKWZ2hTz1Kt3zen8afYfSH_g_out = (CV_TRANSITION_EVAL(4U, (int32_T)
      c4_AKWZ2hTz1Kt3zen8afYfSH_c_temp) != 0);
    if (c4_AKWZ2hTz1Kt3zen8afYfSH_g_out) {
      if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 4;
        _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
        c4_AKWZ2hTz1Kt3zen8afYfSH_h_out = *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive;
        if (c4_AKWZ2hTz1Kt3zen8afYfSH_h_out) {
          transitionList[numTransitions] = 1;
          numTransitions++;
        }

        _SFD_TRANSITION_CONFLICT_CHECK_END();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur =
        *c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur,
                            2U);
      *c4_AKWZ2hTz1Kt3zen8afYfSH_Active = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_Active, 4U);
      *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
        c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
      c4_AKWZ2hTz1Kt3zen8afYfSH_i_out = (CV_TRANSITION_EVAL(1U, (int32_T)
        _SFD_CCP_CALL(1U, 0, *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive != 0U,
                      chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent)) != 0);
      if (c4_AKWZ2hTz1Kt3zen8afYfSH_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur =
          *c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur,
                              2U);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def =
          c4_AKWZ2hTz1Kt3zen8afYfSH_const_Terp_max;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def,
                              13U);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur =
          c4_AKWZ2hTz1Kt3zen8afYfSH_const_Terp_max;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur,
                              0U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer, 15U);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
          c4_AKWZ2hTz1Kt3zen8afYfSH_IN_ERP;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
        chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur =
          c4_AKWZ2hTz1Kt3zen8afYfSH__u16_s32_(chartInstance,
          chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur,
                              2U);
        *c4_AKWZ2hTz1Kt3zen8afYfSH_state = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AKWZ2hTz1Kt3zen8afYfSH_state, 14U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
    break;

   default:
    CV_STATE_EVAL(0, 0, 0);
    chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton =
      c4_AKWZ2hTz1Kt3zen8afYfSH_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                 chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U,
               chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent);
}

static void init_script_number_translation(uint32_T
  c4_AKWZ2hTz1Kt3zen8afYfSH_machineNumber, uint32_T
  c4_AKWZ2hTz1Kt3zen8afYfSH_chartNumber)
{
}

const mxArray
  *sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_nameCaptureInfo = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_nameCaptureInfo, sf_mex_create(
    "nameCaptureInfo", NULL, 0, 0U, 1U, 0U, 2, 0, 1), FALSE);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_nameCaptureInfo;
}

static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_u = *(int32_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_inData;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData,
                c4_AKWZ2hTz1Kt3zen8afYfSH_y, FALSE);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData;
}

static int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId)
{
  int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_i0;
  sf_mex_import(c4_AKWZ2hTz1Kt3zen8afYfSH_parentId, sf_mex_dup
                (c4_AKWZ2hTz1Kt3zen8afYfSH_u), &c4_AKWZ2hTz1Kt3zen8afYfSH_i0, 1,
                6, 0U, 0, 0U, 0);
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_i0;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_u);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static void c4_AKWZ2hTz1Kt3zen8afYfSH_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_sfEvent;
  const char_T *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_b_sfEvent = sf_mex_dup
    (c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
  c4_AKWZ2hTz1Kt3zen8afYfSH_identifier = c4_AKWZ2hTz1Kt3zen8afYfSH_varName;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_b_sfEvent),
     &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_b_sfEvent);
  *(int32_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_outData = c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
}

static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_u = *(uint8_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_inData;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData,
                c4_AKWZ2hTz1Kt3zen8afYfSH_y, FALSE);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData;
}

static uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_b_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton, const char_T
   *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier)
{
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton),
     &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_c_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId)
{
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_u0;
  sf_mex_import(c4_AKWZ2hTz1Kt3zen8afYfSH_parentId, sf_mex_dup
                (c4_AKWZ2hTz1Kt3zen8afYfSH_u), &c4_AKWZ2hTz1Kt3zen8afYfSH_u0, 1,
                3, 0U, 0, 0U, 0);
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_u0;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_u);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static void c4_AKWZ2hTz1Kt3zen8afYfSH_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton;
  const char_T *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton = sf_mex_dup
    (c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
  c4_AKWZ2hTz1Kt3zen8afYfSH_identifier = c4_AKWZ2hTz1Kt3zen8afYfSH_varName;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton),
     &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_b_tp_NodeAutomaton);
  *(uint8_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_outData = c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
}

static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_u = *(uint16_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_inData;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData,
                c4_AKWZ2hTz1Kt3zen8afYfSH_y, FALSE);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData;
}

static uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_d_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur, const char_T
   *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier)
{
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur),
     &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_e_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId)
{
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_u1;
  sf_mex_import(c4_AKWZ2hTz1Kt3zen8afYfSH_parentId, sf_mex_dup
                (c4_AKWZ2hTz1Kt3zen8afYfSH_u), &c4_AKWZ2hTz1Kt3zen8afYfSH_u1, 1,
                5, 0U, 0, 0U, 0);
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_u1;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_u);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static void c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur;
  const char_T *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur = sf_mex_dup
    (c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
  c4_AKWZ2hTz1Kt3zen8afYfSH_identifier = c4_AKWZ2hTz1Kt3zen8afYfSH_varName;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur),
     &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_b_TERP_cur);
  *(uint16_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_outData = c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
}

static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_d_sf_marshallOut(void
  *chartInstanceVoid, void *c4_AKWZ2hTz1Kt3zen8afYfSH_inData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_u;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_u = *(boolean_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_inData;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_y, sf_mex_create("y",
    &c4_AKWZ2hTz1Kt3zen8afYfSH_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData,
                c4_AKWZ2hTz1Kt3zen8afYfSH_y, FALSE);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayOutData;
}

static boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_f_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_Active, const char_T
   *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier)
{
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_Active),
     &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_Active);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_g_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId)
{
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_b0;
  sf_mex_import(c4_AKWZ2hTz1Kt3zen8afYfSH_parentId, sf_mex_dup
                (c4_AKWZ2hTz1Kt3zen8afYfSH_u), &c4_AKWZ2hTz1Kt3zen8afYfSH_b0, 1,
                11, 0U, 0, 0U, 0);
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_b0;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_u);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static void c4_AKWZ2hTz1Kt3zen8afYfSH_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData, const char_T
  *c4_AKWZ2hTz1Kt3zen8afYfSH_varName, void *c4_AKWZ2hTz1Kt3zen8afYfSH_outData)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
  const char_T *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c4_AKWZ2hTz1Kt3zen8afYfSH_Active = sf_mex_dup
    (c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
  c4_AKWZ2hTz1Kt3zen8afYfSH_identifier = c4_AKWZ2hTz1Kt3zen8afYfSH_varName;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = c4_AKWZ2hTz1Kt3zen8afYfSH_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_Active),
     &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_Active);
  *(boolean_T *)c4_AKWZ2hTz1Kt3zen8afYfSH_outData = c4_AKWZ2hTz1Kt3zen8afYfSH_y;
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_mxArrayInData);
}

static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_h_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_b_setSimStateSideEffectsInfo, const
   char_T *c4_AKWZ2hTz1Kt3zen8afYfSH_identifier)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  emlrtMsgIdentifier c4_AKWZ2hTz1Kt3zen8afYfSH_thisId;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fIdentifier =
    c4_AKWZ2hTz1Kt3zen8afYfSH_identifier;
  c4_AKWZ2hTz1Kt3zen8afYfSH_thisId.fParent = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_y,
                c4_AKWZ2hTz1Kt3zen8afYfSH_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(c4_AKWZ2hTz1Kt3zen8afYfSH_b_setSimStateSideEffectsInfo),
    &c4_AKWZ2hTz1Kt3zen8afYfSH_thisId), FALSE);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_b_setSimStateSideEffectsInfo);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_i_emlrt_marshallIn
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_u, const emlrtMsgIdentifier
   *c4_AKWZ2hTz1Kt3zen8afYfSH_parentId)
{
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  c4_AKWZ2hTz1Kt3zen8afYfSH_y = NULL;
  sf_mex_assign(&c4_AKWZ2hTz1Kt3zen8afYfSH_y, sf_mex_duplicatearraysafe
                (&c4_AKWZ2hTz1Kt3zen8afYfSH_u), FALSE);
  sf_mex_destroy(&c4_AKWZ2hTz1Kt3zen8afYfSH_u);
  return c4_AKWZ2hTz1Kt3zen8afYfSH_y;
}

static uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH__u16_s32_
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance,
   int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_b)
{
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_a;
  c4_AKWZ2hTz1Kt3zen8afYfSH_a = (uint16_T)c4_AKWZ2hTz1Kt3zen8afYfSH_b;
  if (c4_AKWZ2hTz1Kt3zen8afYfSH_a != c4_AKWZ2hTz1Kt3zen8afYfSH_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW);
  }

  return c4_AKWZ2hTz1Kt3zen8afYfSH_a;
}

static void init_dsm_address_info
  (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance)
{
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

void sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3856221662U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3636273128U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4282409777U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(658165396U);
}

mxArray *sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("QH3VWXXZyJ48YsVOXHBgPH");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray
  *sf_get_sim_state_info_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[24],T\"Active\",},{M[1],M[138],T\"path_timer\",},{M[1],M[137],T\"state\",},{M[3],M[17],T\"TERP_cur\",},{M[3],M[134],T\"TERP_def\",},{M[3],M[18],T\"TRRP_cur\",},{M[3],M[19],T\"Trest_cur\",},{M[3],M[139],T\"ratio\",},{M[8],M[0],T\"is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling\",},{M[9],M[0],T\"is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling\",}}",
    "100 S'type','srcId','name','auxInfo'{{M[9],M[114],T\"is_NodeAutomaton\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 11, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
    chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SimpleModelingMachineNumber_,
           4,
           4,
           7,
           17,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_SimpleModelingMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_SimpleModelingMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _SimpleModelingMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"TERP_cur");
          _SFD_SET_DATA_PROPS(1,0,0,0,"TRRP_cur");
          _SFD_SET_DATA_PROPS(2,0,0,0,"Trest_cur");
          _SFD_SET_DATA_PROPS(3,7,0,0,"TRRP_def");
          _SFD_SET_DATA_PROPS(4,2,0,1,"Active");
          _SFD_SET_DATA_PROPS(5,1,1,0,"inActive");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Trest_def");
          _SFD_SET_DATA_PROPS(7,7,0,0,"TERP_defs");
          _SFD_SET_DATA_PROPS(8,7,0,0,"TERP_s");
          _SFD_SET_DATA_PROPS(9,7,0,0,"TRRP_s");
          _SFD_SET_DATA_PROPS(10,7,0,0,"Trest_s");
          _SFD_SET_DATA_PROPS(11,7,0,0,"Terp_min");
          _SFD_SET_DATA_PROPS(12,7,0,0,"Terp_max");
          _SFD_SET_DATA_PROPS(13,0,0,0,"TERP_def");
          _SFD_SET_DATA_PROPS(14,2,0,1,"state");
          _SFD_SET_DATA_PROPS(15,2,0,1,"path_timer");
          _SFD_SET_DATA_PROPS(16,0,0,0,"ratio");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,3);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,3,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 11, 28 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(4,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 11, 27 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 11, 27 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,6,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              6,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,2,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 11, 28 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,2,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 11, 27 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 11, 27 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_d_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_d_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_b_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallOut,
          (MexInFcnForType)c4_AKWZ2hTz1Kt3zen8afYfSH_c_sf_marshallIn);

        {
          boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Active;
          boolean_T *c4_AKWZ2hTz1Kt3zen8afYfSH_inActive;
          uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def;
          uint8_T *c4_AKWZ2hTz1Kt3zen8afYfSH_state;
          uint16_T *c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer;
          c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer = (uint16_T *)
            ssGetOutputPortSignal(chartInstance->S, 3);
          c4_AKWZ2hTz1Kt3zen8afYfSH_state = (uint8_T *)ssGetOutputPortSignal
            (chartInstance->S, 2);
          c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c4_AKWZ2hTz1Kt3zen8afYfSH_inActive = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 0);
          c4_AKWZ2hTz1Kt3zen8afYfSH_Active = (boolean_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur);
          _SFD_SET_DATA_VALUE_PTR(1U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur);
          _SFD_SET_DATA_VALUE_PTR(2U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur);
          _SFD_SET_DATA_VALUE_PTR(3U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_def);
          _SFD_SET_DATA_VALUE_PTR(4U, c4_AKWZ2hTz1Kt3zen8afYfSH_Active);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_AKWZ2hTz1Kt3zen8afYfSH_inActive);
          _SFD_SET_DATA_VALUE_PTR(6U, c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_def);
          _SFD_SET_DATA_VALUE_PTR(7U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_defs);
          _SFD_SET_DATA_VALUE_PTR(8U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_s);
          _SFD_SET_DATA_VALUE_PTR(9U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_s);
          _SFD_SET_DATA_VALUE_PTR(10U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_s);
          _SFD_SET_DATA_VALUE_PTR(11U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_min);
          _SFD_SET_DATA_VALUE_PTR(12U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_max);
          _SFD_SET_DATA_VALUE_PTR(13U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def);
          _SFD_SET_DATA_VALUE_PTR(14U, c4_AKWZ2hTz1Kt3zen8afYfSH_state);
          _SFD_SET_DATA_VALUE_PTR(15U, c4_AKWZ2hTz1Kt3zen8afYfSH_path_timer);
          _SFD_SET_DATA_VALUE_PTR(16U,
            &chartInstance->c4_AKWZ2hTz1Kt3zen8afYfSH_ratio);
        }
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
  return "AKWZ2hTz1Kt3zen8afYfSH";
}

static void sf_opaque_initialize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInstanceVar);
  initialize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(void
  *chartInstanceVar)
{
  enable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(void
  *chartInstanceVar)
{
  disable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(void
  *chartInstanceVar)
{
  sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(SimStruct* S)
{
  return sf_internal_get_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(S);
}

static void sf_opaque_set_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(S, st);
}

static void sf_opaque_terminate_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SimpleModeling_optimization_info();
    }

    finalize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
      ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
       chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
    ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling
      ((SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(SimStruct *
  S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SimpleModeling_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,4,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,4);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,4,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,4,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3856221662U));
  ssSetChecksum1(S,(3636273128U));
  ssSetChecksum2(S,(4282409777U));
  ssSetChecksum3(S,(658165396U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(SimStruct *S)
{
  SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct *)
    utMalloc(sizeof(SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
