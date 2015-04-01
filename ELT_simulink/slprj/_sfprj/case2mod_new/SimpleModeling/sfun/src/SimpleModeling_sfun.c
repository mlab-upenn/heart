/* Include files */

#include "SimpleModeling_sfun.h"
#include "SimpleModeling_sfun_debug_macros.h"
#include "c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling.h"
#include "c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling.h"
#include "c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling.h"
#include "c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling.h"
#include "c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling.h"
#include "c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling.h"
#include "c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling.h"
#include "c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling.h"
#include "c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling.h"
#include "c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling.h"
#include "c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling.h"
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
    if (!strcmp(specsCksum, "FT2Rn3q0zySDVVe9MhPEE")) {
      c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "OZLEmc0teLqN3CLQMZaujH")) {
      c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "iHbqgq5OOhH908EIaRAADB")) {
      c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "vXwTTer6QEu7WeXU1WN5mF")) {
      c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    return 0;
  }

  if (chartFileNumber==5) {
    if (!strcmp(specsCksum, "DOMkEJJvOihrR2MM4FadbE")) {
      c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "GLMQiTBwMl2hzhbvj4DjNH")) {
      c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "GVNHwP1EE0PQbqLdnqYvXH")) {
      c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "OTE4WoeY3J9zwYYYDUXLWH")) {
      c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "SGzNU4yI2QEkL8GWZRIdp")) {
      c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "Y064ynKF6iBp0uUxsU8tBB")) {
      c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_method_dispatcher(simstructPtr,
        method, data);
      return 1;
    }

    if (!strcmp(specsCksum, "heg0eOXf3SF2g8TVgoBNVF")) {
      c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_method_dispatcher(simstructPtr,
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

extern void sf_SimpleModeling_uses_exported_functions(int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[])
{
  plhs[0] = mxCreateLogicalScalar(0);
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
          ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2910778684U);
          ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3359664272U);
          ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3601170867U);
          ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1283767842U);
        } else if (nrhs==4) {
          unsigned int chartFileNumber;
          chartFileNumber = (unsigned int)mxGetScalar(prhs[3]);
          switch (chartFileNumber) {
           case 4:
            {
              extern void
                sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_check_sum
                (mxArray *plhs[]);
              sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_check_sum(plhs);
              break;
            }

           case 5:
            {
              extern void
                sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_check_sum
                (mxArray *plhs[]);
              sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_check_sum(plhs);
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
        if (strcmp(aiChksum, "st2zTSpjEGW2FUFTHDD1AB") == 0) {
          extern mxArray
            *sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "KRyjNsv4qa6xIh8AVdPk6G") == 0) {
          extern mxArray
            *sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "TOcudz5hxdYt7Y6ZtkRPRC") == 0) {
          extern mxArray *sf_c6_SimpleModeling_get_autoinheritance_info(void);
          plhs[0] = sf_c6_SimpleModeling_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "8R3PrHEz0dTjKRiHvmsCqG") == 0) {
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
          *sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_eml_resolved_functions_info
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
        if (strcmp(tpChksum, "FT2Rn3q0zySDVVe9MhPEE") == 0) {
          extern mxArray
            *sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "OZLEmc0teLqN3CLQMZaujH") == 0) {
          extern mxArray
            *sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "iHbqgq5OOhH908EIaRAADB") == 0) {
          extern mxArray
            *sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "vXwTTer6QEu7WeXU1WN5mF") == 0) {
          extern mxArray
            *sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "DOMkEJJvOihrR2MM4FadbE") == 0) {
          extern mxArray
            *sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "GLMQiTBwMl2hzhbvj4DjNH") == 0) {
          extern mxArray
            *sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "GVNHwP1EE0PQbqLdnqYvXH") == 0) {
          extern mxArray
            *sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "OTE4WoeY3J9zwYYYDUXLWH") == 0) {
          extern mxArray
            *sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "SGzNU4yI2QEkL8GWZRIdp") == 0) {
          extern mxArray
            *sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "Y064ynKF6iBp0uUxsU8tBB") == 0) {
          extern mxArray
            *sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "heg0eOXf3SF2g8TVgoBNVF") == 0) {
          extern mxArray
            *sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_third_party_uses_info
            (void);
          plhs[0] =
            sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "Iu7NUGoKCAYPZ5qWd1AR7E") == 0) {
          extern mxArray *sf_c6_SimpleModeling_third_party_uses_info(void);
          plhs[0] = sf_c6_SimpleModeling_third_party_uses_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "LIGPtD6UVLYb9D1n3hgXYF") == 0) {
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

unsigned int sf_SimpleModeling_jit_fallback_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(tpChksum, "FT2Rn3q0zySDVVe9MhPEE") == 0) {
          extern mxArray
            *sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_jit_fallback_info(void);
          plhs[0] = sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_jit_fallback_info
            ();
          break;
        }

        if (strcmp(tpChksum, "OZLEmc0teLqN3CLQMZaujH") == 0) {
          extern mxArray
            *sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "iHbqgq5OOhH908EIaRAADB") == 0) {
          extern mxArray
            *sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "vXwTTer6QEu7WeXU1WN5mF") == 0) {
          extern mxArray
            *sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_jit_fallback_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "DOMkEJJvOihrR2MM4FadbE") == 0) {
          extern mxArray
            *sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "GLMQiTBwMl2hzhbvj4DjNH") == 0) {
          extern mxArray
            *sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "GVNHwP1EE0PQbqLdnqYvXH") == 0) {
          extern mxArray
            *sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "OTE4WoeY3J9zwYYYDUXLWH") == 0) {
          extern mxArray
            *sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "SGzNU4yI2QEkL8GWZRIdp") == 0) {
          extern mxArray
            *sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_jit_fallback_info(void);
          plhs[0] = sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_jit_fallback_info
            ();
          break;
        }

        if (strcmp(tpChksum, "Y064ynKF6iBp0uUxsU8tBB") == 0) {
          extern mxArray
            *sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "heg0eOXf3SF2g8TVgoBNVF") == 0) {
          extern mxArray
            *sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_jit_fallback_info(void);
          plhs[0] =
            sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_jit_fallback_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "Iu7NUGoKCAYPZ5qWd1AR7E") == 0) {
          extern mxArray *sf_c6_SimpleModeling_jit_fallback_info(void);
          plhs[0] = sf_c6_SimpleModeling_jit_fallback_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "LIGPtD6UVLYb9D1n3hgXYF") == 0) {
          extern mxArray *sf_c8_SimpleModeling_jit_fallback_info(void);
          plhs[0] = sf_c8_SimpleModeling_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_SimpleModeling_updateBuildInfo_args_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(tpChksum, "FT2Rn3q0zySDVVe9MhPEE") == 0) {
          extern mxArray
            *sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "OZLEmc0teLqN3CLQMZaujH") == 0) {
          extern mxArray
            *sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "iHbqgq5OOhH908EIaRAADB") == 0) {
          extern mxArray
            *sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "vXwTTer6QEu7WeXU1WN5mF") == 0) {
          extern mxArray
            *sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "DOMkEJJvOihrR2MM4FadbE") == 0) {
          extern mxArray
            *sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "GLMQiTBwMl2hzhbvj4DjNH") == 0) {
          extern mxArray
            *sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "GVNHwP1EE0PQbqLdnqYvXH") == 0) {
          extern mxArray
            *sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "OTE4WoeY3J9zwYYYDUXLWH") == 0) {
          extern mxArray
            *sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "SGzNU4yI2QEkL8GWZRIdp") == 0) {
          extern mxArray
            *sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "Y064ynKF6iBp0uUxsU8tBB") == 0) {
          extern mxArray
            *sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }

        if (strcmp(tpChksum, "heg0eOXf3SF2g8TVgoBNVF") == 0) {
          extern mxArray
            *sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_updateBuildInfo_args_info
            ();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "Iu7NUGoKCAYPZ5qWd1AR7E") == 0) {
          extern mxArray *sf_c6_SimpleModeling_updateBuildInfo_args_info(void);
          plhs[0] = sf_c6_SimpleModeling_updateBuildInfo_args_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "LIGPtD6UVLYb9D1n3hgXYF") == 0) {
          extern mxArray *sf_c8_SimpleModeling_updateBuildInfo_args_info(void);
          plhs[0] = sf_c8_SimpleModeling_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void sf_SimpleModeling_get_post_codegen_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  unsigned int chartFileNumber = (unsigned int) mxGetScalar(prhs[0]);
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  switch (chartFileNumber) {
   case 4:
    {
      if (strcmp(tpChksum, "FT2Rn3q0zySDVVe9MhPEE") == 0) {
        extern mxArray
          *sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_get_post_codegen_info(void);
        plhs[0] =
          sf_c4_FT2Rn3q0zySDVVe9MhPEE_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "OZLEmc0teLqN3CLQMZaujH") == 0) {
        extern mxArray
          *sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c4_OZLEmc0teLqN3CLQMZaujH_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "iHbqgq5OOhH908EIaRAADB") == 0) {
        extern mxArray
          *sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c4_iHbqgq5OOhH908EIaRAADB_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "vXwTTer6QEu7WeXU1WN5mF") == 0) {
        extern mxArray
          *sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c4_vXwTTer6QEu7WeXU1WN5mF_SimpleModeling_get_post_codegen_info();
        return;
      }
    }
    break;

   case 5:
    {
      if (strcmp(tpChksum, "DOMkEJJvOihrR2MM4FadbE") == 0) {
        extern mxArray
          *sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c5_DOMkEJJvOihrR2MM4FadbE_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "GLMQiTBwMl2hzhbvj4DjNH") == 0) {
        extern mxArray
          *sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c5_GLMQiTBwMl2hzhbvj4DjNH_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "GVNHwP1EE0PQbqLdnqYvXH") == 0) {
        extern mxArray
          *sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c5_GVNHwP1EE0PQbqLdnqYvXH_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "OTE4WoeY3J9zwYYYDUXLWH") == 0) {
        extern mxArray
          *sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c5_OTE4WoeY3J9zwYYYDUXLWH_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "SGzNU4yI2QEkL8GWZRIdp") == 0) {
        extern mxArray
          *sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_get_post_codegen_info(void);
        plhs[0] =
          sf_c5_SGzNU4yI2QEkL8GWZRIdp_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "Y064ynKF6iBp0uUxsU8tBB") == 0) {
        extern mxArray
          *sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c5_Y064ynKF6iBp0uUxsU8tBB_SimpleModeling_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "heg0eOXf3SF2g8TVgoBNVF") == 0) {
        extern mxArray
          *sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_post_codegen_info
          (void);
        plhs[0] =
          sf_c5_heg0eOXf3SF2g8TVgoBNVF_SimpleModeling_get_post_codegen_info();
        return;
      }
    }
    break;

   case 6:
    {
      if (strcmp(tpChksum, "Iu7NUGoKCAYPZ5qWd1AR7E") == 0) {
        extern mxArray *sf_c6_SimpleModeling_get_post_codegen_info(void);
        plhs[0] = sf_c6_SimpleModeling_get_post_codegen_info();
        return;
      }
    }
    break;

   case 8:
    {
      if (strcmp(tpChksum, "LIGPtD6UVLYb9D1n3hgXYF") == 0) {
        extern mxArray *sf_c8_SimpleModeling_get_post_codegen_info(void);
        plhs[0] = sf_c8_SimpleModeling_get_post_codegen_info();
        return;
      }
    }
    break;

   default:
    break;
  }

  plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
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
      "case2mod_new");
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
