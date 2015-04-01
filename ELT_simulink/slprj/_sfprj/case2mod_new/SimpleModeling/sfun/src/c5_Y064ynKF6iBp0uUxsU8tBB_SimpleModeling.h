#ifndef __c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_h__
#define __c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc5_Y064ynKF6iBp0uUxsU8tBB_SimpleModelingInstanceStruct
#define typedef_SFc5_Y064ynKF6iBp0uUxsU8tBB_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_Y064ynKF6iBp0uUxsU8tBB_sfEvent;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_PathAutomaton;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_Idle;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_AntegradeConduction;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_Double;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_RetrogradeConduction;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_Conflict;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_UpdateForward;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_Update;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_tp_UpdateBackward;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_b_tp_Update;
  boolean_T c5_Y064ynKF6iBp0uUxsU8tBB_isStable;
  boolean_T c5_Y064ynKF6iBp0uUxsU8tBB_doneDoubleBufferReInit;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_is_active_c5_Y064ynKF6iBp0uUxsU8tBB_Si;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_is_PathAutomaton;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_is_active_PathAutomaton;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_is_UpdateForward;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_is_active_UpdateForward;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_is_UpdateBackward;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_is_active_UpdateBackward;
  uint16_T c5_Y064ynKF6iBp0uUxsU8tBB_forw_timer_cur;
  uint16_T c5_Y064ynKF6iBp0uUxsU8tBB_bck_timer_cur;
  uint16_T c5_Y064ynKF6iBp0uUxsU8tBB_min_path_par;
  uint16_T c5_Y064ynKF6iBp0uUxsU8tBB_bck_timer_def;
  uint16_T c5_Y064ynKF6iBp0uUxsU8tBB_forw_timer_def;
  uint16_T c5_Y064ynKF6iBp0uUxsU8tBB_bck_param;
  boolean_T c5_Y064ynKF6iBp0uUxsU8tBB_idle_st;
  uint8_T c5_Y064ynKF6iBp0uUxsU8tBB_doSetSimStateSideEffects;
  const mxArray *c5_Y064ynKF6iBp0uUxsU8tBB_setSimStateSideEffectsInfo;
  boolean_T *c5_Y064ynKF6iBp0uUxsU8tBB_outActive1;
  boolean_T *c5_Y064ynKF6iBp0uUxsU8tBB_inActive1;
  boolean_T *c5_Y064ynKF6iBp0uUxsU8tBB_inActive2;
  boolean_T *c5_Y064ynKF6iBp0uUxsU8tBB_outActive2;
  uint16_T *c5_Y064ynKF6iBp0uUxsU8tBB_forw_param;
  uint8_T *c5_Y064ynKF6iBp0uUxsU8tBB_state;
  uint16_T *c5_Y064ynKF6iBp0uUxsU8tBB_pathTimerEn;
  uint16_T *c5_Y064ynKF6iBp0uUxsU8tBB_pathTimerEx;
} SFc5_Y064ynKF6iBp0uUxsU8tBB_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc5_Y064ynKF6iBp0uUxsU8tBB_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
