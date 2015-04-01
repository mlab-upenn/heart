/* Include files */

#include <stddef.h>
#include "blas.h"
#include "SimpleModeling_sfun.h"
#include "c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "SimpleModeling_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c5_YsLWK1dB73EVPwRmtAVgi_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define c5_YsLWK1dB73EVPwRmtAVgi_IN_AntegradeConduction ((uint8_T)1U)
#define c5_YsLWK1dB73EVPwRmtAVgi_IN_Conflict ((uint8_T)2U)
#define c5_YsLWK1dB73EVPwRmtAVgi_IN_Double ((uint8_T)3U)
#define c5_YsLWK1dB73EVPwRmtAVgi_IN_Idle ((uint8_T)4U)
#define c5_YsLWK1dB73EVPwRmtAVgi_IN_RetrogradeConduction ((uint8_T)5U)
#define c5_YsLWK1dB73EVPwRmtAVgi_IN_Update ((uint8_T)1U)
#define c5_YsLWK1dB73EVPwRmtAVgi_const_min_path_par ((uint16_T)80U)
#define c5_YsLWK1dB73EVPwRmtAVgi_const_bck_param ((uint16_T)16U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void initialize_params_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void enable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void disable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void c5_YsLWK1dB73EVPwRmtAVgi_update_debugger_state_c5_YsLWK1dB73EVPw
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void set_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_st);
static void c5_YsLWK1dB73EVPwRmtAVgi_set_sim_state_side_effects_c5_YsLWK1dB7
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void finalize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void initSimStructsc5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void registerMessagesc5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void c5_YsLWK1dB73EVPwRmtAVgi_PathAutomaton
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T
  c5_YsLWK1dB73EVPwRmtAVgi_machineNumber, uint32_T
  c5_YsLWK1dB73EVPwRmtAVgi_chartNumber);
static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData);
static int32_T c5_YsLWK1dB73EVPwRmtAVgi_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId);
static void c5_YsLWK1dB73EVPwRmtAVgi_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData);
static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData);
static uint8_T c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton, const char_T
   *c5_YsLWK1dB73EVPwRmtAVgi_identifier);
static uint8_T c5_YsLWK1dB73EVPwRmtAVgi_c_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId);
static void c5_YsLWK1dB73EVPwRmtAVgi_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData);
static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData);
static uint16_T c5_YsLWK1dB73EVPwRmtAVgi_d_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur, const char_T
   *c5_YsLWK1dB73EVPwRmtAVgi_identifier);
static uint16_T c5_YsLWK1dB73EVPwRmtAVgi_e_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId);
static void c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData);
static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData);
static boolean_T c5_YsLWK1dB73EVPwRmtAVgi_f_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_outActive1, const char_T
   *c5_YsLWK1dB73EVPwRmtAVgi_identifier);
static boolean_T c5_YsLWK1dB73EVPwRmtAVgi_g_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId);
static void c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData);
static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_h_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_setSimStateSideEffectsInfo, const char_T *
   c5_YsLWK1dB73EVPwRmtAVgi_identifier);
static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_i_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId);
static uint16_T c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance,
   int32_T c5_YsLWK1dB73EVPwRmtAVgi_b);
static int32_T c5_YsLWK1dB73EVPwRmtAVgi__s32_u32_
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance,
   uint32_T c5_YsLWK1dB73EVPwRmtAVgi_b);
static void init_dsm_address_info
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive2;
  uint8_T *c5_YsLWK1dB73EVPwRmtAVgi_state;
  c5_YsLWK1dB73EVPwRmtAVgi_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_doSetSimStateSideEffects = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_setSimStateSideEffectsInfo = NULL;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_PathAutomaton = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
    c5_YsLWK1dB73EVPwRmtAVgi_IN_NO_ACTIVE_CHILD;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_PathAutomaton = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_AntegradeConduction = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Conflict = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Idle = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_RetrogradeConduction = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateBackward = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward =
    c5_YsLWK1dB73EVPwRmtAVgi_IN_NO_ACTIVE_CHILD;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateBackward = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateForward = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward =
    c5_YsLWK1dB73EVPwRmtAVgi_IN_NO_ACTIVE_CHILD;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateForward = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_c5_YsLWK1dB73EVPwRmtAVgi_Simp
    = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def = 0U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st = FALSE;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_min_path_par = 80U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_param = 16U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c5_YsLWK1dB73EVPwRmtAVgi_state = 0U;
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 1U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_c5_YsLWK1dB73EVPwRmtAVgi_Simp
    = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateForward = 1U;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateForward = 1U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward =
    c5_YsLWK1dB73EVPwRmtAVgi_IN_Update;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 1U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateBackward = 1U;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateBackward = 1U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward =
    c5_YsLWK1dB73EVPwRmtAVgi_IN_Update;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 1U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_PathAutomaton = 1U;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_PathAutomaton = 1U;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  *c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = FALSE;
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive1, 2U);
  *c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = FALSE;
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive2, 5U);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
    c5_YsLWK1dB73EVPwRmtAVgi_IN_Idle;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Idle = 1U;
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st = TRUE;
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st,
                        11U);
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_SimpleModelingMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initialize_params_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
}

