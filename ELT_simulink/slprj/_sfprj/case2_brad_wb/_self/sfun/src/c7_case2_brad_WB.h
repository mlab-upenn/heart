#ifndef __c7_case2_brad_WB_h__
#define __c7_case2_brad_WB_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc7_case2_brad_WBInstanceStruct
#define typedef_SFc7_case2_brad_WBInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c7_sfEvent;
  boolean_T c7_isStable;
  boolean_T c7_doneDoubleBufferReInit;
  uint8_T c7_is_active_c7_case2_brad_WB;
} SFc7_case2_brad_WBInstanceStruct;

#endif                                 /*typedef_SFc7_case2_brad_WBInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_case2_brad_WB_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_case2_brad_WB_get_check_sum(mxArray *plhs[]);
extern void c7_case2_brad_WB_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
