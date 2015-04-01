#ifndef __c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_h__
#define __c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModelingInstanceStruct
#define typedef_SFc5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_GLMQiTBwMl2hzhbvj4DjNH_sfEvent;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_PathAutomaton;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_Idle;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_AntegradeConduction;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_Double;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_RetrogradeConduction;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_Conflict;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_UpdateForward;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_Update;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_tp_UpdateBackward;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_b_tp_Update;
  boolean_T c5_GLMQiTBwMl2hzhbvj4DjNH_isStable;
  boolean_T c5_GLMQiTBwMl2hzhbvj4DjNH_doneDoubleBufferReInit;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_is_active_c5_GLMQiTBwMl2hzhbvj4DjNH_Si;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_is_PathAutomaton;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_is_active_PathAutomaton;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_is_UpdateForward;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_is_active_UpdateForward;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_is_UpdateBackward;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_is_active_UpdateBackward;
  uint16_T c5_GLMQiTBwMl2hzhbvj4DjNH_forw_timer_cur;
  uint16_T c5_GLMQiTBwMl2hzhbvj4DjNH_bck_timer_cur;
  uint16_T c5_GLMQiTBwMl2hzhbvj4DjNH_min_path_par;
  uint16_T c5_GLMQiTBwMl2hzhbvj4DjNH_bck_timer_def;
  uint16_T c5_GLMQiTBwMl2hzhbvj4DjNH_forw_timer_def;
  uint16_T c5_GLMQiTBwMl2hzhbvj4DjNH_bck_param;
  boolean_T c5_GLMQiTBwMl2hzhbvj4DjNH_idle_st;
  uint8_T c5_GLMQiTBwMl2hzhbvj4DjNH_doSetSimStateSideEffects;
  const mxArray *c5_GLMQiTBwMl2hzhbvj4DjNH_setSimStateSideEffectsInfo;
  boolean_T *c5_GLMQiTBwMl2hzhbvj4DjNH_outActive1;
  boolean_T *c5_GLMQiTBwMl2hzhbvj4DjNH_inActive1;
  boolean_T *c5_GLMQiTBwMl2hzhbvj4DjNH_inActive2;
  boolean_T *c5_GLMQiTBwMl2hzhbvj4DjNH_outActive2;
  uint16_T *c5_GLMQiTBwMl2hzhbvj4DjNH_forw_param;
  uint8_T *c5_GLMQiTBwMl2hzhbvj4DjNH_state;
  uint16_T *c5_GLMQiTBwMl2hzhbvj4DjNH_pathTimerEn;
  uint16_T *c5_GLMQiTBwMl2hzhbvj4DjNH_pathTimerEx;
} SFc5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