static void enable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c5_YsLWK1dB73EVPwRmtAVgi_update_debugger_state_c5_YsLWK1dB73EVPw
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  uint32_T c5_YsLWK1dB73EVPwRmtAVgi_prevAniVal;
  c5_YsLWK1dB73EVPwRmtAVgi_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_c5_YsLWK1dB73EVPwRmtAVgi_Simp
      == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 1U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_PathAutomaton == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
      c5_YsLWK1dB73EVPwRmtAVgi_IN_AntegradeConduction) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Double) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
      c5_YsLWK1dB73EVPwRmtAVgi_IN_RetrogradeConduction) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Conflict) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateForward == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward ==
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Update) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateBackward == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward ==
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Update) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  }

  _SFD_SET_ANIMATION(c5_YsLWK1dB73EVPwRmtAVgi_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_st;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_hoistedGlobal;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_y = NULL;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_b_hoistedGlobal;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_b_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_c_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_c_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_c_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_d_y = NULL;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_d_hoistedGlobal;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_d_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_e_y = NULL;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_e_hoistedGlobal;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_e_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_f_y = NULL;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_f_hoistedGlobal;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_f_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_g_y = NULL;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_g_hoistedGlobal;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_g_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_h_y = NULL;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_h_hoistedGlobal;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_h_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_i_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_i_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_i_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_j_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_j_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_j_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_k_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_k_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_k_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_l_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_l_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_l_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_m_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_m_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_m_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_n_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_n_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_n_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_o_y = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_o_hoistedGlobal;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_o_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_p_y = NULL;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive2;
  uint8_T *c5_YsLWK1dB73EVPwRmtAVgi_state;
  c5_YsLWK1dB73EVPwRmtAVgi_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  c5_YsLWK1dB73EVPwRmtAVgi_st = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_st = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_y, sf_mex_createcellarray(15), FALSE);
  c5_YsLWK1dB73EVPwRmtAVgi_hoistedGlobal = *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
  c5_YsLWK1dB73EVPwRmtAVgi_u = c5_YsLWK1dB73EVPwRmtAVgi_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_b_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_b_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 0, c5_YsLWK1dB73EVPwRmtAVgi_b_y);
  c5_YsLWK1dB73EVPwRmtAVgi_b_hoistedGlobal =
    *c5_YsLWK1dB73EVPwRmtAVgi_outActive2;
  c5_YsLWK1dB73EVPwRmtAVgi_b_u = c5_YsLWK1dB73EVPwRmtAVgi_b_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_c_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_c_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_b_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 1, c5_YsLWK1dB73EVPwRmtAVgi_c_y);
  c5_YsLWK1dB73EVPwRmtAVgi_c_hoistedGlobal = *c5_YsLWK1dB73EVPwRmtAVgi_state;
  c5_YsLWK1dB73EVPwRmtAVgi_c_u = c5_YsLWK1dB73EVPwRmtAVgi_c_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_d_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_d_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 2, c5_YsLWK1dB73EVPwRmtAVgi_d_y);
  c5_YsLWK1dB73EVPwRmtAVgi_d_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur;
  c5_YsLWK1dB73EVPwRmtAVgi_d_u = c5_YsLWK1dB73EVPwRmtAVgi_d_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_e_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_e_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_d_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 3, c5_YsLWK1dB73EVPwRmtAVgi_e_y);
  c5_YsLWK1dB73EVPwRmtAVgi_e_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def;
  c5_YsLWK1dB73EVPwRmtAVgi_e_u = c5_YsLWK1dB73EVPwRmtAVgi_e_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_f_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_f_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_e_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 4, c5_YsLWK1dB73EVPwRmtAVgi_f_y);
  c5_YsLWK1dB73EVPwRmtAVgi_f_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur;
  c5_YsLWK1dB73EVPwRmtAVgi_f_u = c5_YsLWK1dB73EVPwRmtAVgi_f_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_g_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_g_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_f_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 5, c5_YsLWK1dB73EVPwRmtAVgi_g_y);
  c5_YsLWK1dB73EVPwRmtAVgi_g_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def;
  c5_YsLWK1dB73EVPwRmtAVgi_g_u = c5_YsLWK1dB73EVPwRmtAVgi_g_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_h_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_h_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_g_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 6, c5_YsLWK1dB73EVPwRmtAVgi_h_y);
  c5_YsLWK1dB73EVPwRmtAVgi_h_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st;
  c5_YsLWK1dB73EVPwRmtAVgi_h_u = c5_YsLWK1dB73EVPwRmtAVgi_h_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_i_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_i_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_h_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 7, c5_YsLWK1dB73EVPwRmtAVgi_i_y);
  c5_YsLWK1dB73EVPwRmtAVgi_i_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_c5_YsLWK1dB73EVPwRmtAVgi_Simp;
  c5_YsLWK1dB73EVPwRmtAVgi_i_u = c5_YsLWK1dB73EVPwRmtAVgi_i_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_j_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_j_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_i_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 8, c5_YsLWK1dB73EVPwRmtAVgi_j_y);
  c5_YsLWK1dB73EVPwRmtAVgi_j_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_PathAutomaton;
  c5_YsLWK1dB73EVPwRmtAVgi_j_u = c5_YsLWK1dB73EVPwRmtAVgi_j_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_k_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_k_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_j_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 9, c5_YsLWK1dB73EVPwRmtAVgi_k_y);
  c5_YsLWK1dB73EVPwRmtAVgi_k_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateForward;
  c5_YsLWK1dB73EVPwRmtAVgi_k_u = c5_YsLWK1dB73EVPwRmtAVgi_k_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_l_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_l_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_k_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 10, c5_YsLWK1dB73EVPwRmtAVgi_l_y);
  c5_YsLWK1dB73EVPwRmtAVgi_l_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateBackward;
  c5_YsLWK1dB73EVPwRmtAVgi_l_u = c5_YsLWK1dB73EVPwRmtAVgi_l_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_m_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_m_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_l_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 11, c5_YsLWK1dB73EVPwRmtAVgi_m_y);
  c5_YsLWK1dB73EVPwRmtAVgi_m_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton;
  c5_YsLWK1dB73EVPwRmtAVgi_m_u = c5_YsLWK1dB73EVPwRmtAVgi_m_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_n_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_n_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_m_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 12, c5_YsLWK1dB73EVPwRmtAVgi_n_y);
  c5_YsLWK1dB73EVPwRmtAVgi_n_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward;
  c5_YsLWK1dB73EVPwRmtAVgi_n_u = c5_YsLWK1dB73EVPwRmtAVgi_n_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_o_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_o_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_n_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 13, c5_YsLWK1dB73EVPwRmtAVgi_o_y);
  c5_YsLWK1dB73EVPwRmtAVgi_o_hoistedGlobal =
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward;
  c5_YsLWK1dB73EVPwRmtAVgi_o_u = c5_YsLWK1dB73EVPwRmtAVgi_o_hoistedGlobal;
  c5_YsLWK1dB73EVPwRmtAVgi_p_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_p_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_o_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_YsLWK1dB73EVPwRmtAVgi_y, 14, c5_YsLWK1dB73EVPwRmtAVgi_p_y);
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_st, c5_YsLWK1dB73EVPwRmtAVgi_y, FALSE);
  return c5_YsLWK1dB73EVPwRmtAVgi_st;
}

