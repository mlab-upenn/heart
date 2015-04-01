#ifndef __c6_SimpleModeling_h__
#define __c6_SimpleModeling_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_SimpleModelingInstanceStruct
#define typedef_SFc6_SimpleModelingInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c6_sfEvent;
  uint8_T c6_tp_pacemakerDDD;
  uint8_T c6_tp_LRI;
  uint8_T c6_tp_VRPst2;
  uint8_T c6_b_tp_LRI;
  uint8_T c6_tp_URIst1;
  uint8_T c6_tp_st1;
  uint8_T c6_tp_st2;
  uint8_T c6_tp_URIst2;
  uint8_T c6_tp_ARPs1;
  uint8_T c6_tp_ARPs2;
  uint8_T c6_tp_VRPst1;
  uint8_T c6_tp_AVI;
  uint8_T c6_tp_PVARP;
  uint8_T c6_tp_VRP;
  uint8_T c6_tp_URI;
  boolean_T c6_isStable;
  uint8_T c6_is_active_c6_SimpleModeling;
  uint8_T c6_is_c6_SimpleModeling;
  uint8_T c6_is_LRI;
  uint8_T c6_is_active_LRI;
  uint8_T c6_is_AVI;
  uint8_T c6_is_active_AVI;
  uint8_T c6_is_PVARP;
  uint8_T c6_is_active_PVARP;
  uint8_T c6_is_VRP;
  uint8_T c6_is_active_VRP;
  uint8_T c6_is_URI;
  uint8_T c6_is_active_URI;
  uint16_T c6_LRIcur;
  int16_T c6_AVIcur;
  uint16_T c6_ARPcur;
  uint16_T c6_VRPcur;
  uint16_T c6_URIcur;
  boolean_T c6_AVIst;
  boolean_T c6_URIst;
  uint8_T c6_doSetSimStateSideEffects;
  const mxArray *c6_setSimStateSideEffectsInfo;
  boolean_T *c6_LRIout;
  boolean_T *c6_Ain;
  boolean_T *c6_AVIout;
  boolean_T *c6_ARPout;
  boolean_T *c6_VRPout;
  boolean_T *c6_Vin;
  uint16_T *c6_LRIdef;
  uint16_T *c6_ARPdef;
  uint16_T *c6_AVIdef;
  uint16_T *c6_URIdef;
  uint16_T *c6_VRPdef;
  real_T *c6_AR;
} SFc6_SimpleModelingInstanceStruct;

#endif                                 /*typedef_SFc6_SimpleModelingInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_SimpleModeling_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_SimpleModeling_get_check_sum(mxArray *plhs[]);
extern void c6_SimpleModeling_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
