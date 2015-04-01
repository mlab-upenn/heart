#ifndef __c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_h__
#define __c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc4_OZLEmc0teLqN3CLQMZaujH_SimpleModelingInstanceStruct
#define typedef_SFc4_OZLEmc0teLqN3CLQMZaujH_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_OZLEmc0teLqN3CLQMZaujH_sfEvent;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_tp_NodeAutomaton;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_tp_Rest;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_tp_RRP;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_tp_ERP;
  boolean_T c4_OZLEmc0teLqN3CLQMZaujH_isStable;
  boolean_T c4_OZLEmc0teLqN3CLQMZaujH_doneDoubleBufferReInit;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_is_active_c4_OZLEmc0teLqN3CLQMZaujH_Si;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_is_c4_OZLEmc0teLqN3CLQMZaujH_SimpleMod;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_is_NodeAutomaton;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_TERP_cur;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_TRRP_cur;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_Trest_cur;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_TRRP_def;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_TERP_defs;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_TERP_s;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_TRRP_s;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_Trest_s;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_Terp_min;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_Terp_max;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_TERP_def;
  uint16_T c4_OZLEmc0teLqN3CLQMZaujH_ratio;
  uint8_T c4_OZLEmc0teLqN3CLQMZaujH_doSetSimStateSideEffects;
  const mxArray *c4_OZLEmc0teLqN3CLQMZaujH_setSimStateSideEffectsInfo;
  boolean_T *c4_OZLEmc0teLqN3CLQMZaujH_Active;
  boolean_T *c4_OZLEmc0teLqN3CLQMZaujH_inActive;
  uint16_T *c4_OZLEmc0teLqN3CLQMZaujH_Trest_def;
  uint8_T *c4_OZLEmc0teLqN3CLQMZaujH_state;
  uint16_T *c4_OZLEmc0teLqN3CLQMZaujH_path_timer;
} SFc4_OZLEmc0teLqN3CLQMZaujH_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_OZLEmc0teLqN3CLQMZaujH_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_method_dispatcher(SimStruct
  *S, int_T method, void *data);

#endif