static void set_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_st)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive2;
  uint8_T *c5_YsLWK1dB73EVPwRmtAVgi_state;
  c5_YsLWK1dB73EVPwRmtAVgi_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_doneDoubleBufferReInit = TRUE;
  c5_YsLWK1dB73EVPwRmtAVgi_u = sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_st);
  *c5_YsLWK1dB73EVPwRmtAVgi_outActive1 =
    c5_YsLWK1dB73EVPwRmtAVgi_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 0)), "outActive1");
  *c5_YsLWK1dB73EVPwRmtAVgi_outActive2 =
    c5_YsLWK1dB73EVPwRmtAVgi_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 1)), "outActive2");
  *c5_YsLWK1dB73EVPwRmtAVgi_state = c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 2)),
     "state");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur =
    c5_YsLWK1dB73EVPwRmtAVgi_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 3)), "bck_timer_cur");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def =
    c5_YsLWK1dB73EVPwRmtAVgi_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 4)), "bck_timer_def");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur =
    c5_YsLWK1dB73EVPwRmtAVgi_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 5)), "forw_timer_cur");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def =
    c5_YsLWK1dB73EVPwRmtAVgi_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 6)), "forw_timer_def");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st =
    c5_YsLWK1dB73EVPwRmtAVgi_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 7)), "idle_st");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_c5_YsLWK1dB73EVPwRmtAVgi_Simp
    = c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 8)),
    "is_active_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_PathAutomaton =
    c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 9)), "is_active_PathAutomaton");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateForward =
    c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 10)), "is_active_UpdateForward");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateBackward =
    c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 11)), "is_active_UpdateBackward");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
    c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 12)), "is_PathAutomaton");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward =
    c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 13)), "is_UpdateForward");
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward =
    c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 14)), "is_UpdateBackward");
  sf_mex_assign
    (&chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_setSimStateSideEffectsInfo,
     c5_YsLWK1dB73EVPwRmtAVgi_h_emlrt_marshallIn(chartInstance, sf_mex_dup
      (sf_mex_getcell(c5_YsLWK1dB73EVPwRmtAVgi_u, 15)),
      "setSimStateSideEffectsInfo"), TRUE);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_u);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_doSetSimStateSideEffects = 1U;
  c5_YsLWK1dB73EVPwRmtAVgi_update_debugger_state_c5_YsLWK1dB73EVPw(chartInstance);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_st);
}

static void c5_YsLWK1dB73EVPwRmtAVgi_set_sim_state_side_effects_c5_YsLWK1dB7
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_doSetSimStateSideEffects != 0) {
    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateForward == 1U) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateForward = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateForward = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward ==
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Update) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_UpdateBackward == 1U)
    {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateBackward = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_UpdateBackward = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward ==
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Update) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_active_PathAutomaton == 1U) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_PathAutomaton = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_PathAutomaton = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
        c5_YsLWK1dB73EVPwRmtAVgi_IN_AntegradeConduction) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_AntegradeConduction = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_AntegradeConduction = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Conflict) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Conflict = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Conflict = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Double) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Idle) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Idle = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Idle = 0U;
    }

    if (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton ==
        c5_YsLWK1dB73EVPwRmtAVgi_IN_RetrogradeConduction) {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_RetrogradeConduction = 1U;
    } else {
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_RetrogradeConduction = 0U;
    }

    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  sf_mex_destroy
    (&chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_setSimStateSideEffectsInfo);
}

