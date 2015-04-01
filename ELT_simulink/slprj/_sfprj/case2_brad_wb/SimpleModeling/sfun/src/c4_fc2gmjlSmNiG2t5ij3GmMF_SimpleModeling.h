#ifndef __c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_h__
#define __c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModelingInstanceStruct
#define typedef_SFc4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_fc2gmjlSmNiG2t5ij3GmMF_sfEvent;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_tp_NodeAutomaton;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_tp_Rest;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_tp_RRP;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_tp_ERP;
  boolean_T c4_fc2gmjlSmNiG2t5ij3GmMF_isStable;
  boolean_T c4_fc2gmjlSmNiG2t5ij3GmMF_doneDoubleBufferReInit;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_is_active_c4_fc2gmjlSmNiG2t5ij3GmMF_Si;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_is_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleMod;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_is_NodeAutomaton;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_TERP_cur;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_TRRP_cur;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_Trest_cur;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_TRRP_def;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_TERP_defs;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_TERP_s;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_TRRP_s;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_Trest_s;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_Terp_min;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_Terp_max;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_TERP_def;
  uint16_T c4_fc2gmjlSmNiG2t5ij3GmMF_ratio;
  uint8_T c4_fc2gmjlSmNiG2t5ij3GmMF_doSetSimStateSideEffects;
  const mxArray *c4_fc2gmjlSmNiG2t5ij3GmMF_setSimStateSideEffectsInfo;
} SFc4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
