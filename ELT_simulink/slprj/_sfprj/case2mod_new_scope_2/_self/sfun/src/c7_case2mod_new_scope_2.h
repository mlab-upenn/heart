#ifndef __c7_case2mod_new_scope_2_h__
#define __c7_case2mod_new_scope_2_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc7_case2mod_new_scope_2InstanceStruct
#define typedef_SFc7_case2mod_new_scope_2InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c7_sfEvent;
  boolean_T c7_isStable;
  boolean_T c7_doneDoubleBufferReInit;
  uint8_T c7_is_active_c7_case2mod_new_scope_2;
} SFc7_case2mod_new_scope_2InstanceStruct;

#endif                                 /*typedef_SFc7_case2mod_new_scope_2InstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_case2mod_new_scope_2_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c7_case2mod_new_scope_2_get_check_sum(mxArray *plhs[]);
extern void c7_case2mod_new_scope_2_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
