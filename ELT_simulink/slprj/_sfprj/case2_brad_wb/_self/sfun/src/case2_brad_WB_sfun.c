/* Include files */

#include "case2_brad_WB_sfun.h"
#include "case2_brad_WB_sfun_debug_macros.h"
#include "c1_case2_brad_WB.h"
#include "c7_case2_brad_WB.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _case2_brad_WBMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void case2_brad_WB_initializer(void)
{
}

void case2_brad_WB_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_case2_brad_WB_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_case2_brad_WB_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_case2_brad_WB_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_case2_brad_WB_process_check_sum_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1547775974U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2433036719U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3180316526U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2680390558U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(484339765U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1355256917U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1790063692U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1570117427U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_case2_brad_WB_get_check_sum(mxArray *plhs[]);
          sf_c1_case2_brad_WB_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_case2_brad_WB_get_check_sum(mxArray *plhs[]);
          sf_c7_case2_brad_WB_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3876857910U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1565137894U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3264760630U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2650443385U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3295711778U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3752561621U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(209955054U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1480410827U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_case2_brad_WB_autoinheritance_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "88xq0wIBGT8smrq7JXx7YG") == 0) {
          extern mxArray *sf_c1_case2_brad_WB_get_autoinheritance_info(void);
          plhs[0] = sf_c1_case2_brad_WB_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "88xq0wIBGT8smrq7JXx7YG") == 0) {
          extern mxArray *sf_c7_case2_brad_WB_get_autoinheritance_info(void);
          plhs[0] = sf_c7_case2_brad_WB_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_case2_brad_WB_get_eml_resolved_functions_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_case2_brad_WB_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_case2_brad_WB_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_case2_brad_WB_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_case2_brad_WB_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_case2_brad_WB_third_party_uses_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "KtnPzSyHDN5KH8iBhoBJM") == 0) {
          extern mxArray *sf_c1_case2_brad_WB_third_party_uses_info(void);
          plhs[0] = sf_c1_case2_brad_WB_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "KtnPzSyHDN5KH8iBhoBJM") == 0) {
          extern mxArray *sf_c7_case2_brad_WB_third_party_uses_info(void);
          plhs[0] = sf_c7_case2_brad_WB_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void case2_brad_WB_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _case2_brad_WBMachineNumber_ = sf_debug_initialize_machine(debugInstance,
    "case2_brad_WB","sfun",0,2,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _case2_brad_WBMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _case2_brad_WBMachineNumber_,0);
}

void case2_brad_WB_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_case2_brad_WB_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("case2_brad_WB",
      "case2_brad_WB");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_case2_brad_WB_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
