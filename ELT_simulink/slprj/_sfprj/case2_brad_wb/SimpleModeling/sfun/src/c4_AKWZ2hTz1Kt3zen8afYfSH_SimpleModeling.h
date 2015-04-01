#ifndef __c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_h__
#define __c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct
#define typedef_SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_AKWZ2hTz1Kt3zen8afYfSH_sfEvent;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_tp_NodeAutomaton;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_tp_Rest;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_tp_RRP;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_tp_ERP;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_isStable;
  boolean_T c4_AKWZ2hTz1Kt3zen8afYfSH_doneDoubleBufferReInit;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_is_active_c4_AKWZ2hTz1Kt3zen8afYfSH_Si;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_is_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleMod;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_is_NodeAutomaton;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_cur;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_cur;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_cur;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_def;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_defs;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_s;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_TRRP_s;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_Trest_s;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_min;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_Terp_max;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_TERP_def;
  uint16_T c4_AKWZ2hTz1Kt3zen8afYfSH_ratio;
  uint8_T c4_AKWZ2hTz1Kt3zen8afYfSH_doSetSimStateSideEffects;
  const mxArray *c4_AKWZ2hTz1Kt3zen8afYfSH_setSimStateSideEffectsInfo;
} SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
