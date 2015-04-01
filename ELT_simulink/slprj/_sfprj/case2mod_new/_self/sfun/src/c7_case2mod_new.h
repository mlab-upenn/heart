#ifndef __c7_case2mod_new_h__
#define __c7_case2mod_new_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc7_case2mod_newInstanceStruct
#define typedef_SFc7_case2mod_newInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c7_sfEvent;
  boolean_T c7_isStable;
  boolean_T c7_doneDoubleBufferReInit;
  uint8_T c7_is_active_c7_case2mod_new;
  real_T *c7_t;
  boolean_T *c7_y;
} SFc7_case2mod_newInstanceStruct;

#endif                                 /*typedef_SFc7_case2mod_newInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_case2mod_new_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_case2mod_new_get_check_sum(mxArray *plhs[]);
extern void c7_case2mod_new_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
