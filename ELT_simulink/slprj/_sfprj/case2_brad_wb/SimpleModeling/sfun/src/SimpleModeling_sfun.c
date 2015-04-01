/* Include files */

#include "SimpleModeling_sfun.h"
#include "SimpleModeling_sfun_debug_macros.h"
#include "c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling.h"
#include "c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling.h"
#include "c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling.h"
#include "c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling.h"
#include "c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling.h"
#include "c5_6x3QDARHeUi0bpdYm3tefC_SimpleModeling.h"
#include "c5_RmGGBKt53gmT5pfDpwQ5E_SimpleModeling.h"
#include "c5_XN8AP3RhI2jvNaP4qsMOjG_SimpleModeling.h"
#include "c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling.h"
#include "c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling.h"
#include "c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling.h"
#include "c6_SimpleModeling.h"
#include "c8_SimpleModeling.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _SimpleModelingMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void SimpleModeling_initializer(void)
{
}

void SimpleModeling_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_SimpleModeling_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==4) {
    if (!strcmp(specsCksum, "AKWZ2hTz1Kt3zen8afYfSH")) {
      c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "abuxKJXBV9VPn5551cz1CE")) {
      c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "eez4vufAy6ewiRKkW1dhDC")) {
      c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "fc2gmjlSmNiG2t5ij3GmMF")) {
      c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    return 0;
  }

  if (chartFileNumber==5) {
    if (!strcmp(specsCksum, "6h4ldQsTNfmOBZYVt4DTQH")) {
      c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "6x3QDARHeUi0bpdYm3tefC")) {
      c5_6x3QDARHeUi0bpdYm3tefC_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "RmGGBKt53gmT5pfDpwQ5E")) {
      c5_RmGGBKt53gmT5pfDpwQ5E_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "XN8AP3RhI2jvNaP4qsMOjG")) {
      c5_XN8AP3RhI2jvNaP4qsMOjG_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "YsLWK1dB73EVPwRmtAVgi")) {
      c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "qSYxDHUjMBCTudFuuUImZC")) {
      c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "sj9EXIbH62BBAW6ior9pEE")) {
      c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    return 0;
  }

  if (chartFileNumber==6) {
    c6_SimpleModeling_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_SimpleModeling_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_SimpleModeling_process_check_sum_call( int nlhs, mxArray * plhs[],
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
  if (nrhs>2 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"library")) {
      char machineName[100];
      mxGetString(prhs[2], machineName,sizeof(machineName)/sizeof(char));
      machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
      if (!strcmp(machineName,"SimpleModeling")) {
        if (nrhs==3) {
          ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1057765722U);
          ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4276707017U);
          ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1767292687U);
          ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2877171331U);
        } else if (nrhs==4) {
          unsigned int chartFileNumber;
          chartFileNumber = (unsigned int)mxGetScalar(prhs[3]);
          switch (chartFileNumber) {
           case 4:
            {
              extern void
                sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_check_sum
                (mxArray *plhs[]);
              sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_check_sum(plhs);
              break;
            }

           case 5:
            {
              extern void
                sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_check_sum
                (mxArray *plhs[]);
              sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_check_sum(plhs);
              break;
            }

           case 6:
            {
              extern void sf_c6_SimpleModeling_get_check_sum(mxArray *plhs[]);
              sf_c6_SimpleModeling_get_check_sum(plhs);
              break;
            }

           case 8:
            {
              extern void sf_c8_SimpleModeling_get_check_sum(mxArray *plhs[]);
              sf_c8_SimpleModeling_get_check_sum(plhs);
              break;
            }

           default:
            ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
          }
        } else {
          return 0;
        }
      } else {
        return 0;
      }
    } else {
      return 0;
    }
  } else {
    return 0;
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_SimpleModeling_autoinheritance_info( int nlhs, mxArray * plhs[],
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
     case 4:
      {
        if (strcmp(aiChksum, "QH3VWXXZyJ48YsVOXHBgPH") == 0) {
          extern mxArray
            *sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "4zZQcQlMCBRazybU4jcD5F") == 0) {
          extern mxArray
            *sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "rm9PeNlluQy0InkvmN8En") == 0) {
          extern mxArray *sf_c6_SimpleModeling_get_autoinheritance_info(void);
          plhs[0] = sf_c6_SimpleModeling_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "AeTbHjUUw7ZhnuelxIR5LC") == 0) {
          extern mxArray *sf_c8_SimpleModeling_get_autoinheritance_info(void);
          plhs[0] = sf_c8_SimpleModeling_get_autoinheritance_info();
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

unsigned int sf_SimpleModeling_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
     case 4:
      {
        extern const mxArray
          *sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_SimpleModeling_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_SimpleModeling_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_SimpleModeling_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_SimpleModeling_get_eml_resolved_functions_info();
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

unsigned int sf_SimpleModeling_third_party_uses_info( int nlhs, mxArray * plhs[],
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
     case 4:
      {
        if (strcmp(tpChksum, "AKWZ2hTz1Kt3zen8afYfSH") == 0) {
          extern mxArray
            *sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_AKWZ2hTz1Kt3zen8afYfSH_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "abuxKJXBV9VPn5551cz1CE") == 0) {
          extern mxArray
            *sf_c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_abuxKJXBV9VPn5551cz1CE_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "eez4vufAy6ewiRKkW1dhDC") == 0) {
          extern mxArray
            *sf_c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_eez4vufAy6ewiRKkW1dhDC_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "fc2gmjlSmNiG2t5ij3GmMF") == 0) {
          extern mxArray
            *sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_fc2gmjlSmNiG2t5ij3GmMF_SimpleModeling_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "6h4ldQsTNfmOBZYVt4DTQH") == 0) {
          extern mxArray
            *sf_c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_6h4ldQsTNfmOBZYVt4DTQH_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "6x3QDARHeUi0bpdYm3tefC") == 0) {
          extern mxArray
            *sf_c5_6x3QDARHeUi0bpdYm3tefC_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_6x3QDARHeUi0bpdYm3tefC_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "RmGGBKt53gmT5pfDpwQ5E") == 0) {
          extern mxArray
            *sf_c5_RmGGBKt53gmT5pfDpwQ5E_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_RmGGBKt53gmT5pfDpwQ5E_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "XN8AP3RhI2jvNaP4qsMOjG") == 0) {
          extern mxArray
            *sf_c5_XN8AP3RhI2jvNaP4qsMOjG_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_XN8AP3RhI2jvNaP4qsMOjG_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "YsLWK1dB73EVPwRmtAVgi") == 0) {
          extern mxArray
            *sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_YsLWK1dB73EVPwRmtAVgi_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "qSYxDHUjMBCTudFuuUImZC") == 0) {
          extern mxArray
            *sf_c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_qSYxDHUjMBCTudFuuUImZC_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "sj9EXIbH62BBAW6ior9pEE") == 0) {
          extern mxArray
            *sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_sj9EXIbH62BBAW6ior9pEE_SimpleModeling_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "k0JuWzQKDlYYuXrvBtruUC") == 0) {
          extern mxArray *sf_c6_SimpleModeling_third_party_uses_info(void);
          plhs[0] = sf_c6_SimpleModeling_third_party_uses_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "cSrNNRkiNCOmigyzxKtOdF") == 0) {
          extern mxArray *sf_c8_SimpleModeling_third_party_uses_info(void);
          plhs[0] = sf_c8_SimpleModeling_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void SimpleModeling_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _SimpleModelingMachineNumber_ = sf_debug_initialize_machine(debugInstance,
    "SimpleModeling","sfun",1,4,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _SimpleModelingMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _SimpleModelingMachineNumber_,0);
}

void SimpleModeling_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_SimpleModeling_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("SimpleModeling",
      "case2_brad_WB");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_SimpleModeling_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
