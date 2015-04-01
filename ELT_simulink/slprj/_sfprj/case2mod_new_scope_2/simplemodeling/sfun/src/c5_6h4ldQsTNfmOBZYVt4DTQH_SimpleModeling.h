#ifndef __c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_h__
#define __c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModelingInstanceStruct
#define typedef_SFc5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_6h4ldQsTNfmOBZYVt4DTQH_sfEvent;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_PathAutomaton;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_Idle;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_AntegradeConduction;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_Double;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_RetrogradeConduction;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_Conflict;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_UpdateForward;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_Update;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_tp_UpdateBackward;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_b_tp_Update;
  boolean_T c5_6h4ldQsTNfmOBZYVt4DTQH_isStable;
  boolean_T c5_6h4ldQsTNfmOBZYVt4DTQH_doneDoubleBufferReInit;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_is_active_c5_6h4ldQsTNfmOBZYVt4DTQH_Si;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_is_PathAutomaton;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_is_active_PathAutomaton;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_is_UpdateForward;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_is_active_UpdateForward;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_is_UpdateBackward;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_is_active_UpdateBackward;
  uint16_T c5_6h4ldQsTNfmOBZYVt4DTQH_forw_timer_cur;
  uint16_T c5_6h4ldQsTNfmOBZYVt4DTQH_bck_timer_cur;
  uint16_T c5_6h4ldQsTNfmOBZYVt4DTQH_min_path_par;
  uint16_T c5_6h4ldQsTNfmOBZYVt4DTQH_bck_timer_def;
  uint16_T c5_6h4ldQsTNfmOBZYVt4DTQH_forw_timer_def;
  uint16_T c5_6h4ldQsTNfmOBZYVt4DTQH_bck_param;
  boolean_T c5_6h4ldQsTNfmOBZYVt4DTQH_idle_st;
  uint8_T c5_6h4ldQsTNfmOBZYVt4DTQH_doSetSimStateSideEffects;
  const mxArray *c5_6h4ldQsTNfmOBZYVt4DTQH_setSimStateSideEffectsInfo;
} SFc5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