static void sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_b_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_b_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_c_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_c_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_d_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_e_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_d_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_f_out;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_inActive1;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_inActive2;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive2;
  uint16_T *c5_YsLWK1dB73EVPwRmtAVgi_forw_param;
  uint8_T *c5_YsLWK1dB73EVPwRmtAVgi_state;
  uint16_T *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn;
  uint16_T *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx;
  c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 4);
  c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 3);
  c5_YsLWK1dB73EVPwRmtAVgi_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c5_YsLWK1dB73EVPwRmtAVgi_forw_param = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 2);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c5_YsLWK1dB73EVPwRmtAVgi_inActive2 = (boolean_T *)ssGetInputPortSignal
    (chartInstance->S, 1);
  c5_YsLWK1dB73EVPwRmtAVgi_inActive1 = (boolean_T *)ssGetInputPortSignal
    (chartInstance->S, 0);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  c5_YsLWK1dB73EVPwRmtAVgi_set_sim_state_side_effects_c5_YsLWK1dB7(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur,
                        0U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur,
                        1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive1, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_inActive1, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_inActive2, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive2, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_min_path_par, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def,
                        7U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def,
                        8U);
  _SFD_DATA_RANGE_CHECK((real_T)
                        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_param, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_forw_param, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st,
                        11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_state, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx, 14U);
  chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  c5_YsLWK1dB73EVPwRmtAVgi_temp = (_SFD_CCP_CALL(11U, 0,
    *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn > 0 != 0U,
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
  if (c5_YsLWK1dB73EVPwRmtAVgi_temp) {
    c5_YsLWK1dB73EVPwRmtAVgi_temp = (_SFD_CCP_CALL(11U, 1,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st != 0U,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
  }

  c5_YsLWK1dB73EVPwRmtAVgi_out = (CV_TRANSITION_EVAL(11U, (int32_T)
    c5_YsLWK1dB73EVPwRmtAVgi_temp) != 0);
  if (c5_YsLWK1dB73EVPwRmtAVgi_out) {
    if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
      unsigned int transitionList[2];
      unsigned int numTransitions = 1;
      transitionList[0] = 11;
      _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
      c5_YsLWK1dB73EVPwRmtAVgi_b_out = ((*c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn >
        0) && (!chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st));
      if (c5_YsLWK1dB73EVPwRmtAVgi_b_out) {
        transitionList[numTransitions] = 12;
        numTransitions++;
      }

      _SFD_TRANSITION_CONFLICT_CHECK_END();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def =
      c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
      c5_YsLWK1dB73EVPwRmtAVgi__s32_u32_(chartInstance, (uint32_T)
      *c5_YsLWK1dB73EVPwRmtAVgi_forw_param * (uint32_T)
      *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn));
    _SFD_DATA_RANGE_CHECK((real_T)
                          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def,
                          8U);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur =
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def;
    _SFD_DATA_RANGE_CHECK((real_T)
                          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur,
                          0U);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward =
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Update;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    c5_YsLWK1dB73EVPwRmtAVgi_b_temp = (_SFD_CCP_CALL(12U, 0,
      *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn > 0 != 0U,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_b_temp) {
      c5_YsLWK1dB73EVPwRmtAVgi_b_temp = !(_SFD_CCP_CALL(12U, 1,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st != 0U,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
    }

    c5_YsLWK1dB73EVPwRmtAVgi_c_out = (CV_TRANSITION_EVAL(12U, (int32_T)
      c5_YsLWK1dB73EVPwRmtAVgi_b_temp) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def =
        c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
        c5_YsLWK1dB73EVPwRmtAVgi__s32_u32_(chartInstance, (uint32_T)
        *c5_YsLWK1dB73EVPwRmtAVgi_forw_param * (uint32_T)
        *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn));
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def,
                            8U);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateForward =
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Update;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Update = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  c5_YsLWK1dB73EVPwRmtAVgi_c_temp = (_SFD_CCP_CALL(13U, 0,
    *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx > 0 != 0U,
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
  if (c5_YsLWK1dB73EVPwRmtAVgi_c_temp) {
    c5_YsLWK1dB73EVPwRmtAVgi_c_temp = (_SFD_CCP_CALL(13U, 1,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st != 0U,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
  }

  c5_YsLWK1dB73EVPwRmtAVgi_d_out = (CV_TRANSITION_EVAL(13U, (int32_T)
    c5_YsLWK1dB73EVPwRmtAVgi_c_temp) != 0);
  if (c5_YsLWK1dB73EVPwRmtAVgi_d_out) {
    if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
      unsigned int transitionList[2];
      unsigned int numTransitions = 1;
      transitionList[0] = 13;
      _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
      c5_YsLWK1dB73EVPwRmtAVgi_e_out = ((*c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx >
        0) && (!chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st));
      if (c5_YsLWK1dB73EVPwRmtAVgi_e_out) {
        transitionList[numTransitions] = 14;
        numTransitions++;
      }

      _SFD_TRANSITION_CONFLICT_CHECK_END();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def =
      c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
      c5_YsLWK1dB73EVPwRmtAVgi__s32_u32_(chartInstance,
      c5_YsLWK1dB73EVPwRmtAVgi_const_bck_param * (uint32_T)
      *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx));
    _SFD_DATA_RANGE_CHECK((real_T)
                          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def,
                          7U);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur =
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def;
    _SFD_DATA_RANGE_CHECK((real_T)
                          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur,
                          1U);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward =
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Update;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    c5_YsLWK1dB73EVPwRmtAVgi_d_temp = (_SFD_CCP_CALL(14U, 0,
      *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx > 0 != 0U,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_d_temp) {
      c5_YsLWK1dB73EVPwRmtAVgi_d_temp = !(_SFD_CCP_CALL(14U, 1,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st != 0U,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
    }

    c5_YsLWK1dB73EVPwRmtAVgi_f_out = (CV_TRANSITION_EVAL(14U, (int32_T)
      c5_YsLWK1dB73EVPwRmtAVgi_d_temp) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_f_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def =
        c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
        c5_YsLWK1dB73EVPwRmtAVgi__s32_u32_(chartInstance,
        c5_YsLWK1dB73EVPwRmtAVgi_const_bck_param * (uint32_T)
        *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx));
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def,
                            7U);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_UpdateBackward =
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Update;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_b_tp_Update = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  c5_YsLWK1dB73EVPwRmtAVgi_PathAutomaton(chartInstance);
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_SimpleModelingMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
}

static void registerMessagesc5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
}

static void c5_YsLWK1dB73EVPwRmtAVgi_PathAutomaton
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
{
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_b_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_c_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_d_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_e_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_f_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_b_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_g_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_h_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_i_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_j_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_k_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_c_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_l_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_d_temp;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_m_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_n_out;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_o_out;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_inActive2;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive2;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
  uint8_T *c5_YsLWK1dB73EVPwRmtAVgi_state;
  boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_inActive1;
  c5_YsLWK1dB73EVPwRmtAVgi_state = (uint8_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c5_YsLWK1dB73EVPwRmtAVgi_inActive2 = (boolean_T *)ssGetInputPortSignal
    (chartInstance->S, 1);
  c5_YsLWK1dB73EVPwRmtAVgi_inActive1 = (boolean_T *)ssGetInputPortSignal
    (chartInstance->S, 0);
  c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = (boolean_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
  switch (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton) {
   case c5_YsLWK1dB73EVPwRmtAVgi_IN_AntegradeConduction:
    CV_STATE_EVAL(0, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    c5_YsLWK1dB73EVPwRmtAVgi_out = (CV_TRANSITION_EVAL(3U, (int32_T)
      _SFD_CCP_CALL(3U, 0, *c5_YsLWK1dB73EVPwRmtAVgi_inActive2 != 0U,
                    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent)) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_out) {
      if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 3;
        _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
        c5_YsLWK1dB73EVPwRmtAVgi_b_out =
          ((chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur == 0) &&
           (!*c5_YsLWK1dB73EVPwRmtAVgi_inActive2));
        if (c5_YsLWK1dB73EVPwRmtAVgi_b_out) {
          transitionList[numTransitions] = 5;
          numTransitions++;
        }

        _SFD_TRANSITION_CONFLICT_CHECK_END();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_AntegradeConduction = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Double;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      c5_YsLWK1dB73EVPwRmtAVgi_temp = (_SFD_CCP_CALL(5U, 0,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur == 0 != 0U,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
      if (c5_YsLWK1dB73EVPwRmtAVgi_temp) {
        c5_YsLWK1dB73EVPwRmtAVgi_temp = !(_SFD_CCP_CALL(5U, 1,
          *c5_YsLWK1dB73EVPwRmtAVgi_inActive2 != 0U,
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
      }

      c5_YsLWK1dB73EVPwRmtAVgi_c_out = (CV_TRANSITION_EVAL(5U, (int32_T)
        c5_YsLWK1dB73EVPwRmtAVgi_temp) != 0);
      if (c5_YsLWK1dB73EVPwRmtAVgi_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur =
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur,
                              0U);
        *c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive2, 5U);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_AntegradeConduction = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
          c5_YsLWK1dB73EVPwRmtAVgi_IN_Conflict;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Conflict = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur =
          c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur,
                              0U);
        *c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive1, 2U);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st,
                              11U);
        *c5_YsLWK1dB73EVPwRmtAVgi_state = 2U;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_state, 12U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    break;

   case c5_YsLWK1dB73EVPwRmtAVgi_IN_Conflict:
    CV_STATE_EVAL(0, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Conflict = 0U;
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 2U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    *c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive2, 5U);
    *c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive1, 2U);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
      c5_YsLWK1dB73EVPwRmtAVgi_IN_Idle;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Idle = 1U;
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)
                          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st, 11U);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    break;

   case c5_YsLWK1dB73EVPwRmtAVgi_IN_Double:
    CV_STATE_EVAL(0, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    c5_YsLWK1dB73EVPwRmtAVgi_d_out = (CV_TRANSITION_EVAL(8U, (int32_T)
      _SFD_CCP_CALL(8U, 0, chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur
                    == 0 != 0U, chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent))
      != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_d_out) {
      if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
        unsigned int transitionList[3];
        unsigned int numTransitions = 1;
        transitionList[0] = 8;
        _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
        c5_YsLWK1dB73EVPwRmtAVgi_e_out =
          ((chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur != 0) &&
           (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur != 0));
        if (c5_YsLWK1dB73EVPwRmtAVgi_e_out) {
          transitionList[numTransitions] = 10;
          numTransitions++;
        }

        c5_YsLWK1dB73EVPwRmtAVgi_f_out =
          (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur == 0);
        if (c5_YsLWK1dB73EVPwRmtAVgi_f_out) {
          transitionList[numTransitions] = 9;
          numTransitions++;
        }

        _SFD_TRANSITION_CONFLICT_CHECK_END();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur =
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur,
                            1U);
      *c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive1, 2U);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
        c5_YsLWK1dB73EVPwRmtAVgi_IN_AntegradeConduction;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_AntegradeConduction = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      c5_YsLWK1dB73EVPwRmtAVgi_b_temp = (_SFD_CCP_CALL(10U, 0,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur != 0 != 0U,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
      if (c5_YsLWK1dB73EVPwRmtAVgi_b_temp) {
        c5_YsLWK1dB73EVPwRmtAVgi_b_temp = (_SFD_CCP_CALL(10U, 1,
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur != 0 != 0U,
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
      }

      c5_YsLWK1dB73EVPwRmtAVgi_g_out = (CV_TRANSITION_EVAL(10U, (int32_T)
        c5_YsLWK1dB73EVPwRmtAVgi_b_temp) != 0);
      if (c5_YsLWK1dB73EVPwRmtAVgi_g_out) {
        if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 10;
          _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
          c5_YsLWK1dB73EVPwRmtAVgi_h_out =
            (chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur == 0);
          if (c5_YsLWK1dB73EVPwRmtAVgi_h_out) {
            transitionList[numTransitions] = 9;
            numTransitions++;
          }

          _SFD_TRANSITION_CONFLICT_CHECK_END();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur =
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur,
                              0U);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur =
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def;
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur,
                              1U);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
          c5_YsLWK1dB73EVPwRmtAVgi_IN_Conflict;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Conflict = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        c5_YsLWK1dB73EVPwRmtAVgi_i_out = (CV_TRANSITION_EVAL(9U, (int32_T)
          _SFD_CCP_CALL(9U, 0,
                        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur ==
                        0 != 0U, chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent))
          != 0);
        if (c5_YsLWK1dB73EVPwRmtAVgi_i_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U,
                       chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur =
            chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def;
          _SFD_DATA_RANGE_CHECK((real_T)
                                chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur,
                                0U);
          *c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive2, 5U);
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U,
                       chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
            c5_YsLWK1dB73EVPwRmtAVgi_IN_RetrogradeConduction;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U,
                       chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_RetrogradeConduction = 1U;
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                       chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur =
            c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
            chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur - 1);
          _SFD_DATA_RANGE_CHECK((real_T)
                                chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur,
                                0U);
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur =
            c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
            chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur - 1);
          _SFD_DATA_RANGE_CHECK((real_T)
                                chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur,
                                1U);
          *c5_YsLWK1dB73EVPwRmtAVgi_state = 5U;
          _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_state, 12U);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    break;

   case c5_YsLWK1dB73EVPwRmtAVgi_IN_Idle:
    CV_STATE_EVAL(0, 0, 4);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    c5_YsLWK1dB73EVPwRmtAVgi_j_out = (CV_TRANSITION_EVAL(1U, (int32_T)
      _SFD_CCP_CALL(1U, 0, *c5_YsLWK1dB73EVPwRmtAVgi_inActive1 != 0U,
                    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent)) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_j_out) {
      if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 1;
        _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
        c5_YsLWK1dB73EVPwRmtAVgi_k_out = ((!*c5_YsLWK1dB73EVPwRmtAVgi_inActive1)
          && (*c5_YsLWK1dB73EVPwRmtAVgi_inActive2));
        if (c5_YsLWK1dB73EVPwRmtAVgi_k_out) {
          transitionList[numTransitions] = 2;
          numTransitions++;
        }

        _SFD_TRANSITION_CONFLICT_CHECK_END();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Idle = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
        c5_YsLWK1dB73EVPwRmtAVgi_IN_AntegradeConduction;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_AntegradeConduction = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      c5_YsLWK1dB73EVPwRmtAVgi_c_temp = !(_SFD_CCP_CALL(2U, 0,
        *c5_YsLWK1dB73EVPwRmtAVgi_inActive1 != 0U,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
      if (c5_YsLWK1dB73EVPwRmtAVgi_c_temp) {
        c5_YsLWK1dB73EVPwRmtAVgi_c_temp = (_SFD_CCP_CALL(2U, 1,
          *c5_YsLWK1dB73EVPwRmtAVgi_inActive2 != 0U,
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
      }

      c5_YsLWK1dB73EVPwRmtAVgi_l_out = (CV_TRANSITION_EVAL(2U, (int32_T)
        c5_YsLWK1dB73EVPwRmtAVgi_c_temp) != 0);
      if (c5_YsLWK1dB73EVPwRmtAVgi_l_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Idle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
          c5_YsLWK1dB73EVPwRmtAVgi_IN_RetrogradeConduction;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_RetrogradeConduction = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        *c5_YsLWK1dB73EVPwRmtAVgi_state = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_state, 12U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    break;

   case c5_YsLWK1dB73EVPwRmtAVgi_IN_RetrogradeConduction:
    CV_STATE_EVAL(0, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    c5_YsLWK1dB73EVPwRmtAVgi_d_temp = (_SFD_CCP_CALL(7U, 0,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur == 0 != 0U,
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_d_temp) {
      c5_YsLWK1dB73EVPwRmtAVgi_d_temp = !(_SFD_CCP_CALL(7U, 1,
        *c5_YsLWK1dB73EVPwRmtAVgi_inActive1 != 0U,
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent) != 0);
    }

    c5_YsLWK1dB73EVPwRmtAVgi_m_out = (CV_TRANSITION_EVAL(7U, (int32_T)
      c5_YsLWK1dB73EVPwRmtAVgi_d_temp) != 0);
    if (c5_YsLWK1dB73EVPwRmtAVgi_m_out) {
      if (_SFD_TRANSITION_CONFLICT_CHECK_ENABLED()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 7;
        _SFD_TRANSITION_CONFLICT_CHECK_BEGIN();
        c5_YsLWK1dB73EVPwRmtAVgi_n_out = *c5_YsLWK1dB73EVPwRmtAVgi_inActive1;
        if (c5_YsLWK1dB73EVPwRmtAVgi_n_out) {
          transitionList[numTransitions] = 6;
          numTransitions++;
        }

        _SFD_TRANSITION_CONFLICT_CHECK_END();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur =
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def;
      _SFD_DATA_RANGE_CHECK((real_T)
                            chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur,
                            1U);
      *c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive1, 2U);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_RetrogradeConduction = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
        c5_YsLWK1dB73EVPwRmtAVgi_IN_Conflict;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Conflict = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
      c5_YsLWK1dB73EVPwRmtAVgi_o_out = (CV_TRANSITION_EVAL(6U, (int32_T)
        _SFD_CCP_CALL(6U, 0, *c5_YsLWK1dB73EVPwRmtAVgi_inActive1 != 0U,
                      chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent)) != 0);
      if (c5_YsLWK1dB73EVPwRmtAVgi_o_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_RetrogradeConduction = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
          c5_YsLWK1dB73EVPwRmtAVgi_IN_Double;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_tp_Double = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
        chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur =
          c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_(chartInstance,
          chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur - 1);
        _SFD_DATA_RANGE_CHECK((real_T)
                              chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur,
                              1U);
        *c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_outActive2, 5U);
        *c5_YsLWK1dB73EVPwRmtAVgi_state = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c5_YsLWK1dB73EVPwRmtAVgi_state, 12U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    break;

   default:
    CV_STATE_EVAL(0, 0, 0);
    chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_is_PathAutomaton =
      c5_YsLWK1dB73EVPwRmtAVgi_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                 chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U,
               chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_sfEvent);
}

static void init_script_number_translation(uint32_T
  c5_YsLWK1dB73EVPwRmtAVgi_machineNumber, uint32_T
  c5_YsLWK1dB73EVPwRmtAVgi_chartNumber)
{
}

const mxArray
  *sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_nameCaptureInfo = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_nameCaptureInfo, sf_mex_create(
    "nameCaptureInfo", NULL, 0, 0U, 1U, 0U, 2, 0, 1), FALSE);
  return c5_YsLWK1dB73EVPwRmtAVgi_nameCaptureInfo;
}

static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  int32_T c5_YsLWK1dB73EVPwRmtAVgi_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_u = *(int32_T *)c5_YsLWK1dB73EVPwRmtAVgi_inData;
  c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData,
                c5_YsLWK1dB73EVPwRmtAVgi_y, FALSE);
  return c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData;
}

static int32_T c5_YsLWK1dB73EVPwRmtAVgi_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId)
{
  int32_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  int32_T c5_YsLWK1dB73EVPwRmtAVgi_i0;
  sf_mex_import(c5_YsLWK1dB73EVPwRmtAVgi_parentId, sf_mex_dup
                (c5_YsLWK1dB73EVPwRmtAVgi_u), &c5_YsLWK1dB73EVPwRmtAVgi_i0, 1, 6,
                0U, 0, 0U, 0);
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_i0;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_u);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static void c5_YsLWK1dB73EVPwRmtAVgi_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_sfEvent;
  const char_T *c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  int32_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_b_sfEvent = sf_mex_dup
    (c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
  c5_YsLWK1dB73EVPwRmtAVgi_identifier = c5_YsLWK1dB73EVPwRmtAVgi_varName;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_b_sfEvent),
     &c5_YsLWK1dB73EVPwRmtAVgi_thisId);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_b_sfEvent);
  *(int32_T *)c5_YsLWK1dB73EVPwRmtAVgi_outData = c5_YsLWK1dB73EVPwRmtAVgi_y;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
}

static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_u = *(uint8_T *)c5_YsLWK1dB73EVPwRmtAVgi_inData;
  c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData,
                c5_YsLWK1dB73EVPwRmtAVgi_y, FALSE);
  return c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData;
}

static uint8_T c5_YsLWK1dB73EVPwRmtAVgi_b_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton, const char_T
   *c5_YsLWK1dB73EVPwRmtAVgi_identifier)
{
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton),
     &c5_YsLWK1dB73EVPwRmtAVgi_thisId);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static uint8_T c5_YsLWK1dB73EVPwRmtAVgi_c_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId)
{
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_u0;
  sf_mex_import(c5_YsLWK1dB73EVPwRmtAVgi_parentId, sf_mex_dup
                (c5_YsLWK1dB73EVPwRmtAVgi_u), &c5_YsLWK1dB73EVPwRmtAVgi_u0, 1, 3,
                0U, 0, 0U, 0);
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_u0;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_u);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static void c5_YsLWK1dB73EVPwRmtAVgi_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton;
  const char_T *c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  uint8_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton = sf_mex_dup
    (c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
  c5_YsLWK1dB73EVPwRmtAVgi_identifier = c5_YsLWK1dB73EVPwRmtAVgi_varName;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton),
     &c5_YsLWK1dB73EVPwRmtAVgi_thisId);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_b_tp_PathAutomaton);
  *(uint8_T *)c5_YsLWK1dB73EVPwRmtAVgi_outData = c5_YsLWK1dB73EVPwRmtAVgi_y;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
}

static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_u = *(uint16_T *)c5_YsLWK1dB73EVPwRmtAVgi_inData;
  c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_u, 5, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData,
                c5_YsLWK1dB73EVPwRmtAVgi_y, FALSE);
  return c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData;
}

static uint16_T c5_YsLWK1dB73EVPwRmtAVgi_d_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur, const char_T
   *c5_YsLWK1dB73EVPwRmtAVgi_identifier)
{
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur),
     &c5_YsLWK1dB73EVPwRmtAVgi_thisId);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static uint16_T c5_YsLWK1dB73EVPwRmtAVgi_e_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId)
{
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_u1;
  sf_mex_import(c5_YsLWK1dB73EVPwRmtAVgi_parentId, sf_mex_dup
                (c5_YsLWK1dB73EVPwRmtAVgi_u), &c5_YsLWK1dB73EVPwRmtAVgi_u1, 1, 5,
                0U, 0, 0U, 0);
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_u1;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_u);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static void c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur;
  const char_T *c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur = sf_mex_dup
    (c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
  c5_YsLWK1dB73EVPwRmtAVgi_identifier = c5_YsLWK1dB73EVPwRmtAVgi_varName;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur),
     &c5_YsLWK1dB73EVPwRmtAVgi_thisId);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_b_forw_timer_cur);
  *(uint16_T *)c5_YsLWK1dB73EVPwRmtAVgi_outData = c5_YsLWK1dB73EVPwRmtAVgi_y;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
}

