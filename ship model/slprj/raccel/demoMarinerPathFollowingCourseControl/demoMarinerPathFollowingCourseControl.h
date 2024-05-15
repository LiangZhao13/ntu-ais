#ifndef demoMarinerPathFollowingCourseControl_h_
#define demoMarinerPathFollowingCourseControl_h_
#ifndef demoMarinerPathFollowingCourseControl_COMMON_INCLUDES_
#define demoMarinerPathFollowingCourseControl_COMMON_INCLUDES_
#include <stdlib.h>
#include <stdio.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "demoMarinerPathFollowingCourseControl_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME demoMarinerPathFollowingCourseControl
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (16) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (10)   
#elif NCSTATES != 10
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T d25mgzrntl [ 7 ] ; real_T biizpmf3bn ; real_T
n5pvzdd33j ; real_T h2tvvxrgwg ; real_T an2daryais ; real_T ngqggygexp ;
real_T o4uvmnpinp ; real_T gvtucr52ij ; real_T lk0bm5xw5m [ 49 ] ; real_T
hleb2ewssu [ 49 ] ; real_T ncqyk10zdm ; real_T fjukfd0ml0 [ 7 ] ; real_T
otagkty1sc [ 7 ] ; real_T ocn4o1graj ; real_T irc5tjl1ah ; real_T a2jle11lq2
[ 5 ] ; } B ; typedef struct { real_T oc0omgil0h ; real_T hqcskiqd0y ; real_T
jiervi4iek ; real_T owksmtgtzo ; real_T m0kis4oha4 [ 5 ] ; real_T bfaw3qxqxr
[ 25 ] ; struct { void * AQHandles ; } ghkckquryd ; struct { void * AQHandles
; } nyi2nvjifs ; struct { void * AQHandles ; } kbalrgazis ; struct { void *
AQHandles ; } fwltfpz541 ; struct { void * AQHandles ; } bkdowjb332 ; struct
{ void * AQHandles ; } oi100ramc1 ; struct { void * AQHandles ; } ntyl23hlog
; struct { void * AQHandles ; } np4zebvttt ; struct { void * AQHandles ; }
m33o44zqms ; struct { void * AQHandles ; } eyihkpy5jo ; struct { void *
AQHandles ; } mbenr5dnw0 ; struct { void * AQHandles ; } bqrvh1egsn ; struct
{ void * AQHandles ; } h2ncbkx1nd ; struct { void * AQHandles ; } i2q4rrymn5
; struct { void * AQHandles ; } kpgpl1x3nf ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } mj5bh5o2fl ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } kj33gbqgqh ; int32_T gkr5vx1zx5 ; int32_T
dkc5vqz4gx ; int32_T fjimdccq4p ; int_T h5x2psv2rm ; struct { int_T PrevIndex
; } adphgackqq ; struct { int_T PrevIndex ; } npo3ez1xrm ; boolean_T
adi32v00qw ; boolean_T gayjctc4dn ; boolean_T mhvkskjfs0 ; boolean_T
cuv3mcnkfb ; boolean_T kyv0fyn5jf ; boolean_T mubxw11mvk ; boolean_T
mlz0dzd5h3 ; boolean_T mljze4pwl0 ; boolean_T iw1j5thqrr ; } DW ; typedef
struct { real_T ctzcwqbk5w [ 7 ] ; real_T nuy31esdl2 ; real_T azap50bxgn ;
real_T phk1si4gzc ; } X ; typedef struct { real_T ctzcwqbk5w [ 7 ] ; real_T
nuy31esdl2 ; real_T azap50bxgn ; real_T phk1si4gzc ; } XDot ; typedef struct
{ boolean_T ctzcwqbk5w [ 7 ] ; boolean_T nuy31esdl2 ; boolean_T azap50bxgn ;
boolean_T phk1si4gzc ; } XDis ; typedef struct { rtwCAPI_ModelMappingInfo mmi
; } DataMapInfo ; struct P_ { real_T LOSobserver_K_f ; real_T
Courseautopilot_K_nomoto ; real_T Courseautopilot_Kp ; real_T
DiscertetimeEKFforSOGandCOG_Qd [ 4 ] ; real_T DiscertetimeEKFforSOGandCOG_Rd
[ 4 ] ; real_T Courseautopilot_Td ; real_T Courseautopilot_Ti ; real_T
DiscertetimeEKFforSOGandCOG_alpha_1 ; real_T
DiscertetimeEKFforSOGandCOG_alpha_2 ; real_T
DiscertetimeEKFforSOGandCOG_h_samp ; real_T _A ; real_T _C ; real_T
Integral_A ; real_T Integral_C ; real_T Differentiator_A ; real_T
Differentiator_C ; real_T Differentiator_D ; real_T Saturation1_UpperSat ;
real_T Saturation1_LowerSat ; real_T Gain_Gain ; real_T FromWorkspace_Time0 ;
real_T FromWorkspace_Data0 [ 49 ] ; real_T FromWorkspace1_Time0 ; real_T
FromWorkspace1_Data0 [ 49 ] ; real_T Constant_Value ; real_T Constant1_Value
; real_T Delta_Value ; real_T kappa_Value ; real_T R_switch_Value ; real_T
h_Value ; real_T Constant_Value_pwerxxgmrl ; real_T
Constant1_Value_gv1s2zl30d ; real_T U0_Value ; real_T x0_Value [ 7 ] ; } ;
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern P rtP ; extern mxArray *
mr_demoMarinerPathFollowingCourseControl_GetDWork ( ) ; extern void
mr_demoMarinerPathFollowingCourseControl_SetDWork ( const mxArray * ssDW ) ;
extern mxArray *
mr_demoMarinerPathFollowingCourseControl_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
demoMarinerPathFollowingCourseControl_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
