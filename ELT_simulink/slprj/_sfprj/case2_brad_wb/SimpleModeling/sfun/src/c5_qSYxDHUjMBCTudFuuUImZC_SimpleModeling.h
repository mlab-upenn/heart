#ifndef __c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_h__
#define __c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc5_qSYxDHUjMBCTudFuuUImZC_SimpleModelingInstanceStruct
#define typedef_SFc5_qSYxDHUjMBCTudFuuUImZC_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_qSYxDHUjMBCTudFuuUImZC_sfEvent;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_PathAutomaton;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_Idle;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_AntegradeConduction;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_Double;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_RetrogradeConduction;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_Conflict;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_UpdateForward;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_Update;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_tp_UpdateBackward;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_b_tp_Update;
  boolean_T c5_qSYxDHUjMBCTudFuuUImZC_isStable;
  boolean_T c5_qSYxDHUjMBCTudFuuUImZC_doneDoubleBufferReInit;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_is_active_c5_qSYxDHUjMBCTudFuuUImZC_Si;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_is_PathAutomaton;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_is_active_PathAutomaton;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_is_UpdateForward;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_is_active_UpdateForward;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_is_UpdateBackward;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_is_active_UpdateBackward;
  uint16_T c5_qSYxDHUjMBCTudFuuUImZC_forw_timer_cur;
  uint16_T c5_qSYxDHUjMBCTudFuuUImZC_bck_timer_cur;
  uint16_T c5_qSYxDHUjMBCTudFuuUImZC_min_path_par;
  uint16_T c5_qSYxDHUjMBCTudFuuUImZC_bck_timer_def;
  uint16_T c5_qSYxDHUjMBCTudFuuUImZC_forw_timer_def;
  uint16_T c5_qSYxDHUjMBCTudFuuUImZC_bck_param;
  boolean_T c5_qSYxDHUjMBCTudFuuUImZC_idle_st;
  uint8_T c5_qSYxDHUjMBCTudFuuUImZC_doSetSimStateSideEffects;
  const mxArray *c5_qSYxDHUjMBCTudFuuUImZC_setSimStateSideEffectsInfo;
} SFc5_qSYxDHUjMBCTudFuuUImZC_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc5_qSYxDHUjMBCTudFuuUImZC_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