static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallOut(void
  *chartInstanceVoid, void *c5_YsLWK1dB73EVPwRmtAVgi_inData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_u;
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_u = *(boolean_T *)c5_YsLWK1dB73EVPwRmtAVgi_inData;
  c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_y, sf_mex_create("y",
    &c5_YsLWK1dB73EVPwRmtAVgi_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData,
                c5_YsLWK1dB73EVPwRmtAVgi_y, FALSE);
  return c5_YsLWK1dB73EVPwRmtAVgi_mxArrayOutData;
}

static boolean_T c5_YsLWK1dB73EVPwRmtAVgi_f_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_outActive1, const char_T
   *c5_YsLWK1dB73EVPwRmtAVgi_identifier)
{
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_outActive1),
     &c5_YsLWK1dB73EVPwRmtAVgi_thisId);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_outActive1);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static boolean_T c5_YsLWK1dB73EVPwRmtAVgi_g_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId)
{
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_b0;
  sf_mex_import(c5_YsLWK1dB73EVPwRmtAVgi_parentId, sf_mex_dup
                (c5_YsLWK1dB73EVPwRmtAVgi_u), &c5_YsLWK1dB73EVPwRmtAVgi_b0, 1,
                11, 0U, 0, 0U, 0);
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_b0;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_u);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static void c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData, const char_T
  *c5_YsLWK1dB73EVPwRmtAVgi_varName, void *c5_YsLWK1dB73EVPwRmtAVgi_outData)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
  const char_T *c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  boolean_T c5_YsLWK1dB73EVPwRmtAVgi_y;
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    chartInstanceVoid;
  c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = sf_mex_dup
    (c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
  c5_YsLWK1dB73EVPwRmtAVgi_identifier = c5_YsLWK1dB73EVPwRmtAVgi_varName;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = c5_YsLWK1dB73EVPwRmtAVgi_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_outActive1),
     &c5_YsLWK1dB73EVPwRmtAVgi_thisId);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_outActive1);
  *(boolean_T *)c5_YsLWK1dB73EVPwRmtAVgi_outData = c5_YsLWK1dB73EVPwRmtAVgi_y;
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_mxArrayInData);
}

