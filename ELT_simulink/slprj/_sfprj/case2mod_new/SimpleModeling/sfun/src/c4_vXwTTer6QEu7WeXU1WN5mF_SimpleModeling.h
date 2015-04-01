#ifndef __c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_h__
#define __c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc4_vXwTTer6QEu7WeXU1WN5mF_SimpleModelingInstanceStruct
#define typedef_SFc4_vXwTTer6QEu7WeXU1WN5mF_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_vXwTTer6QEu7WeXU1WN5mF_sfEvent;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_tp_NodeAutomaton;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_tp_Rest;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_tp_RRP;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_tp_ERP;
  boolean_T c4_vXwTTer6QEu7WeXU1WN5mF_isStable;
  boolean_T c4_vXwTTer6QEu7WeXU1WN5mF_doneDoubleBufferReInit;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_is_active_c4_vXwTTer6QEu7WeXU1WN5mF_Si;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_is_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleMod;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_is_NodeAutomaton;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_TERP_cur;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_TRRP_cur;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_Trest_cur;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_TRRP_def;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_TERP_defs;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_TERP_s;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_TRRP_s;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_Trest_s;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_Terp_min;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_Terp_max;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_TERP_def;
  uint16_T c4_vXwTTer6QEu7WeXU1WN5mF_ratio;
  uint8_T c4_vXwTTer6QEu7WeXU1WN5mF_doSetSimStateSideEffects;
  const mxArray *c4_vXwTTer6QEu7WeXU1WN5mF_setSimStateSideEffectsInfo;
  boolean_T *c4_vXwTTer6QEu7WeXU1WN5mF_Active;
  boolean_T *c4_vXwTTer6QEu7WeXU1WN5mF_inActive;
  uint16_T *c4_vXwTTer6QEu7WeXU1WN5mF_Trest_def;
  uint8_T *c4_vXwTTer6QEu7WeXU1WN5mF_state;
  uint16_T *c4_vXwTTer6QEu7WeXU1WN5mF_path_timer;
} SFc4_vXwTTer6QEu7WeXU1WN5mF_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_vXwTTer6QEu7WeXU1WN5mF_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
