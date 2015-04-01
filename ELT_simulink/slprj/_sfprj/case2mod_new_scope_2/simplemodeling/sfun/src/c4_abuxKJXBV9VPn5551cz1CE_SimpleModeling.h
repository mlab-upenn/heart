#ifndef __c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_h__
#define __c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc4_abuxKJXBV9VPn5551cz1CE_SimpleModelingInstanceStruct
#define typedef_SFc4_abuxKJXBV9VPn5551cz1CE_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_abuxKJXBV9VPn5551cz1CE_sfEvent;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_tp_NodeAutomaton;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_tp_Rest;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_tp_RRP;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_tp_ERP;
  boolean_T c4_abuxKJXBV9VPn5551cz1CE_isStable;
  boolean_T c4_abuxKJXBV9VPn5551cz1CE_doneDoubleBufferReInit;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_is_active_c4_abuxKJXBV9VPn5551cz1CE_Si;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_is_c4_abuxKJXBV9VPn5551cz1CE_SimpleMod;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_is_NodeAutomaton;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_TERP_cur;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_TRRP_cur;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_Trest_cur;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_TRRP_def;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_TERP_defs;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_TERP_s;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_TRRP_s;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_Trest_s;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_Terp_min;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_Terp_max;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_TERP_def;
  uint16_T c4_abuxKJXBV9VPn5551cz1CE_ratio;
  uint8_T c4_abuxKJXBV9VPn5551cz1CE_doSetSimStateSideEffects;
  const mxArray *c4_abuxKJXBV9VPn5551cz1CE_setSimStateSideEffectsInfo;
} SFc4_abuxKJXBV9VPn5551cz1CE_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_abuxKJXBV9VPn5551cz1CE_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