static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_h_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_b_setSimStateSideEffectsInfo, const char_T *
   c5_YsLWK1dB73EVPwRmtAVgi_identifier)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  emlrtMsgIdentifier c5_YsLWK1dB73EVPwRmtAVgi_thisId;
  c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fIdentifier =
    c5_YsLWK1dB73EVPwRmtAVgi_identifier;
  c5_YsLWK1dB73EVPwRmtAVgi_thisId.fParent = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_y,
                c5_YsLWK1dB73EVPwRmtAVgi_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(c5_YsLWK1dB73EVPwRmtAVgi_b_setSimStateSideEffectsInfo),
    &c5_YsLWK1dB73EVPwRmtAVgi_thisId), FALSE);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_b_setSimStateSideEffectsInfo);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_i_emlrt_marshallIn
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance, const
   mxArray *c5_YsLWK1dB73EVPwRmtAVgi_u, const emlrtMsgIdentifier
   *c5_YsLWK1dB73EVPwRmtAVgi_parentId)
{
  const mxArray *c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  c5_YsLWK1dB73EVPwRmtAVgi_y = NULL;
  sf_mex_assign(&c5_YsLWK1dB73EVPwRmtAVgi_y, sf_mex_duplicatearraysafe
                (&c5_YsLWK1dB73EVPwRmtAVgi_u), FALSE);
  sf_mex_destroy(&c5_YsLWK1dB73EVPwRmtAVgi_u);
  return c5_YsLWK1dB73EVPwRmtAVgi_y;
}

