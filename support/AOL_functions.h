/*************************************LICEENSE***********************************************
 Copyright 2020 UCL, SilverLab

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
********************************************************************************************/

/************************Version-1.0(beta)*************************************************/
#pragma once

#ifdef __cplusplus

extern "C" {

#endif

/* Test installation */
_declspec(dllexport) int doublematrix(int dim1, int dim2, double *extarray, double *dextarray);

/* Get 2D array sizes for input to the main function */
_declspec(dllexport) int getRecordSize
(
	int no_of_lines,                //input
  double *scanVariables,          //input
  double *start_norm_raw,         //input
  int *no_of_rows,	              //output
  int *record_size,               //output
  int *imaging_mode               //output
);

/* MAIN FUNCTION */
_declspec(dllexport) int getAolRecord
(
	int field_correction_input,            //input
	double *pixels_per_line,               //input
	double *XYZ_start,                     //input
	double *XYZ_stop,                      //input
	double *arrayDims,                     //input
	double *scanVariables,                 //input
	double *AOL_Params,                    //input
	double *Scan_Params,                   //input
	double *drive_param_1,                 //output
	double *drive_param_2,                 //output
	double *drive_param_3,                 //output
	double *drive_param_4,                 //output
	double *drive_param_5,                 //output
	double *field_correction_1,            //output
	double *field_correction_2,            //output
	double *field_correction_3,            //output
	double *field_correction_4,            //output
	double *field_correction_5             //output
);



#ifdef __cplusplus

}

#endif
