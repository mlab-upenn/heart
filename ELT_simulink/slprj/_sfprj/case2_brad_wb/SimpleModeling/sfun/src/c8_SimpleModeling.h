#ifndef __c8_SimpleModeling_h__
#define __c8_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc8_SimpleModelingInstanceStruct
#define typedef_SFc8_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c8_sfEvent;
  uint8_T c8_tp_Wait;
  uint8_T c8_tp_Count;
  uint8_T c8_tp_start;
  boolean_T c8_isStable;
  boolean_T c8_doneDoubleBufferReInit;
  uint8_T c8_is_active_c8_SimpleModeling;
  uint8_T c8_is_c8_SimpleModeling;
  uint16_T c8_count;
  uint8_T c8_doSetSimStateSideEffects;
  const mxArray *c8_setSimStateSideEffectsInfo;
} SFc8_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc8_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_SimpleModeling_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c8_SimpleModeling_get_check_sum(mxArray *plhs[]);
extern void c8_SimpleModeling_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