static uint16_T c5_YsLWK1dB73EVPwRmtAVgi__u16_s32_
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance,
   int32_T c5_YsLWK1dB73EVPwRmtAVgi_b)
{
  uint16_T c5_YsLWK1dB73EVPwRmtAVgi_a;
  c5_YsLWK1dB73EVPwRmtAVgi_a = (uint16_T)c5_YsLWK1dB73EVPwRmtAVgi_b;
  if (c5_YsLWK1dB73EVPwRmtAVgi_a != c5_YsLWK1dB73EVPwRmtAVgi_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW);
  }

  return c5_YsLWK1dB73EVPwRmtAVgi_a;
}

static int32_T c5_YsLWK1dB73EVPwRmtAVgi__s32_u32_
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance,
   uint32_T c5_YsLWK1dB73EVPwRmtAVgi_b)
{
  int32_T c5_YsLWK1dB73EVPwRmtAVgi_a;
  c5_YsLWK1dB73EVPwRmtAVgi_a = (int32_T)c5_YsLWK1dB73EVPwRmtAVgi_b;
  if (c5_YsLWK1dB73EVPwRmtAVgi_a < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW);
  }

  return c5_YsLWK1dB73EVPwRmtAVgi_a;
}

static void init_dsm_address_info
  (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance)
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

void sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1877675362U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(455488088U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3556827661U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4075196252U);
}

mxArray *sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("4zZQcQlMCBRazybU4jcD5F");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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

