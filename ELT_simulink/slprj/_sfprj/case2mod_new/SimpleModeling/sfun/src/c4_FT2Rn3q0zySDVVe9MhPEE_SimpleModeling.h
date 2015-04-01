#ifndef __c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_h__
#define __c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc4_FT2Rn3q0zySDVVe9MhPEE_SimpleModelingInstanceStruct
#define typedef_SFc4_FT2Rn3q0zySDVVe9MhPEE_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_FT2Rn3q0zySDVVe9MhPEE_sfEvent;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_tp_NodeAutomaton;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_tp_Rest;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_tp_RRP;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_tp_ERP;
  boolean_T c4_FT2Rn3q0zySDVVe9MhPEE_isStable;
  boolean_T c4_FT2Rn3q0zySDVVe9MhPEE_doneDoubleBufferReInit;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_is_active_c4_FT2Rn3q0zySDVVe9MhPEE_Simp;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_is_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModel;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_is_NodeAutomaton;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_TERP_cur;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_TRRP_cur;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_Trest_cur;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_TRRP_def;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_TERP_defs;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_TERP_s;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_TRRP_s;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_Trest_s;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_Terp_min;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_Terp_max;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_TERP_def;
  uint16_T c4_FT2Rn3q0zySDVVe9MhPEE_ratio;
  uint8_T c4_FT2Rn3q0zySDVVe9MhPEE_doSetSimStateSideEffects;
  const mxArray *c4_FT2Rn3q0zySDVVe9MhPEE_setSimStateSideEffectsInfo;
  boolean_T *c4_FT2Rn3q0zySDVVe9MhPEE_Active;
  boolean_T *c4_FT2Rn3q0zySDVVe9MhPEE_inActive;
  uint16_T *c4_FT2Rn3q0zySDVVe9MhPEE_Trest_def;
  uint8_T *c4_FT2Rn3q0zySDVVe9MhPEE_state;
  uint16_T *c4_FT2Rn3q0zySDVVe9MhPEE_path_timer;
} SFc4_FT2Rn3q0zySDVVe9MhPEE_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc4_FT2Rn3q0zySDVVe9MhPEE_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_get_check_sum(mxArray
  *plhs[]);
extern void c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_method_dispatcher(SimStruct *
  S, int_T method, void *data);

#endif
