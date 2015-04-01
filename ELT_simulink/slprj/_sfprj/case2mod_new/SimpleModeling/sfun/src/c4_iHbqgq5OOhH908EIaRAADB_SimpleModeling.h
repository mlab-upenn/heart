#ifndef __c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_h__
#define __c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc4_iHbqgq5OOhH908EIaRAADB_SimpleModelingInstanceStruct
#define typedef_SFc4_iHbqgq5OOhH908EIaRAADB_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_iHbqgq5OOhH908EIaRAADB_sfEvent;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_tp_NodeAutomaton;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_tp_Rest;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_tp_RRP;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_tp_ERP;
  boolean_T c4_iHbqgq5OOhH908EIaRAADB_isStable;
  boolean_T c4_iHbqgq5OOhH908EIaRAADB_doneDoubleBufferReInit;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_is_active_c4_iHbqgq5OOhH908EIaRAADB_Si;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_is_c4_iHbqgq5OOhH908EIaRAADB_SimpleMod;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_is_NodeAutomaton;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_TERP_cur;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_TRRP_cur;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_Trest_cur;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_TRRP_def;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_TERP_defs;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_TERP_s;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_TRRP_s;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_Trest_s;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_Terp_min;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_Terp_max;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_TERP_def;
  uint16_T c4_iHbqgq5OOhH908EIaRAADB_ratio;
  uint8_T c4_iHbqgq5OOhH908EIaRAADB_doSetSimStateSideEffects;
  const mxArray *c4_iHbqgq5OOhH908EIaRAADB_setSimStateSideEffectsInfo;
  boolean_T *c4_iHbqgq5OOhH908EIaRAADB_Active;
  boolean_T *c4_iHbqgq5OOhH908EIaRAADB_inActive;
  uint16_T *c4_iHbqgq5OOhH908EIaRAADB_Trest_def;
  uint8_T *c4_iHbqgq5OOhH908EIaRAADB_state;
  uint16_T *c4_iHbqgq5OOhH908EIaRAADB_path_timer;
} SFc4_iHbqgq5OOhH908EIaRAADB_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_iHbqgq5OOhH908EIaRAADB_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