mxArray *sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray
  *sf_get_sim_state_info_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[22],T\"outActive1\",},{M[1],M[25],T\"outActive2\",},{M[1],M[78],T\"state\",},{M[3],M[19],T\"bck_timer_cur\",},{M[3],M[34],T\"bck_timer_def\",},{M[3],M[18],T\"forw_timer_cur\",},{M[3],M[35],T\"forw_timer_def\",},{M[3],M[67],T\"idle_st\",},{M[8],M[0],T\"is_active_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling\",},{M[8],M[1],T\"is_active_PathAutomaton\",}}",
    "100 S1x5'type','srcId','name','auxInfo'{{M[8],M[85],T\"is_active_UpdateForward\",},{M[8],M[93],T\"is_active_UpdateBackward\",},{M[9],M[1],T\"is_PathAutomaton\",},{M[9],M[85],T\"is_UpdateForward\",},{M[9],M[93],T\"is_UpdateBackward\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 15, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
    chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SimpleModelingMachineNumber_,
           5,
           10,
           15,
           15,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,"forw_timer_cur");
          _SFD_SET_DATA_PROPS(1,0,0,0,"bck_timer_cur");
          _SFD_SET_DATA_PROPS(2,2,0,1,"outActive1");
          _SFD_SET_DATA_PROPS(3,1,1,0,"inActive1");
          _SFD_SET_DATA_PROPS(4,1,1,0,"inActive2");
          _SFD_SET_DATA_PROPS(5,2,0,1,"outActive2");
          _SFD_SET_DATA_PROPS(6,7,0,0,"min_path_par");
          _SFD_SET_DATA_PROPS(7,0,0,0,"bck_timer_def");
          _SFD_SET_DATA_PROPS(8,0,0,0,"forw_timer_def");
          _SFD_SET_DATA_PROPS(9,7,0,0,"bck_param");
          _SFD_SET_DATA_PROPS(10,1,1,0,"forw_param");
          _SFD_SET_DATA_PROPS(11,0,0,0,"idle_st");
          _SFD_SET_DATA_PROPS(12,2,0,1,"state");
          _SFD_SET_DATA_PROPS(13,1,1,0,"pathTimerEn");
          _SFD_SET_DATA_PROPS(14,1,1,0,"pathTimerEx");
          _SFD_STATE_INFO(0,0,1);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,1);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,1);
          _SFD_STATE_INFO(9,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(1);
          _SFD_CH_SUBSTATE_INDEX(0,8);
          _SFD_CH_SUBSTATE_INDEX(1,6);
          _SFD_CH_SUBSTATE_INDEX(2,0);
          _SFD_ST_SUBSTATE_COUNT(8,1);
          _SFD_ST_SUBSTATE_INDEX(8,0,9);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(6,1);
          _SFD_ST_SUBSTATE_INDEX(6,0,7);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(0,5);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_INDEX(0,3,4);
          _SFD_ST_SUBSTATE_INDEX(0,4,5);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
        }

        _SFD_CV_INIT_CHART(3,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,5,1,0,0,0,NULL,NULL);
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

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,1,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,1,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 12, 25 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 18, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 23 };

          static unsigned int sEndGuardMap[] = { 17, 32 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 27 };

          static unsigned int sEndGuardMap[] = { 21, 45 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(10,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 30 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(11,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 17, 31 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(12,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 30 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(13,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 17, 31 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(14,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,2,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 3, 16 };

          static unsigned int sEndGuardMap[] = { 12, 25 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 18, 33 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,2,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 23 };

          static unsigned int sEndGuardMap[] = { 17, 32 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,2,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 27 };

          static unsigned int sEndGuardMap[] = { 21, 45 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,2,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 30 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,2,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 17, 31 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,2,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 30 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,2,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 17, 31 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_b_sf_marshallOut,
          (MexInFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_YsLWK1dB73EVPwRmtAVgi_c_sf_marshallOut,
          (MexInFcnForType)NULL);

        {
          boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive1;
          boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_inActive1;
          boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_inActive2;
          boolean_T *c5_YsLWK1dB73EVPwRmtAVgi_outActive2;
          uint16_T *c5_YsLWK1dB73EVPwRmtAVgi_forw_param;
          uint8_T *c5_YsLWK1dB73EVPwRmtAVgi_state;
          uint16_T *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn;
          uint16_T *c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx;
          c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx = (uint16_T *)
            ssGetInputPortSignal(chartInstance->S, 4);
          c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn = (uint16_T *)
            ssGetInputPortSignal(chartInstance->S, 3);
          c5_YsLWK1dB73EVPwRmtAVgi_state = (uint8_T *)ssGetOutputPortSignal
            (chartInstance->S, 3);
          c5_YsLWK1dB73EVPwRmtAVgi_forw_param = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c5_YsLWK1dB73EVPwRmtAVgi_outActive2 = (boolean_T *)
            ssGetOutputPortSignal(chartInstance->S, 2);
          c5_YsLWK1dB73EVPwRmtAVgi_inActive2 = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c5_YsLWK1dB73EVPwRmtAVgi_inActive1 = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 0);
          c5_YsLWK1dB73EVPwRmtAVgi_outActive1 = (boolean_T *)
            ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U,
            &chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_cur);
          _SFD_SET_DATA_VALUE_PTR(1U,
            &chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_cur);
          _SFD_SET_DATA_VALUE_PTR(2U, c5_YsLWK1dB73EVPwRmtAVgi_outActive1);
          _SFD_SET_DATA_VALUE_PTR(3U, c5_YsLWK1dB73EVPwRmtAVgi_inActive1);
          _SFD_SET_DATA_VALUE_PTR(4U, c5_YsLWK1dB73EVPwRmtAVgi_inActive2);
          _SFD_SET_DATA_VALUE_PTR(5U, c5_YsLWK1dB73EVPwRmtAVgi_outActive2);
          _SFD_SET_DATA_VALUE_PTR(6U,
            &chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_min_path_par);
          _SFD_SET_DATA_VALUE_PTR(7U,
            &chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_timer_def);
          _SFD_SET_DATA_VALUE_PTR(8U,
            &chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_forw_timer_def);
          _SFD_SET_DATA_VALUE_PTR(9U,
            &chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_bck_param);
          _SFD_SET_DATA_VALUE_PTR(10U, c5_YsLWK1dB73EVPwRmtAVgi_forw_param);
          _SFD_SET_DATA_VALUE_PTR(11U,
            &chartInstance->c5_YsLWK1dB73EVPwRmtAVgi_idle_st);
          _SFD_SET_DATA_VALUE_PTR(12U, c5_YsLWK1dB73EVPwRmtAVgi_state);
          _SFD_SET_DATA_VALUE_PTR(13U, c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEn);
          _SFD_SET_DATA_VALUE_PTR(14U, c5_YsLWK1dB73EVPwRmtAVgi_pathTimerEx);
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
  return "YsLWK1dB73EVPwRmtAVgi";
}

static void sf_opaque_initialize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*) chartInstanceVar);
  initialize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(void
  *chartInstanceVar)
{
  enable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(void
  *chartInstanceVar)
{
  disable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(void
  *chartInstanceVar)
{
  sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling();/* state var info */
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

extern void sf_internal_set_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
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
    sf_get_sim_state_info_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(SimStruct* S)
{
  return sf_internal_get_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(S);
}

static void sf_opaque_set_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(S, st);
}

static void sf_opaque_terminate_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SimpleModeling_optimization_info();
    }

    finalize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
      ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*)
       chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
    ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling
      ((SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(SimStruct
  *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SimpleModeling_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,5,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,5,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,5);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,5,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,5,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 5; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,5);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1877675362U));
  ssSetChecksum1(S,(455488088U));
  ssSetChecksum2(S,(3556827661U));
  ssSetChecksum3(S,(4075196252U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(SimStruct *S)
{
  SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *chartInstance;
  chartInstance = (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct *)
    utMalloc(sizeof(SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc5_YsLWK1dB73EVPwRmtAVgi_SimpleModelingInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling;
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

void c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
