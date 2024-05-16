#include "demoMarinerPathFollowingCourseControl.h"
#include "rtwtypes.h"
#include "mwmathutil.h"
#include "demoMarinerPathFollowingCourseControl_private.h"
#include "rt_logging_mmi.h"
#include "demoMarinerPathFollowingCourseControl_capi.h"
#include "demoMarinerPathFollowingCourseControl_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , &
stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define lagoav3iwa (-1)
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { boolean_T tmp ; rtDW . h5x2psv2rm =
1 ; if ( ssIsFirstInitCond ( rtS ) ) { rtX . ctzcwqbk5w [ 0 ] = 0.0 ; rtX .
ctzcwqbk5w [ 1 ] = 0.0 ; rtX . ctzcwqbk5w [ 2 ] = 0.0 ; rtX . ctzcwqbk5w [ 3
] = 0.0 ; rtX . ctzcwqbk5w [ 4 ] = 0.0 ; rtX . ctzcwqbk5w [ 5 ] = 0.0 ; rtX .
ctzcwqbk5w [ 6 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp
) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . h5x2psv2rm = !
tmp ; } else { rtDW . h5x2psv2rm = 1 ; } } rtX . nuy31esdl2 = 0.0 ; rtX .
azap50bxgn = 0.0 ; rtX . phk1si4gzc = 0.0 ; rtDW . cqhioppxdz = false ; rtDW
. giwafdbyxc = false ; rtDW . mlz0dzd5h3 = false ; rtDW . fjimdccq4p =
lagoav3iwa ; rtDW . adi32v00qw = false ; rtDW . gkr5vx1zx5 = lagoav3iwa ;
rtDW . ewk1jraa45 = false ; rtDW . e4zkiweeyz = false ; rtDW . bld05pdbf3 =
false ; rtDW . hnoedyuqv3 = false ; rtDW . gayjctc4dn = false ; rtDW .
dkc5vqz4gx = lagoav3iwa ; } void MdlStart ( void ) { int32_T i ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "ypos" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "ypos" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "ypos" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "demoMarinerPathFollowingCourseControl/To Workspace1" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "ypos" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ghkckquryd . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8778cd55-7218-4bff-a3e7-70a34eabb6cb" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ghkckquryd . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ghkckquryd .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ghkckquryd . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ghkckquryd
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ghkckquryd . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
ghkckquryd . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ghkckquryd . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ghkckquryd . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"x" ) ; sdiRegisterWksVariable ( rtDW . ghkckquryd . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "delta_c" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "delta_c" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "delta_c" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "demoMarinerPathFollowingCourseControl/To Workspace10"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "delta_c" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. nyi2nvjifs . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"4ee3ecc8-b82a-4e4a-866a-aa8e0eb07719" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . nyi2nvjifs . AQHandles , hDT , & srcInfo ) ; if ( rtDW . nyi2nvjifs .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . nyi2nvjifs . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . nyi2nvjifs
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . nyi2nvjifs . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
nyi2nvjifs . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
nyi2nvjifs . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . nyi2nvjifs . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"delta_d" ) ; sdiRegisterWksVariable ( rtDW . nyi2nvjifs . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "SOG" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "SOG" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "SOG" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace11" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "SOG" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kbalrgazis . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "68698817-7de5-4d91-ba44-a50a636cebb8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . kbalrgazis . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . kbalrgazis . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . kbalrgazis . AQHandles , "0.1" , 0.1 ,
ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . kbalrgazis . AQHandles ,
0.0 ) ; sdiSetRunStartTime ( rtDW . kbalrgazis . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . kbalrgazis .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . kbalrgazis .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . kbalrgazis . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"U" ) ; sdiRegisterWksVariable ( rtDW . kbalrgazis . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "COG estimate" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "COG estimate" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "COG estimate" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "demoMarinerPathFollowingCourseControl/To Workspace12"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "COG estimate" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. fwltfpz541 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b42c0975-8ec1-4f10-bca1-b8070a34fdd3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . fwltfpz541 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . fwltfpz541 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . fwltfpz541 . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . fwltfpz541
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . fwltfpz541 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
fwltfpz541 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
fwltfpz541 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . fwltfpz541 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"chi_hat" ) ; sdiRegisterWksVariable ( rtDW . fwltfpz541 . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Desired course angle" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "Desired course angle" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Desired course angle" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace13" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Desired course angle" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. bkdowjb332 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7ffba598-4ee1-43c3-a7d8-b26b0a638f0d" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . bkdowjb332 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . bkdowjb332 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . bkdowjb332 . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . bkdowjb332
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . bkdowjb332 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
bkdowjb332 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
bkdowjb332 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . bkdowjb332 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"chi_d" ) ; sdiRegisterWksVariable ( rtDW . bkdowjb332 . AQHandles , varName
, "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Desired course rate" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "Desired course rate" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Desired course rate" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace14" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Desired course rate" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. oi100ramc1 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"88a41cda-85da-4d3f-a4b9-37317cbff397" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . oi100ramc1 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . oi100ramc1 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . oi100ramc1 . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . oi100ramc1
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . oi100ramc1 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
oi100ramc1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
oi100ramc1 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . oi100ramc1 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"omega_chi_d" ) ; sdiRegisterWksVariable ( rtDW . oi100ramc1 . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "delta" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "delta" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "delta" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "demoMarinerPathFollowingCourseControl/To Workspace15" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "delta" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ntyl23hlog . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8a3f02a3-7125-42df-a53f-a55080a215f6" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ntyl23hlog . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ntyl23hlog .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ntyl23hlog . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ntyl23hlog
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ntyl23hlog . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
ntyl23hlog . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ntyl23hlog . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ntyl23hlog . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"delta" ) ; sdiRegisterWksVariable ( rtDW . ntyl23hlog . AQHandles , varName
, "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "xpos" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "xpos" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "xpos" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "demoMarinerPathFollowingCourseControl/To Workspace2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "xpos" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. np4zebvttt . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"96795b4e-a422-4659-b6dc-0c0747bead32" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . np4zebvttt . AQHandles , hDT , & srcInfo ) ; if ( rtDW . np4zebvttt .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . np4zebvttt . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . np4zebvttt
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . np4zebvttt . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
np4zebvttt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
np4zebvttt . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . np4zebvttt . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"y" ) ; sdiRegisterWksVariable ( rtDW . np4zebvttt . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "COG" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "COG" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "COG" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace3" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "COG" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . m33o44zqms . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cfe5101b-71f3-49b2-bdb3-85d558cf9e6d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . m33o44zqms . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . m33o44zqms . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . m33o44zqms . AQHandles , "0.1" , 0.1 ,
ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . m33o44zqms . AQHandles ,
0.0 ) ; sdiSetRunStartTime ( rtDW . m33o44zqms . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . m33o44zqms .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . m33o44zqms .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . m33o44zqms . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"chi" ) ; sdiRegisterWksVariable ( rtDW . m33o44zqms . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Omega_chi estimate" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "Omega_chi estimate" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Omega_chi estimate" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace4" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Omega_chi estimate" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. eyihkpy5jo . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"339dbb4f-0189-4d4d-9574-db77d91af8b5" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . eyihkpy5jo . AQHandles , hDT , & srcInfo ) ; if ( rtDW . eyihkpy5jo .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . eyihkpy5jo . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . eyihkpy5jo
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . eyihkpy5jo . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
eyihkpy5jo . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
eyihkpy5jo . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . eyihkpy5jo . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"omega_chi" ) ; sdiRegisterWksVariable ( rtDW . eyihkpy5jo . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "u" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "u" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"u" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace5" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "u" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . mbenr5dnw0 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "a6e8ed7d-bf1e-492b-a06f-ab207416aee3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . mbenr5dnw0 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . mbenr5dnw0 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . mbenr5dnw0 . AQHandles , "0.1" , 0.1 ,
ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . mbenr5dnw0 . AQHandles ,
0.0 ) ; sdiSetRunStartTime ( rtDW . mbenr5dnw0 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . mbenr5dnw0 .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . mbenr5dnw0 .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . mbenr5dnw0 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"u" ) ; sdiRegisterWksVariable ( rtDW . mbenr5dnw0 . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "v" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "v" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"v" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace6" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "v" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . bqrvh1egsn . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "00ff9980-a3cd-4722-8930-07736598fd89" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . bqrvh1egsn . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . bqrvh1egsn . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . bqrvh1egsn . AQHandles , "0.1" , 0.1 ,
ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . bqrvh1egsn . AQHandles ,
0.0 ) ; sdiSetRunStartTime ( rtDW . bqrvh1egsn . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . bqrvh1egsn .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . bqrvh1egsn .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . bqrvh1egsn . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"v" ) ; sdiRegisterWksVariable ( rtDW . bqrvh1egsn . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "r" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "r" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"r" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace7" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "r" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . h2ncbkx1nd . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "dc5bc864-84d6-454c-9f9f-090accbaa447" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . h2ncbkx1nd . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . h2ncbkx1nd . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . h2ncbkx1nd . AQHandles , "0.1" , 0.1 ,
ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . h2ncbkx1nd . AQHandles ,
0.0 ) ; sdiSetRunStartTime ( rtDW . h2ncbkx1nd . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . h2ncbkx1nd .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . h2ncbkx1nd .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . h2ncbkx1nd . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"r" ) ; sdiRegisterWksVariable ( rtDW . h2ncbkx1nd . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "psi" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "psi" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "psi" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"demoMarinerPathFollowingCourseControl/To Workspace8" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "psi" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . i2q4rrymn5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d3df5eb6-cfd3-4bb0-8cf1-60d7d268b17b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . i2q4rrymn5 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . i2q4rrymn5 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . i2q4rrymn5 . AQHandles , "0.1" , 0.1 ,
ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . i2q4rrymn5 . AQHandles ,
0.0 ) ; sdiSetRunStartTime ( rtDW . i2q4rrymn5 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . i2q4rrymn5 .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . i2q4rrymn5 .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . i2q4rrymn5 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"psi" ) ; sdiRegisterWksVariable ( rtDW . i2q4rrymn5 . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "beta_c" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "beta_c" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "beta_c" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "demoMarinerPathFollowingCourseControl/To Workspace9"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "beta_c" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kpgpl1x3nf . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"fa33e756-16df-4f2d-894e-e9cb9161fafa" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . kpgpl1x3nf . AQHandles , hDT , & srcInfo ) ; if ( rtDW . kpgpl1x3nf .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . kpgpl1x3nf . AQHandles ,
"0.1" , 0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . kpgpl1x3nf
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . kpgpl1x3nf . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
kpgpl1x3nf . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
kpgpl1x3nf . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . kpgpl1x3nf . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"beta_c" ) ; sdiRegisterWksVariable ( rtDW . kpgpl1x3nf . AQHandles , varName
, "array" ) ; sdiFreeLabel ( varName ) ; } } } } } for ( i = 0 ; i < 7 ; i ++
) { rtB . fjukfd0ml0 [ i ] = rtP . x0_Value [ i ] ; } { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "x_data" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 116 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints =
1 ; fromwksInfo -> time = ( double * ) & rtP . FromWorkspace_Time0 ; rtDW .
mj5bh5o2fl . TimePtr = fromwksInfo -> time ; rtDW . mj5bh5o2fl . DataPtr =
fromwksInfo -> data ; rtDW . mj5bh5o2fl . RSimInfoPtr = fromwksInfo ; } rtDW
. adphgackqq . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "y_data" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 116 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints
= 1 ; fromwksInfo -> time = ( double * ) & rtP . FromWorkspace1_Time0 ; rtDW
. kj33gbqgqh . TimePtr = fromwksInfo -> time ; rtDW . kj33gbqgqh . DataPtr =
fromwksInfo -> data ; rtDW . kj33gbqgqh . RSimInfoPtr = fromwksInfo ; } rtDW
. npo3ez1xrm . PrevIndex = 0 ; } MdlInitialize ( ) ; } void MdlOutputs (
int_T tid ) { real_T Ad [ 25 ] ; real_T IKC [ 25 ] ; real_T IKC_e [ 25 ] ;
real_T IKC_p [ 25 ] ; real_T K_p [ 25 ] ; real_T B_p [ 10 ] ; real_T Ed [ 10
] ; real_T K [ 10 ] ; real_T tmp_e [ 5 ] ; real_T tmp_g [ 5 ] ; real_T tmp_i
[ 5 ] ; real_T tmp_m [ 5 ] ; real_T A [ 4 ] ; real_T tmp [ 2 ] ; real_T tmp_p
[ 2 ] ; real_T N ; real_T Y ; real_T a21 ; real_T a22 ; real_T delta_c ;
real_T jxvtyyx4mw ; real_T r ; real_T v ; int32_T b_k ; int32_T i ; int32_T
r2 ; int8_T b_I [ 25 ] ; static const int8_T b [ 10 ] = { 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 } ; static const int8_T c [ 10 ] = { 1 , 0 , 0 , 0 , 0 , 0
, 1 , 0 , 0 , 0 } ; static const int8_T c_b [ 10 ] = { 1 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 0 , 0 } ; static const int8_T d [ 5 ] = { 0 , 0 , 0 , 0 , 1 } ; if
( ssIsModeUpdateTimeStep ( rtS ) ) { for ( i = 0 ; i < 7 ; i ++ ) { if ( rtDW
. h5x2psv2rm != 0 ) { rtX . ctzcwqbk5w [ i ] = rtB . fjukfd0ml0 [ i ] ; } rtB
. d25mgzrntl [ i ] = rtX . ctzcwqbk5w [ i ] ; } } else { for ( i = 0 ; i < 7
; i ++ ) { rtB . d25mgzrntl [ i ] = rtX . ctzcwqbk5w [ i ] ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . ghkckquryd . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ghkckquryd . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d25mgzrntl [ 4 ] + 0 ) ; } }
rtDW . fjimdccq4p = lagoav3iwa ; if ( ! rtDW . cqhioppxdz ) { rtDW .
ca1apjcb5w [ 0 ] = rtB . d25mgzrntl [ 3 ] ; rtDW . ca1apjcb5w [ 1 ] = rtB .
d25mgzrntl [ 4 ] ; rtDW . ca1apjcb5w [ 2 ] = 0.0 ; rtDW . ca1apjcb5w [ 3 ] =
0.0 ; rtDW . ca1apjcb5w [ 4 ] = 0.0 ; rtDW . cqhioppxdz = true ; for ( i = 0
; i < 25 ; i ++ ) { rtDW . p1y01yg0xm [ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i
++ ) { rtDW . p1y01yg0xm [ i + 5 * i ] = 1.0 ; } rtDW . giwafdbyxc = true ; }
for ( r2 = 0 ; r2 < 10 ; r2 ++ ) { Ed [ r2 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * ( real_T ) b [ r2 ] ; } for ( r2 = 0 ;
r2 < 2 ; r2 ++ ) { for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { a21 = 0.0 ; a22 = 0.0
; for ( i = 0 ; i < 5 ; i ++ ) { a21 += rtDW . p1y01yg0xm [ 5 * i + b_k ] * (
real_T ) c [ 5 * r2 + i ] ; a22 += ( real_T ) c_b [ ( i << 1 ) + r2 ] * rtDW
. p1y01yg0xm [ 5 * b_k + i ] ; } B_p [ b_k + 5 * r2 ] = a21 ; K [ r2 + ( b_k
<< 1 ) ] = a22 ; } for ( b_k = 0 ; b_k < 2 ; b_k ++ ) { a21 = 0.0 ; for ( i =
0 ; i < 5 ; i ++ ) { a21 += K [ ( i << 1 ) + r2 ] * ( real_T ) c [ 5 * b_k +
i ] ; } A [ r2 + ( b_k << 1 ) ] = rtP . DiscertetimeEKFforSOGandCOG_Rd [ (
b_k << 1 ) + r2 ] + a21 ; } } if ( muDoubleScalarAbs ( A [ 1 ] ) >
muDoubleScalarAbs ( A [ 0 ] ) ) { i = 1 ; r2 = 0 ; } else { i = 0 ; r2 = 1 ;
} a21 = A [ r2 ] / A [ i ] ; a22 = A [ r2 + 2 ] - A [ i + 2 ] * a21 ; for (
b_k = 0 ; b_k < 5 ; b_k ++ ) { K [ b_k + 5 * i ] = B_p [ b_k ] / A [ i ] ; K
[ b_k + 5 * r2 ] = ( B_p [ b_k + 5 ] - K [ 5 * i + b_k ] * A [ i + 2 ] ) /
a22 ; K [ b_k + 5 * i ] -= K [ 5 * r2 + b_k ] * a21 ; } for ( r2 = 0 ; r2 <
25 ; r2 ++ ) { b_I [ r2 ] = 0 ; } for ( i = 0 ; i < 5 ; i ++ ) { b_I [ i + 5
* i ] = 1 ; } for ( r2 = 0 ; r2 < 5 ; r2 ++ ) { a21 = K [ r2 + 5 ] ; a22 = K
[ r2 ] ; for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { IKC [ r2 + 5 * b_k ] = ( real_T
) b_I [ 5 * b_k + r2 ] - ( ( real_T ) c_b [ ( b_k << 1 ) + 1 ] * a21 + (
real_T ) c_b [ b_k << 1 ] * a22 ) ; } } tmp [ 0 ] = rtB . d25mgzrntl [ 3 ] ;
tmp [ 1 ] = rtB . d25mgzrntl [ 4 ] ; for ( r2 = 0 ; r2 < 2 ; r2 ++ ) { a22 =
0.0 ; for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { a22 += ( real_T ) c_b [ ( b_k << 1
) + r2 ] * rtDW . ca1apjcb5w [ b_k ] ; } tmp_p [ r2 ] = tmp [ r2 ] - a22 ; }
a21 = tmp_p [ 1 ] ; a22 = tmp_p [ 0 ] ; for ( r2 = 0 ; r2 < 5 ; r2 ++ ) { rtB
. a2jle11lq2 [ r2 ] = ( K [ r2 + 5 ] * a21 + K [ r2 ] * a22 ) + rtDW .
ca1apjcb5w [ r2 ] ; } for ( r2 = 0 ; r2 < 25 ; r2 ++ ) { b_I [ r2 ] = 0 ; }
tmp_e [ 0 ] = rtP . DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_e [ 1 ] =
rtP . DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_e [ 2 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * muDoubleScalarCos ( rtB . a2jle11lq2 [ 3
] ) ; tmp_e [ 3 ] = - rtB . a2jle11lq2 [ 2 ] * muDoubleScalarSin ( rtB .
a2jle11lq2 [ 3 ] ) * rtP . DiscertetimeEKFforSOGandCOG_h_samp ; tmp_e [ 4 ] =
rtP . DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_i [ 0 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_i [ 1 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_i [ 2 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * muDoubleScalarSin ( rtB . a2jle11lq2 [ 3
] ) ; tmp_i [ 3 ] = rtB . a2jle11lq2 [ 2 ] * muDoubleScalarCos ( rtB .
a2jle11lq2 [ 3 ] ) * rtP . DiscertetimeEKFforSOGandCOG_h_samp ; tmp_i [ 4 ] =
rtP . DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_m [ 0 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_m [ 1 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_m [ 2 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * - rtP .
DiscertetimeEKFforSOGandCOG_alpha_1 ; tmp_m [ 3 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_m [ 4 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_g [ 0 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_g [ 1 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_g [ 2 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_g [ 3 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * 0.0 ; tmp_g [ 4 ] = rtP .
DiscertetimeEKFforSOGandCOG_h_samp * - rtP .
DiscertetimeEKFforSOGandCOG_alpha_2 ; rtDW . ca1apjcb5w [ 0 ] = rtB .
a2jle11lq2 [ 2 ] * muDoubleScalarCos ( rtB . a2jle11lq2 [ 3 ] ) * rtP .
DiscertetimeEKFforSOGandCOG_h_samp + rtB . a2jle11lq2 [ 0 ] ; rtDW .
ca1apjcb5w [ 1 ] = rtB . a2jle11lq2 [ 2 ] * muDoubleScalarSin ( rtB .
a2jle11lq2 [ 3 ] ) * rtP . DiscertetimeEKFforSOGandCOG_h_samp + rtB .
a2jle11lq2 [ 1 ] ; rtDW . ca1apjcb5w [ 2 ] = - rtP .
DiscertetimeEKFforSOGandCOG_alpha_1 * rtB . a2jle11lq2 [ 2 ] * rtP .
DiscertetimeEKFforSOGandCOG_h_samp + rtB . a2jle11lq2 [ 2 ] ; rtDW .
ca1apjcb5w [ 3 ] = rtP . DiscertetimeEKFforSOGandCOG_h_samp * rtB .
a2jle11lq2 [ 4 ] + rtB . a2jle11lq2 [ 3 ] ; rtDW . ca1apjcb5w [ 4 ] = - rtP .
DiscertetimeEKFforSOGandCOG_alpha_2 * rtB . a2jle11lq2 [ 4 ] * rtP .
DiscertetimeEKFforSOGandCOG_h_samp + rtB . a2jle11lq2 [ 4 ] ; for ( i = 0 ; i
< 5 ; i ++ ) { b_I [ i + 5 * i ] = 1 ; Ad [ 5 * i ] = ( real_T ) b_I [ 5 * i
] + tmp_e [ i ] ; Ad [ 5 * i + 1 ] = ( real_T ) b_I [ 5 * i + 1 ] + tmp_i [ i
] ; Ad [ 5 * i + 2 ] = ( real_T ) b_I [ 5 * i + 2 ] + tmp_m [ i ] ; Ad [ 5 *
i + 3 ] = ( real_T ) b_I [ 5 * i + 3 ] + rtP .
DiscertetimeEKFforSOGandCOG_h_samp * ( real_T ) d [ i ] ; Ad [ 5 * i + 4 ] =
( real_T ) b_I [ 5 * i + 4 ] + tmp_g [ i ] ; for ( r2 = 0 ; r2 < 5 ; r2 ++ )
{ a21 = 0.0 ; for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { a21 += IKC [ 5 * b_k + i ]
* rtDW . p1y01yg0xm [ 5 * r2 + b_k ] ; } IKC_p [ i + 5 * r2 ] = a21 ; } a21 =
K [ i + 5 ] ; a22 = K [ i ] ; B_p [ i ] = a21 * rtP .
DiscertetimeEKFforSOGandCOG_Rd [ 1 ] + a22 * rtP .
DiscertetimeEKFforSOGandCOG_Rd [ 0 ] ; B_p [ i + 5 ] = a21 * rtP .
DiscertetimeEKFforSOGandCOG_Rd [ 3 ] + a22 * rtP .
DiscertetimeEKFforSOGandCOG_Rd [ 2 ] ; for ( r2 = 0 ; r2 < 5 ; r2 ++ ) { a21
= 0.0 ; for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { a21 += IKC_p [ 5 * b_k + i ] *
IKC [ 5 * b_k + r2 ] ; } IKC_e [ i + 5 * r2 ] = a21 ; K_p [ i + 5 * r2 ] =
B_p [ i + 5 ] * K [ r2 + 5 ] + B_p [ i ] * K [ r2 ] ; } } for ( r2 = 0 ; r2 <
25 ; r2 ++ ) { IKC [ r2 ] = IKC_e [ r2 ] + K_p [ r2 ] ; } for ( r2 = 0 ; r2 <
5 ; r2 ++ ) { for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { a21 = 0.0 ; for ( i = 0 ;
i < 5 ; i ++ ) { a21 += Ad [ 5 * i + r2 ] * IKC [ 5 * b_k + i ] ; } IKC_e [
r2 + 5 * b_k ] = a21 ; } a21 = Ed [ r2 + 5 ] ; a22 = Ed [ r2 ] ; B_p [ r2 ] =
a21 * rtP . DiscertetimeEKFforSOGandCOG_Qd [ 1 ] + a22 * rtP .
DiscertetimeEKFforSOGandCOG_Qd [ 0 ] ; B_p [ r2 + 5 ] = a21 * rtP .
DiscertetimeEKFforSOGandCOG_Qd [ 3 ] + a22 * rtP .
DiscertetimeEKFforSOGandCOG_Qd [ 2 ] ; for ( b_k = 0 ; b_k < 5 ; b_k ++ ) {
a21 = 0.0 ; for ( i = 0 ; i < 5 ; i ++ ) { a21 += IKC_e [ 5 * i + r2 ] * Ad [
5 * i + b_k ] ; } IKC_p [ r2 + 5 * b_k ] = a21 ; } } for ( r2 = 0 ; r2 < 5 ;
r2 ++ ) { a21 = B_p [ r2 + 5 ] ; a22 = B_p [ r2 ] ; for ( b_k = 0 ; b_k < 5 ;
b_k ++ ) { IKC [ r2 + 5 * b_k ] = Ed [ b_k + 5 ] * a21 + a22 * Ed [ b_k ] ; }
} for ( r2 = 0 ; r2 < 25 ; r2 ++ ) { rtDW . p1y01yg0xm [ r2 ] = IKC_p [ r2 ]
+ IKC [ r2 ] ; } } rtB . biizpmf3bn = 0.0 ; rtB . biizpmf3bn += rtP . _C *
rtX . nuy31esdl2 ; a21 = ( muDoubleScalarMod ( ( rtB . biizpmf3bn - rtB .
a2jle11lq2 [ 3 ] ) + rtP . Constant1_Value , rtP . Constant_Value ) - rtP .
Constant1_Value ) * rtP . Courseautopilot_Kp ; rtB . n5pvzdd33j = 0.0 ; rtB .
n5pvzdd33j += rtP . Differentiator_C * rtX . phk1si4gzc ; rtB . n5pvzdd33j +=
rtP . Differentiator_D * rtB . biizpmf3bn ; a22 = ( ( rtP . Integral_C * rtX
. azap50bxgn + a21 ) + rtP . Courseautopilot_Kp * rtP . Courseautopilot_Td *
( rtB . n5pvzdd33j - rtB . a2jle11lq2 [ 4 ] ) ) + 1.0 / rtP .
Courseautopilot_K_nomoto * rtB . n5pvzdd33j ; if ( a22 > rtP .
Saturation1_UpperSat ) { rtB . h2tvvxrgwg = rtP . Saturation1_UpperSat ; }
else if ( a22 < rtP . Saturation1_LowerSat ) { rtB . h2tvvxrgwg = rtP .
Saturation1_LowerSat ; } else { rtB . h2tvvxrgwg = a22 ; } if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { { if ( rtDW . nyi2nvjifs . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( rtDW . nyi2nvjifs . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . h2tvvxrgwg + 0 ) ; } } } rtDW . gkr5vx1zx5 =
lagoav3iwa ; jxvtyyx4mw = rtP . U0_Value + rtB . d25mgzrntl [ 0 ] ;
jxvtyyx4mw = muDoubleScalarSqrt ( jxvtyyx4mw * jxvtyyx4mw + rtB . d25mgzrntl
[ 1 ] * rtB . d25mgzrntl [ 1 ] ) ; delta_c = - rtB . h2tvvxrgwg ; a22 = rtB .
d25mgzrntl [ 0 ] / jxvtyyx4mw ; v = rtB . d25mgzrntl [ 1 ] / jxvtyyx4mw ; r =
rtB . d25mgzrntl [ 2 ] * 160.93 / jxvtyyx4mw ; if ( muDoubleScalarAbs ( - rtB
. h2tvvxrgwg ) >= 0.69813170079773179 ) { delta_c = muDoubleScalarSign ( -
rtB . h2tvvxrgwg ) * 40.0 * 3.1415926535897931 / 180.0 ; } delta_c -= rtB .
d25mgzrntl [ 6 ] ; if ( muDoubleScalarAbs ( delta_c ) >= 0.087266462599716474
) { delta_c = muDoubleScalarSign ( delta_c ) * 5.0 * 3.1415926535897931 /
180.0 ; } Y = ( ( ( ( ( ( ( ( ( ( ( - 0.0116 * v + - 0.00499 * r ) + -
0.08078 * muDoubleScalarPower ( v , 3.0 ) ) + v * v * 0.15356 * r ) + -
0.0116 * v * a22 ) + - 0.00499 * r * a22 ) + 0.00278 * rtB . d25mgzrntl [ 6 ]
) + - 0.0009 * muDoubleScalarPower ( rtB . d25mgzrntl [ 6 ] , 3.0 ) ) +
0.00556 * a22 * rtB . d25mgzrntl [ 6 ] ) + a22 * a22 * 0.00278 * rtB .
d25mgzrntl [ 6 ] ) + - 4.0E-5 * v * ( rtB . d25mgzrntl [ 6 ] * rtB .
d25mgzrntl [ 6 ] ) ) + v * v * 0.0119 * rtB . d25mgzrntl [ 6 ] ) + ( ( -
8.0E-5 * a22 - 4.0E-5 ) + a22 * a22 * - 4.0E-5 ) ; N = ( ( ( ( ( ( ( ( ( ( (
- 0.00264 * v + - 0.00166 * r ) + 0.01636 * muDoubleScalarPower ( v , 3.0 ) )
+ v * v * - 0.05483 * r ) + - 0.00264 * v * a22 ) + - 0.00166 * r * a22 ) + -
0.00139 * rtB . d25mgzrntl [ 6 ] ) + 0.00045 * muDoubleScalarPower ( rtB .
d25mgzrntl [ 6 ] , 3.0 ) ) + - 0.00278 * a22 * rtB . d25mgzrntl [ 6 ] ) + a22
* a22 * - 0.00139 * rtB . d25mgzrntl [ 6 ] ) + 0.00013 * v * ( rtB .
d25mgzrntl [ 6 ] * rtB . d25mgzrntl [ 6 ] ) ) + v * v * - 0.00489 * rtB .
d25mgzrntl [ 6 ] ) + ( ( 6.0E-5 * a22 + 3.0E-5 ) + a22 * a22 * 3.0E-5 ) ; rtB
. otagkty1sc [ 0 ] = ( ( ( ( ( ( ( ( ( a22 * a22 * - 0.0011 + - 0.00184 * a22
) + - 0.00215 * muDoubleScalarPower ( a22 , 3.0 ) ) + v * v * - 0.00899 ) + r
* r * 0.00018 ) + 0.00798 * r * v ) + rtB . d25mgzrntl [ 6 ] * rtB .
d25mgzrntl [ 6 ] * - 0.00095 ) + - 0.0019 * a22 * ( rtB . d25mgzrntl [ 6 ] *
rtB . d25mgzrntl [ 6 ] ) ) + 0.00093 * v * rtB . d25mgzrntl [ 6 ] ) + 0.00093
* a22 * v * rtB . d25mgzrntl [ 6 ] ) * ( jxvtyyx4mw * jxvtyyx4mw / 160.93 ) /
0.0084 ; rtB . otagkty1sc [ 1 ] = - ( - 0.00083 * Y + - 8.9999999999999965E-5
* N ) * ( jxvtyyx4mw * jxvtyyx4mw / 160.93 ) / 1.2811099999999998E-5 ; rtB .
otagkty1sc [ 2 ] = ( 0.00022999999999999995 * Y + 0.015459999999999998 * N )
* ( jxvtyyx4mw * jxvtyyx4mw / 25898.464900000003 ) / 1.2811099999999998E-5 ;
rtB . otagkty1sc [ 3 ] = ( ( rtP . U0_Value / jxvtyyx4mw + a22 ) *
muDoubleScalarCos ( rtB . d25mgzrntl [ 5 ] ) - muDoubleScalarSin ( rtB .
d25mgzrntl [ 5 ] ) * v ) * jxvtyyx4mw ; rtB . otagkty1sc [ 4 ] = ( ( rtP .
U0_Value / jxvtyyx4mw + a22 ) * muDoubleScalarSin ( rtB . d25mgzrntl [ 5 ] )
+ muDoubleScalarCos ( rtB . d25mgzrntl [ 5 ] ) * v ) * jxvtyyx4mw ; rtB .
otagkty1sc [ 5 ] = jxvtyyx4mw / 160.93 * r ; rtB . otagkty1sc [ 6 ] = delta_c
; rtB . ocn4o1graj = jxvtyyx4mw ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( rtDW . kbalrgazis . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal
( rtDW . kbalrgazis . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) &
rtB . ocn4o1graj + 0 ) ; } } { if ( rtDW . fwltfpz541 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . fwltfpz541 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . a2jle11lq2 [ 3 ] + 0 ) ; } } {
if ( rtDW . bkdowjb332 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . bkdowjb332 . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . biizpmf3bn + 0 ) ; } } { if ( rtDW . oi100ramc1 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . oi100ramc1 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . n5pvzdd33j + 0 ) ;
} } } rtB . an2daryais = rtP . Gain_Gain * rtB . d25mgzrntl [ 6 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . ntyl23hlog . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ntyl23hlog . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . an2daryais + 0 ) ; } } { if (
rtDW . np4zebvttt . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . np4zebvttt . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. d25mgzrntl [ 3 ] + 0 ) ; } } } rtB . ngqggygexp = muDoubleScalarAtan2 ( rtB
. d25mgzrntl [ 1 ] , rtP . U0_Value + rtB . d25mgzrntl [ 0 ] ) ; rtB .
o4uvmnpinp = rtB . ngqggygexp + rtB . d25mgzrntl [ 5 ] ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { { if ( rtDW . m33o44zqms . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( rtDW . m33o44zqms . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . o4uvmnpinp + 0 ) ; } } { if ( rtDW .
eyihkpy5jo . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
eyihkpy5jo . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
a2jle11lq2 [ 4 ] + 0 ) ; } } { if ( rtDW . mbenr5dnw0 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . mbenr5dnw0 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d25mgzrntl [ 0 ] + 0 ) ; } } {
if ( rtDW . bqrvh1egsn . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . bqrvh1egsn . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . d25mgzrntl [ 1 ] + 0 ) ; } } { if ( rtDW . h2ncbkx1nd .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . h2ncbkx1nd .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . d25mgzrntl [ 2 ] +
0 ) ; } } { if ( rtDW . i2q4rrymn5 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . i2q4rrymn5 . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . d25mgzrntl [ 5 ] + 0 ) ; } } { if ( rtDW . kpgpl1x3nf .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . kpgpl1x3nf .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . ngqggygexp + 0 ) ;
} } } rtB . gvtucr52ij = 1.0 / rtP . Courseautopilot_Ti * a21 ; { real_T *
pDataValues = ( real_T * ) rtDW . mj5bh5o2fl . DataPtr ; { int_T elIdx ; for
( elIdx = 0 ; elIdx < 116 ; ++ elIdx ) { ( & rtB . lk0bm5xw5m [ 0 ] ) [ elIdx
] = pDataValues [ 0 ] ; pDataValues += 1 ; } } } { real_T * pDataValues = (
real_T * ) rtDW . kj33gbqgqh . DataPtr ; { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 116 ; ++ elIdx ) { ( & rtB . hleb2ewssu [ 0 ] ) [ elIdx ] =
pDataValues [ 0 ] ; pDataValues += 1 ; } } } if ( ssIsSampleHit ( rtS , 1 , 0
) ) { rtDW . dkc5vqz4gx = lagoav3iwa ; if ( ! rtDW . ewk1jraa45 ) { rtDW .
as1a1r4g2f = 0.0 ; rtDW . hnoedyuqv3 = true ; rtDW . gyil3sx4on = 1.0 ; rtDW
. ewk1jraa45 = true ; rtDW . cxlq0pdam2 = rtB . hleb2ewssu [ 0 ] ; rtDW .
e4zkiweeyz = true ; rtDW . lo4zpeksxn = rtB . lk0bm5xw5m [ 0 ] ; rtDW .
bld05pdbf3 = true ; printf ( "Active waypoints:\n" ) ; fflush ( stdout ) ;
printf ( "  (x%1.0f, y%1.0f) = (%.2f, %.2f) \n" , 1.0 , 1.0 , rtDW .
cxlq0pdam2 , rtDW . lo4zpeksxn ) ; fflush ( stdout ) ; } if ( rtDW .
gyil3sx4on < 116.0 ) { a21 = rtB . hleb2ewssu [ ( int32_T ) ( rtDW .
gyil3sx4on + 1.0 ) - 1 ] ; v = rtB . lk0bm5xw5m [ ( int32_T ) ( rtDW .
gyil3sx4on + 1.0 ) - 1 ] ; } else { jxvtyyx4mw = muDoubleScalarAtan2 ( rtB .
lk0bm5xw5m [ 115 ] - rtB . lk0bm5xw5m [ 114 ] , rtB . hleb2ewssu [ 115 ] -
rtB . hleb2ewssu [ 114 ] ) ; a21 = 1.0E+10 * muDoubleScalarCos ( jxvtyyx4mw )
+ rtB . hleb2ewssu [ 115 ] ; v = 1.0E+10 * muDoubleScalarSin ( jxvtyyx4mw ) +
rtB . lk0bm5xw5m [ 115 ] ; } r = muDoubleScalarAtan2 ( v - rtDW . lo4zpeksxn
, a21 - rtDW . cxlq0pdam2 ) ; a22 = - ( rtB . d25mgzrntl [ 3 ] - rtDW .
cxlq0pdam2 ) * muDoubleScalarSin ( r ) + ( rtB . d25mgzrntl [ 4 ] - rtDW .
lo4zpeksxn ) * muDoubleScalarCos ( r ) ; jxvtyyx4mw = a21 - rtDW . cxlq0pdam2
; delta_c = v - rtDW . lo4zpeksxn ; if ( ( muDoubleScalarSqrt ( jxvtyyx4mw *
jxvtyyx4mw + delta_c * delta_c ) - ( ( rtB . d25mgzrntl [ 3 ] - rtDW .
cxlq0pdam2 ) * muDoubleScalarCos ( r ) + ( rtB . d25mgzrntl [ 4 ] - rtDW .
lo4zpeksxn ) * muDoubleScalarSin ( r ) ) < rtP . R_switch_Value ) && ( rtDW .
gyil3sx4on < 116.0 ) ) { rtDW . gyil3sx4on ++ ; rtDW . cxlq0pdam2 = a21 ;
rtDW . lo4zpeksxn = v ; printf ( "  (x%1.0f, y%1.0f) = (%.2f, %.2f) \n" ,
rtDW . gyil3sx4on , rtDW . gyil3sx4on , rtDW . cxlq0pdam2 , rtDW . lo4zpeksxn
) ; fflush ( stdout ) ; } rtB . irc5tjl1ah = r - muDoubleScalarAtan ( ( rtP .
kappa_Value * rtDW . as1a1r4g2f + a22 ) * ( 1.0 / rtP . Delta_Value ) ) ; a21
= rtP . kappa_Value * rtDW . as1a1r4g2f + a22 ; rtDW . as1a1r4g2f += rtP .
h_Value * rtP . Delta_Value * a22 / ( rtP . Delta_Value * rtP . Delta_Value +
a21 * a21 ) ; } rtB . ncqyk10zdm = ( muDoubleScalarMod ( ( rtB . irc5tjl1ah -
rtB . biizpmf3bn ) + rtP . Constant1_Value_gv1s2zl30d , rtP .
Constant_Value_pwerxxgmrl ) - rtP . Constant1_Value_gv1s2zl30d ) * rtP .
LOSobserver_K_f + rtB . n5pvzdd33j ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID2 ( int_T tid ) { int32_T i ; for ( i = 0 ; i < 7 ; i ++ ) { rtB
. fjukfd0ml0 [ i ] = rtP . x0_Value [ i ] ; } UNUSED_PARAMETER ( tid ) ; }
void MdlUpdate ( int_T tid ) { rtDW . h5x2psv2rm = 0 ; UNUSED_PARAMETER ( tid
) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; int32_T i ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; for ( i = 0 ; i < 7 ; i ++ ) { _rtXdot -> ctzcwqbk5w [ i
] = rtB . otagkty1sc [ i ] ; } _rtXdot -> nuy31esdl2 = rtP . _A * rtX .
nuy31esdl2 ; _rtXdot -> nuy31esdl2 += rtB . ncqyk10zdm ; _rtXdot ->
azap50bxgn = rtP . Integral_A * rtX . azap50bxgn ; _rtXdot -> azap50bxgn +=
rtB . gvtucr52ij ; _rtXdot -> phk1si4gzc = rtP . Differentiator_A * rtX .
phk1si4gzc ; _rtXdot -> phk1si4gzc += rtB . biizpmf3bn ; } void MdlProjection
( void ) { } void MdlTerminate ( void ) { rt_FREE ( rtDW . mj5bh5o2fl .
RSimInfoPtr ) ; rt_FREE ( rtDW . kj33gbqgqh . RSimInfoPtr ) ; { if ( rtDW .
ghkckquryd . AQHandles ) { sdiTerminateStreaming ( & rtDW . ghkckquryd .
AQHandles ) ; } } { if ( rtDW . nyi2nvjifs . AQHandles ) {
sdiTerminateStreaming ( & rtDW . nyi2nvjifs . AQHandles ) ; } } { if ( rtDW .
kbalrgazis . AQHandles ) { sdiTerminateStreaming ( & rtDW . kbalrgazis .
AQHandles ) ; } } { if ( rtDW . fwltfpz541 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . fwltfpz541 . AQHandles ) ; } } { if ( rtDW .
bkdowjb332 . AQHandles ) { sdiTerminateStreaming ( & rtDW . bkdowjb332 .
AQHandles ) ; } } { if ( rtDW . oi100ramc1 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . oi100ramc1 . AQHandles ) ; } } { if ( rtDW .
ntyl23hlog . AQHandles ) { sdiTerminateStreaming ( & rtDW . ntyl23hlog .
AQHandles ) ; } } { if ( rtDW . np4zebvttt . AQHandles ) {
sdiTerminateStreaming ( & rtDW . np4zebvttt . AQHandles ) ; } } { if ( rtDW .
m33o44zqms . AQHandles ) { sdiTerminateStreaming ( & rtDW . m33o44zqms .
AQHandles ) ; } } { if ( rtDW . eyihkpy5jo . AQHandles ) {
sdiTerminateStreaming ( & rtDW . eyihkpy5jo . AQHandles ) ; } } { if ( rtDW .
mbenr5dnw0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . mbenr5dnw0 .
AQHandles ) ; } } { if ( rtDW . bqrvh1egsn . AQHandles ) {
sdiTerminateStreaming ( & rtDW . bqrvh1egsn . AQHandles ) ; } } { if ( rtDW .
h2ncbkx1nd . AQHandles ) { sdiTerminateStreaming ( & rtDW . h2ncbkx1nd .
AQHandles ) ; } } { if ( rtDW . i2q4rrymn5 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . i2q4rrymn5 . AQHandles ) ; } } { if ( rtDW .
kpgpl1x3nf . AQHandles ) { sdiTerminateStreaming ( & rtDW . kpgpl1x3nf .
AQHandles ) ; } } } static void
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData
( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_demoMarinerPathFollowingCourseControl_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_demoMarinerPathFollowingCourseControl_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static
uint_T mr_demoMarinerPathFollowingCourseControl_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_demoMarinerPathFollowingCourseControl_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_demoMarinerPathFollowingCourseControl_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) ; static void
mr_demoMarinerPathFollowingCourseControl_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) ; static void
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void
mr_demoMarinerPathFollowingCourseControl_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_demoMarinerPathFollowingCourseControl_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_demoMarinerPathFollowingCourseControl_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_demoMarinerPathFollowingCourseControl_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray *
mr_demoMarinerPathFollowingCourseControl_GetDWork ( ) { static const char_T *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 24 ] = { "rtDW.gyil3sx4on" , "rtDW.cxlq0pdam2" ,
"rtDW.lo4zpeksxn" , "rtDW.as1a1r4g2f" , "rtDW.ca1apjcb5w" , "rtDW.p1y01yg0xm"
, "rtDW.gkr5vx1zx5" , "rtDW.dkc5vqz4gx" , "rtDW.fjimdccq4p" ,
"rtDW.h5x2psv2rm" , "rtDW.adphgackqq" , "rtDW.npo3ez1xrm" , "rtDW.jp1mjj1nai"
, "rtDW.fu5xt1yxiq" , "rtDW.lkbtsbbn1e" , "rtDW.adi32v00qw" ,
"rtDW.gayjctc4dn" , "rtDW.ewk1jraa45" , "rtDW.e4zkiweeyz" , "rtDW.bld05pdbf3"
, "rtDW.hnoedyuqv3" , "rtDW.mlz0dzd5h3" , "rtDW.cqhioppxdz" ,
"rtDW.giwafdbyxc" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
24 , rtdwDataFieldNames ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0 ,
0 , ( const void * ) & ( rtDW . gyil3sx4on ) , sizeof ( rtDW . gyil3sx4on ) )
; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0
, 1 , ( const void * ) & ( rtDW . cxlq0pdam2 ) , sizeof ( rtDW . cxlq0pdam2 )
) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData ,
0 , 2 , ( const void * ) & ( rtDW . lo4zpeksxn ) , sizeof ( rtDW . lo4zpeksxn
) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData
, 0 , 3 , ( const void * ) & ( rtDW . as1a1r4g2f ) , sizeof ( rtDW .
as1a1r4g2f ) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( rtDW . ca1apjcb5w ) , sizeof ( rtDW
. ca1apjcb5w ) ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0 ,
5 , ( const void * ) & ( rtDW . p1y01yg0xm ) , sizeof ( rtDW . p1y01yg0xm ) )
; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0
, 6 , ( const void * ) & ( rtDW . gkr5vx1zx5 ) , sizeof ( rtDW . gkr5vx1zx5 )
) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData ,
0 , 7 , ( const void * ) & ( rtDW . dkc5vqz4gx ) , sizeof ( rtDW . dkc5vqz4gx
) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData
, 0 , 8 , ( const void * ) & ( rtDW . fjimdccq4p ) , sizeof ( rtDW .
fjimdccq4p ) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray
( rtdwData , 0 , 9 , ( const void * ) & ( rtDW . h5x2psv2rm ) , sizeof ( rtDW
. h5x2psv2rm ) ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0 ,
10 , ( const void * ) & ( rtDW . adphgackqq ) , sizeof ( rtDW . adphgackqq )
) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData ,
0 , 11 , ( const void * ) & ( rtDW . npo3ez1xrm ) , sizeof ( rtDW .
npo3ez1xrm ) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray
( rtdwData , 0 , 12 , ( const void * ) & ( rtDW . jp1mjj1nai ) , sizeof (
rtDW . jp1mjj1nai ) ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0 ,
13 , ( const void * ) & ( rtDW . fu5xt1yxiq ) , sizeof ( rtDW . fu5xt1yxiq )
) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData ,
0 , 14 , ( const void * ) & ( rtDW . lkbtsbbn1e ) , sizeof ( rtDW .
lkbtsbbn1e ) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray
( rtdwData , 0 , 15 , ( const void * ) & ( rtDW . adi32v00qw ) , sizeof (
rtDW . adi32v00qw ) ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0 ,
16 , ( const void * ) & ( rtDW . gayjctc4dn ) , sizeof ( rtDW . gayjctc4dn )
) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData ,
0 , 17 , ( const void * ) & ( rtDW . ewk1jraa45 ) , sizeof ( rtDW .
ewk1jraa45 ) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray
( rtdwData , 0 , 18 , ( const void * ) & ( rtDW . e4zkiweeyz ) , sizeof (
rtDW . e4zkiweeyz ) ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0 ,
19 , ( const void * ) & ( rtDW . bld05pdbf3 ) , sizeof ( rtDW . bld05pdbf3 )
) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData ,
0 , 20 , ( const void * ) & ( rtDW . hnoedyuqv3 ) , sizeof ( rtDW .
hnoedyuqv3 ) ) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray
( rtdwData , 0 , 21 , ( const void * ) & ( rtDW . mlz0dzd5h3 ) , sizeof (
rtDW . mlz0dzd5h3 ) ) ;
mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData , 0 ,
22 , ( const void * ) & ( rtDW . cqhioppxdz ) , sizeof ( rtDW . cqhioppxdz )
) ; mr_demoMarinerPathFollowingCourseControl_cacheDataAsMxArray ( rtdwData ,
0 , 23 , ( const void * ) & ( rtDW . giwafdbyxc ) , sizeof ( rtDW .
giwafdbyxc ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_demoMarinerPathFollowingCourseControl_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . gyil3sx4on ) , rtdwData , 0 , 0 , sizeof ( rtDW . gyil3sx4on ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . cxlq0pdam2 ) , rtdwData , 0 , 1 , sizeof ( rtDW . cxlq0pdam2 ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . lo4zpeksxn ) , rtdwData , 0 , 2 , sizeof ( rtDW . lo4zpeksxn ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . as1a1r4g2f ) , rtdwData , 0 , 3 , sizeof ( rtDW . as1a1r4g2f ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . ca1apjcb5w ) , rtdwData , 0 , 4 , sizeof ( rtDW . ca1apjcb5w ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . p1y01yg0xm ) , rtdwData , 0 , 5 , sizeof ( rtDW . p1y01yg0xm ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . gkr5vx1zx5 ) , rtdwData , 0 , 6 , sizeof ( rtDW . gkr5vx1zx5 ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . dkc5vqz4gx ) , rtdwData , 0 , 7 , sizeof ( rtDW . dkc5vqz4gx ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . fjimdccq4p ) , rtdwData , 0 , 8 , sizeof ( rtDW . fjimdccq4p ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . h5x2psv2rm ) , rtdwData , 0 , 9 , sizeof ( rtDW . h5x2psv2rm ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . adphgackqq ) , rtdwData , 0 , 10 , sizeof ( rtDW . adphgackqq ) )
; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void *
) & ( rtDW . npo3ez1xrm ) , rtdwData , 0 , 11 , sizeof ( rtDW . npo3ez1xrm )
) ; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void
* ) & ( rtDW . jp1mjj1nai ) , rtdwData , 0 , 12 , sizeof ( rtDW . jp1mjj1nai
) ) ; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( (
void * ) & ( rtDW . fu5xt1yxiq ) , rtdwData , 0 , 13 , sizeof ( rtDW .
fu5xt1yxiq ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . lkbtsbbn1e ) , rtdwData , 0 , 14 , sizeof ( rtDW . lkbtsbbn1e ) )
; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void *
) & ( rtDW . adi32v00qw ) , rtdwData , 0 , 15 , sizeof ( rtDW . adi32v00qw )
) ; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void
* ) & ( rtDW . gayjctc4dn ) , rtdwData , 0 , 16 , sizeof ( rtDW . gayjctc4dn
) ) ; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( (
void * ) & ( rtDW . ewk1jraa45 ) , rtdwData , 0 , 17 , sizeof ( rtDW .
ewk1jraa45 ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . e4zkiweeyz ) , rtdwData , 0 , 18 , sizeof ( rtDW . e4zkiweeyz ) )
; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void *
) & ( rtDW . bld05pdbf3 ) , rtdwData , 0 , 19 , sizeof ( rtDW . bld05pdbf3 )
) ; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void
* ) & ( rtDW . hnoedyuqv3 ) , rtdwData , 0 , 20 , sizeof ( rtDW . hnoedyuqv3
) ) ; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( (
void * ) & ( rtDW . mlz0dzd5h3 ) , rtdwData , 0 , 21 , sizeof ( rtDW .
mlz0dzd5h3 ) ) ;
mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void * )
& ( rtDW . cqhioppxdz ) , rtdwData , 0 , 22 , sizeof ( rtDW . cqhioppxdz ) )
; mr_demoMarinerPathFollowingCourseControl_restoreDataFromMxArray ( ( void *
) & ( rtDW . giwafdbyxc ) , rtdwData , 0 , 23 , sizeof ( rtDW . giwafdbyxc )
) ; } } mxArray *
mr_demoMarinerPathFollowingCourseControl_GetSimStateDisallowedBlocks ( ) {
return ( NULL ) ; } void MdlInitializeSizes ( void ) { ssSetNumContStates (
rtS , 10 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 63 ) ;
ssSetNumBlockIO ( rtS , 16 ) ; ssSetNumBlockParams ( rtS , 276 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3672248073U ) ; ssSetChecksumVal ( rtS , 1 ,
933846276U ) ; ssSetChecksumVal ( rtS , 2 , 3962722724U ) ; ssSetChecksumVal
( rtS , 3 , 3591176389U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 2 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; { int32_T i ; for ( i = 0 ; i < 7 ; i ++ ) { rtB .
d25mgzrntl [ i ] = 0.0 ; } for ( i = 0 ; i < 116 ; i ++ ) { rtB . lk0bm5xw5m
[ i ] = 0.0 ; } for ( i = 0 ; i < 116 ; i ++ ) { rtB . hleb2ewssu [ i ] = 0.0
; } for ( i = 0 ; i < 7 ; i ++ ) { rtB . fjukfd0ml0 [ i ] = 0.0 ; } for ( i =
0 ; i < 7 ; i ++ ) { rtB . otagkty1sc [ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i
++ ) { rtB . a2jle11lq2 [ i ] = 0.0 ; } rtB . biizpmf3bn = 0.0 ; rtB .
n5pvzdd33j = 0.0 ; rtB . h2tvvxrgwg = 0.0 ; rtB . an2daryais = 0.0 ; rtB .
ngqggygexp = 0.0 ; rtB . o4uvmnpinp = 0.0 ; rtB . gvtucr52ij = 0.0 ; rtB .
ncqyk10zdm = 0.0 ; rtB . ocn4o1graj = 0.0 ; rtB . irc5tjl1ah = 0.0 ; } } {
real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void )
memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) &
rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof
( DW ) ) ; rtDW . gyil3sx4on = 0.0 ; rtDW . cxlq0pdam2 = 0.0 ; rtDW .
lo4zpeksxn = 0.0 ; rtDW . as1a1r4g2f = 0.0 ; { int32_T i ; for ( i = 0 ; i <
5 ; i ++ ) { rtDW . ca1apjcb5w [ i ] = 0.0 ; } } { int32_T i ; for ( i = 0 ;
i < 25 ; i ++ ) { rtDW . p1y01yg0xm [ i ] = 0.0 ; } } } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
demoMarinerPathFollowingCourseControl_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"demoMarinerPathFollowingCourseControl" ) ; ssSetPath ( rtS ,
"demoMarinerPathFollowingCourseControl" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 1.25E+6 ) ; ssSetStepSize ( rtS , 0.1 ) ;
ssSetFixedStepSize ( rtS , 0.1 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 7 , 1
, 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 }
; static int_T rt_LoggedStateDimensions [ ] = { 7 , 1 , 1 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "demoMarinerPathFollowingCourseControl/Mariner class cargo ship (mariner.m)/Integrator"
, "demoMarinerPathFollowingCourseControl/LOS observer/         " ,
"demoMarinerPathFollowingCourseControl/Course autopilot /Integral" ,
"demoMarinerPathFollowingCourseControl/LOS observer/Differentiator" } ;
static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 4 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 4 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ctzcwqbk5w [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . nuy31esdl2 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . azap50bxgn ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . phk1si4gzc ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 10 ] ;
static ssNonContDerivSigInfo nonContDerivSigInfo [ 2 ] = { { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . irc5tjl1ah ) , ( NULL ) } , { 5 * sizeof (
real_T ) , ( char * ) ( & rtB . a2jle11lq2 [ 0 ] ) , ( NULL ) } } ;
ssSetNumNonContDerivSigInfos ( rtS , 2 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode4" ) ; ssSetVariableStepSolver ( rtS , 0 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate )
; ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetTNextTid ( rtS ,
INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; } ssSetChecksumVal ( rtS , 0 , 3672248073U ) ;
ssSetChecksumVal ( rtS , 1 , 933846276U ) ; ssSetChecksumVal ( rtS , 2 ,
3962722724U ) ; ssSetChecksumVal ( rtS , 3 , 3591176389U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 4 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_demoMarinerPathFollowingCourseControl_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_demoMarinerPathFollowingCourseControl_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_demoMarinerPathFollowingCourseControl_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid ) ; }
