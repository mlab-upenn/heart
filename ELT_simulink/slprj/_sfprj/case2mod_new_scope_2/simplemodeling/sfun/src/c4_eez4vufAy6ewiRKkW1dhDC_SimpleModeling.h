#ifndef __c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_h__
#define __c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc4_eez4vufAy6ewiRKkW1dhDC_SimpleModelingInstanceStruct
#define typedef_SFc4_eez4vufAy6ewiRKkW1dhDC_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_eez4vufAy6ewiRKkW1dhDC_sfEvent;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_tp_NodeAutomaton;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_tp_Rest;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_tp_RRP;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_tp_ERP;
  boolean_T c4_eez4vufAy6ewiRKkW1dhDC_isStable;
  boolean_T c4_eez4vufAy6ewiRKkW1dhDC_doneDoubleBufferReInit;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_is_active_c4_eez4vufAy6ewiRKkW1dhDC_Si;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_is_c4_eez4vufAy6ewiRKkW1dhDC_SimpleMod;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_is_NodeAutomaton;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_TERP_cur;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_TRRP_cur;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_Trest_cur;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_TRRP_def;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_TERP_defs;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_TERP_s;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_TRRP_s;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_Trest_s;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_Terp_min;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_Terp_max;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_TERP_def;
  uint16_T c4_eez4vufAy6ewiRKkW1dhDC_ratio;
  uint8_T c4_eez4vufAy6ewiRKkW1dhDC_doSetSimStateSideEffects;
  const mxArray *c4_eez4vufAy6ewiRKkW1dhDC_setSimStateSideEffectsInfo;
} SFc4_eez4vufAy6ewiRKkW1dhDC_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_eez4vufAy6ewiRKkW1dhDC_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
