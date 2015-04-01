#ifndef __c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_h__
#define __c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc5_sj9EXIbH62BBAW6ior9pEE_SimpleModelingInstanceStruct
#define typedef_SFc5_sj9EXIbH62BBAW6ior9pEE_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_sj9EXIbH62BBAW6ior9pEE_sfEvent;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_PathAutomaton;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_Idle;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_AntegradeConduction;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_Double;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_RetrogradeConduction;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_Conflict;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_UpdateForward;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_Update;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_tp_UpdateBackward;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_b_tp_Update;
  boolean_T c5_sj9EXIbH62BBAW6ior9pEE_isStable;
  boolean_T c5_sj9EXIbH62BBAW6ior9pEE_doneDoubleBufferReInit;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_is_active_c5_sj9EXIbH62BBAW6ior9pEE_Si;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_is_PathAutomaton;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_is_active_PathAutomaton;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_is_UpdateForward;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_is_active_UpdateForward;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_is_UpdateBackward;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_is_active_UpdateBackward;
  uint16_T c5_sj9EXIbH62BBAW6ior9pEE_forw_timer_cur;
  uint16_T c5_sj9EXIbH62BBAW6ior9pEE_bck_timer_cur;
  uint16_T c5_sj9EXIbH62BBAW6ior9pEE_min_path_par;
  uint16_T c5_sj9EXIbH62BBAW6ior9pEE_bck_timer_def;
  uint16_T c5_sj9EXIbH62BBAW6ior9pEE_forw_timer_def;
  uint16_T c5_sj9EXIbH62BBAW6ior9pEE_bck_param;
  boolean_T c5_sj9EXIbH62BBAW6ior9pEE_idle_st;
  uint8_T c5_sj9EXIbH62BBAW6ior9pEE_doSetSimStateSideEffects;
  const mxArray *c5_sj9EXIbH62BBAW6ior9pEE_setSimStateSideEffectsInfo;
} SFc5_sj9EXIbH62BBAW6ior9pEE_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc5_sj9EXIbH62BBAW6ior9pEE_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
