#include "__cf_closedLoop_toTune.h"
#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; void sm_ssci_setupLoggerFcn_codeGen ( const NeDae *
dae , NeLoggerBuilder * neLoggerBuilder ) ; int32_T sm_ssci_logFcn_codeGen (
const NeDae * dae , const NeSystemInput * systemInput , PmRealVector * output
) ; extern const NeAssertData closedLoop_toTune_b924f1e8_1_assertData [ ] ;
void closedLoop_toTune_b924f1e8_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
closedLoop_toTune_b924f1e8_1_validateRuntimeParameters ( const double *
runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
closedLoop_toTune_b924f1e8_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void closedLoop_toTune_b924f1e8_1_computeSimRuntimeDerivedValues ( const
double * runtimeParameters , RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle ) ; PmfMessageId
closedLoop_toTune_b924f1e8_1_deriv ( const RuntimeDerivedValuesBundle * ,
const int * , const double * , const double * , const double * , const double
* , const double * , double * , double * , NeuDiagnosticManager * neDiagMgr )
; PmfMessageId closedLoop_toTune_b924f1e8_1_checkDynamics ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId closedLoop_toTune_b924f1e8_1_outputDyn ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const double *
, const double * , const double * , const double * , double * , double * ,
int * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
closedLoop_toTune_b924f1e8_1_outputKin ( const RuntimeDerivedValuesBundle * ,
const double * , const double * , const double * , const double * , const
double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
closedLoop_toTune_b924f1e8_1_output ( const RuntimeDerivedValuesBundle * ,
const double * , const double * , const double * , const double * , const
double * , double * , NeuDiagnosticManager * neDiagMgr ) ;
#if 0
void closedLoop_toTune_b924f1e8_1_checkTargets ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector ) ;
#endif
void closedLoop_toTune_b924f1e8_1_setTargets ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget * targets )
; void closedLoop_toTune_b924f1e8_1_resetStateVector ( const void * mech ,
double * stateVector ) ; void
closedLoop_toTune_b924f1e8_1_initializeTrackedAngleState ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * motionData , double * stateVector , void * neDiagMgr ) ; void
closedLoop_toTune_b924f1e8_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , double *
stateVector ) ; void closedLoop_toTune_b924f1e8_1_adjustPosition ( const void
* mech , const double * dofDeltas , double * stateVector ) ; void
closedLoop_toTune_b924f1e8_1_perturbJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
closedLoop_toTune_b924f1e8_1_perturbFlexibleBodyState ( const void * mech ,
size_t stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void closedLoop_toTune_b924f1e8_1_computeDofBlendMatrix (
const void * mech , size_t stageIdx , size_t primitiveIdx , const double *
stateVector , int partialType , double * matrix ) ; void
closedLoop_toTune_b924f1e8_1_projectPartiallyTargetedPos ( const void * mech
, size_t stageIdx , size_t primitiveIdx , const double * origStateVector ,
int partialType , double * stateVector ) ; void
closedLoop_toTune_b924f1e8_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
closedLoop_toTune_b924f1e8_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const double * stateVector , const double * motionData ,
double * error ) ; size_t
closedLoop_toTune_b924f1e8_1_computeAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const double * motionData , double * J ) ; size_t
closedLoop_toTune_b924f1e8_1_computeFullAssemblyJacobian ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const double * motionData , double * J ) ; int
closedLoop_toTune_b924f1e8_1_isInKinematicSingularity ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const double * motionData ) ; PmfMessageId
closedLoop_toTune_b924f1e8_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void
* simMech , const double * asmStateVector , double * simStateVector , void *
neDiagMgr ) ; void closedLoop_toTune_b924f1e8_1_constructStateVector ( const
void * mech , const double * solverStateVector , const double * u , const
double * uDot , const double * discreteStateVector , double * fullStateVector
) ; void closedLoop_toTune_b924f1e8_1_extractSolverStateVector ( const void *
mech , const double * fullStateVector , double * solverStateVector ) ; int
closedLoop_toTune_b924f1e8_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector ) ; int
closedLoop_toTune_b924f1e8_1_isVelocityViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector ) ; PmfMessageId
closedLoop_toTune_b924f1e8_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * inputVector , double * stateVector
, void * neDiagMgr ) ; void
closedLoop_toTune_b924f1e8_1_computeConstraintError ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double
* stateVector , double * error ) ; PmfMessageId
closedLoop_toTune_b924f1e8_1_assemble ( const double * u , double * udot ,
double * x , NeuDiagnosticManager * neDiagMgr ) { ( void ) x ; ( void ) u ; (
void ) udot ; ( void ) neDiagMgr ; return NULL ; } static void
dae_cg_setParameters_function ( const NeDae * dae , const NeParameterBundle *
paramBundle ) { const NeDaePrivateData * smData = dae -> mPrivateData ; const
double * runtimeRootVariables = paramBundle -> mRealParameters . mX ; if (
smData -> mRuntimeParameterScalars . mN == 0 ) return ;
closedLoop_toTune_b924f1e8_1_computeRuntimeParameters ( runtimeRootVariables
, smData -> mRuntimeParameterScalars . mX ) ;
closedLoop_toTune_b924f1e8_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
closedLoop_toTune_b924f1e8_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; closedLoop_toTune_b924f1e8_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 24 * sizeof ( real_T ) ) ; else errorId =
closedLoop_toTune_b924f1e8_1_deriv ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mU . mX , systemInput -> mU . mX + 6 , systemInput -> mV . mX + 6 ,
systemInput -> mD . mX , daeMethodOutput -> mXP0 . mX , & errorResult ,
neDiagMgr ) ; return errorId ; } static PmfMessageId dae_cg_output_method (
const NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { PmfMessageId errorId =
NULL ; NeDaePrivateData * smData = dae -> mPrivateData ; errorId =
closedLoop_toTune_b924f1e8_1_output ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 6 , systemInput -> mV . mX + 6 , systemInput ->
mD . mX , daeMethodOutput -> mY . mX , neDiagMgr ) ; return errorId ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mU . mX , systemInput -> mU .
mX + 6 , systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; }
static PmfMessageId dae_cg_check_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId = NULL
; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState (
false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mU . mX , systemInput -> mU .
mX + 6 , systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; if (
errorId == NULL && smData -> mDoCheckDynamics ) { double result = 0.0 ;
errorId = closedLoop_toTune_b924f1e8_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 6 , systemInput -> mV . mX + 6 , systemInput ->
mD . mX , & result , neDiagMgr ) ; } return errorId ; } static PmfMessageId
dae_cg_projectMaybe_solve ( const NeDae * dae , const NeSystemInput *
systemInput , NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData
= dae -> mPrivateData ; return sm_core_projectState ( true , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mU . mX , systemInput -> mU . mX + 6 , systemInput -> mD . mX
, systemInput -> mX . mX , neDiagMgr ) ; } static PmfMessageId
dae_cg_assemble_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; const SmMechanismDelegate * delegate = & smData ->
mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; const size_t numTargets = 24 ;
unsigned int asmStatus = 0 ; double * assemblyFullStateVector = smData ->
mAssemblyFullStateVector . mX ; double * simulationFullStateVector = smData
-> mSimulationFullStateVector . mX ; ( * delegate -> mSetTargets ) (
runtimeDerivedValuesBundle , smData -> mTargets ) ; { const double * u =
systemInput -> mU . mX ; const double * uDot = u + smData -> mInputVectorSize
; CTarget * target = smData -> mTargets + smData -> mNumInternalTargets ; for
( i = 0 ; i < smData -> mNumInputMotionPrimitives ; ++ i ) { const size_t
inputOffset = smData -> mMotionInputOffsets . mX [ i ] ; ( target ++ ) ->
mValue [ 0 ] = u [ inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [
inputOffset ] ; } } errorId = sm_core_computeStateVector ( delegate ,
runtimeDerivedValuesBundle , numTargets , smData -> mTargets ,
assemblyFullStateVector , neDiagMgr ) ; if ( errorId != NULL ) return errorId
; asmStatus = sm_core_checkAssembly ( delegate , runtimeDerivedValuesBundle ,
assemblyFullStateVector , NULL , NULL , NULL ) ; if ( asmStatus != 1 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:AssemblyFailure" , asmStatus == 2 ?
 "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
closedLoop_toTune_b924f1e8_1_checkTargets ( & smData ->
mSimRuntimeDerivedValuesBundle , assemblyFullStateVector ) ;
#endif
errorId = ( * delegate -> mConvertStateVector ) ( NULL ,
runtimeDerivedValuesBundle , NULL , assemblyFullStateVector ,
simulationFullStateVector , neDiagMgr ) ; for ( i = 0 ; i < smData ->
mStateVectorSize ; ++ i ) systemInput -> mX . mX [ i ] =
simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ] ; memcpy (
systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; return errorId ; } typedef struct
{ size_t first ; size_t second ; } SizePair ; static void checkMemAllocStatus
( int_T status ) { ( void ) status ; } static PmCharVector
cStringToCharVector ( const char * src ) { const size_t n = strlen ( src ) ;
PmCharVector charVect ; const int_T status = pm_create_char_vector_fields ( &
charVect , n + 1 , pm_default_allocator ( ) ) ; checkMemAllocStatus ( status
) ; strcpy ( charVect . mX , src ) ; return charVect ; } static void
initBasicAttributes ( NeDaePrivateData * smData ) { size_t i ; smData ->
mStateVectorSize = 24 ; smData -> mFullStateVectorSize = 24 ; smData ->
mDiscreteStateSize = 0 ; smData -> mInputVectorSize = 6 ; smData ->
mOutputVectorSize = 12 ; smData -> mNumConstraintEqns = 6 ; smData ->
mDoCheckDynamics = false ; for ( i = 0 ; i < 4 ; ++ i ) smData -> mChecksum [
i ] = 0 ; } static void initStateVector ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T stateVectorMap
[ 24 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 ,
15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 } ; const CTarget targets [ 24 ] =
{ { 0 , 47 , 0 , false , 0 , 0 , "1" , false , true , +
1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 47 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 48 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 48 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 67 , 0 , false , 0 , 1 , "deg" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 5.235987755982988157e-01 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 67 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 95 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 95 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 96 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 96 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 115 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { - 5.235987755982988157e-01
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 115 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 130 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { - 2.156703356689392947e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 130 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 136 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 2.156703356689392947e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 136 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 143 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 143 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 149 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 149 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 155 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 155 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 161 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 161 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } } ; const size_t numTargets = 24 ; int_T status
; size_t i ; status = pm_create_real_vector_fields ( & smData ->
mAssemblyFullStateVector , 24 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_real_vector_fields ( & smData ->
mSimulationFullStateVector , 24 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData
-> mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize
* sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 24 ; smData ->
mNumInputMotionPrimitives = 0 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
closedLoop_toTune_b924f1e8_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertObjects , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertPaths , PmCharVector , 0 , alloc )
; PM_ALLOCATE_ARRAY ( smData -> mParamAssertDescriptors , PmCharVector , 0 ,
alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector ,
0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds ,
PmCharVector , 0 , alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ;
++ i , ++ ad ) { smData -> mParamAssertObjects [ i ] = cStringToCharVector (
ad -> mObject ) ; smData -> mParamAssertPaths [ i ] = cStringToCharVector (
ad -> mPath ) ; smData -> mParamAssertDescriptors [ i ] = cStringToCharVector
( ad -> mDescriptor ) ; smData -> mParamAssertMessages [ i ] =
cStringToCharVector ( ad -> mMessage ) ; smData -> mParamAssertMessageIds [ i
] = cStringToCharVector ( ad -> mMessageID ) ; smData ->
mParamAssertIsWarnings . mX [ i ] = ad -> mIsWarn ; } } } static void
initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths [ 24
] = {
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.q"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.Rz.w"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.q"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.Rz.w"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
, "Plant.Robot.Gripper.Left_Revolute_A.Rz.q" ,
"Plant.Robot.Gripper.Left_Revolute_A.Rz.w" ,
"Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.q" ,
"Plant.Robot.Gripper.Left_Finger_Revolute_A.Rz.w" ,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.q"
,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.Rz.w"
, "Plant.Robot.Gripper.Right_Revolute_A.Rz.q" ,
"Plant.Robot.Gripper.Right_Revolute_A.Rz.w" ,
"Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.q" ,
"Plant.Robot.Gripper.Right_Finger_Revolute_A.Rz.w" ,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.q"
,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.Rz.w"
, "Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.q" ,
"Plant.Robot.Gripper.Left_Finger_Revolute_B.Rz.w" ,
"Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.q" ,
"Plant.Robot.Gripper.Right_Finger_Revolute_B.Rz.w" } ; const char *
varObjects [ 24 ] = {
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position2/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
, "closedLoop_toTune/Plant/Robot/Gripper/Left Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute  A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute  A" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position1/Upper Arm Revolute"
, "closedLoop_toTune/Plant/Robot/Gripper/Right Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute A" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute A" ,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
,
 "closedLoop_toTune/Plant/Robot/Gripper/Torque Actuated Revolute Joint with Position3/Upper Arm Revolute"
, "closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute B" ,
"closedLoop_toTune/Plant/Robot/Gripper/Left Finger Revolute B" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute B" ,
"closedLoop_toTune/Plant/Robot/Gripper/Right Finger Revolute B" } ; smData ->
mNumVarScalars = 24 ; smData -> mVarFullPaths = NULL ; smData -> mVarObjects
= NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ; PmAllocator * alloc
= pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( smData -> mVarFullPaths ,
PmCharVector , 24 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mVarObjects ,
PmCharVector , 24 , alloc ) ; for ( s = 0 ; s < smData -> mNumVarScalars ; ++
s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector ( varFullPaths [ s
] ) ; smData -> mVarObjects [ s ] = cStringToCharVector ( varObjects [ s ] )
; } } } static void initRuntimeParameters ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; size_t i
= 0 ; const int32_T * rtpRootVarRows = NULL ; const int32_T * rtpRootVarCols
= NULL ; const char * * rtpFullPaths = NULL ; smData -> mNumRtpRootVars = 0 ;
status = pm_create_int_vector_fields ( & smData -> mRtpRootVarRows , smData
-> mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mRtpRootVarRows . mX , rtpRootVarRows , smData -> mNumRtpRootVars *
sizeof ( int32_T ) ) ; status = pm_create_int_vector_fields ( & smData ->
mRtpRootVarCols , smData -> mNumRtpRootVars , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mRtpRootVarCols . mX , rtpRootVarCols , smData
-> mNumRtpRootVars * sizeof ( int32_T ) ) ; smData -> mRtpFullPaths = NULL ;
if ( smData -> mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData
-> mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
NeDsIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , NeDsIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { NeDsIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
info -> mM = dimensions [ s ] . first ; info -> mN = dimensions [ s ] .
second ; info -> mUnit = units [ s ] . mX ; } } } if ( doInputs ) { smData ->
mNumInputs = n ; smData -> mInputPortPaths = portPaths ; smData ->
mInputUnits = units ; smData -> mInputInfos = infos ; } else { smData ->
mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData ->
mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { const char * inputPortPaths [ 6 ]
= {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.ti"
,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.ti"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.ti"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.ti"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.ti"
,
 "Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.ti"
} ; const char * inputUnits [ 6 ] = { "m^2*kg/s^2" , "m^2*kg/s^2" ,
"m^2*kg/s^2" , "m^2*kg/s^2" , "m^2*kg/s^2" , "m^2*kg/s^2" } ; const SizePair
inputDimensions [ 6 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } } ; const char * outputPortPaths [ 12 ] = {
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.q"
,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.w"
,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.q"
,
 "Plant.Robot.Gripper.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.w"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.q"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position.Upper_Arm_Revolute.w"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.q"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position1.Upper_Arm_Revolute.w"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.q"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position2.Upper_Arm_Revolute.w"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.q"
,
"Plant.Robot.Torque_Actuated_Revolute_Joint_with_Position3.Upper_Arm_Revolute.w"
} ; const char * outputUnits [ 12 ] = { "rad" , "rad/s" , "rad" , "rad/s" ,
"rad" , "rad/s" , "rad" , "rad/s" , "rad" , "rad/s" , "rad" , "rad/s" } ;
const SizePair outputDimensions [ 12 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } } ; initIoInfoHelper ( 6 , inputPortPaths ,
inputUnits , inputDimensions , true , smData ) ; initIoInfoHelper ( 12 ,
outputPortPaths , outputUnits , outputDimensions , false , smData ) ; }
static void initInputDerivs ( NeDaePrivateData * smData ) { const int32_T
numInputDerivs [ 6 ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; PmAllocator * alloc =
pm_default_allocator ( ) ; const int_T status = pm_create_int_vector_fields (
& smData -> mNumInputDerivs , smData -> mInputVectorSize , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mNumInputDerivs . mX ,
numInputDerivs , 6 * sizeof ( int32_T ) ) ; smData -> mInputOrder = 1 ; }
static void initDirectFeedthrough ( NeDaePrivateData * smData ) { const
boolean_T directFeedthroughVector [ 6 ] = { false , false , false , false ,
false , false } ; const boolean_T directFeedthroughMatrix [ 72 ] = { false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false } ; PmAllocator * alloc =
pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 6 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 6 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 72 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 72 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 12 ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; smData -> mOutputFunctionMap =
pm_create_int_vector ( 12 , alloc ) ; memcpy ( smData -> mOutputFunctionMap
-> mX , outputFunctionMap , 12 * sizeof ( int32_T ) ) ; smData ->
mNumOutputClasses = 1 ; smData -> mHasKinematicOutputs = true ; smData ->
mHasDynamicOutputs = false ; smData -> mIsOutputClass0Dynamic = false ;
smData -> mDoComputeDynamicOutputs = false ; smData ->
mCachedDerivativesAvailable = false ; { size_t i = 0 ; const int_T status =
pm_create_real_vector_fields ( & smData -> mCachedDerivatives , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives .
mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 10 ] = { { 47 , 5 } , { 67 , 4 } , { 95 , 8 } , { 115 , 7 }
, { 130 , 6 } , { 136 , 9 } , { 143 , 0 } , { 149 , 1 } , { 155 , 2 } , { 161
, 3 } } ; const size_t primitiveIndices [ 10 + 1 ] = { 0 , 1 , 2 , 3 , 4 , 5
, 6 , 7 , 8 , 9 , 10 } ; const SmSizePair stateOffsets [ 10 ] = { { 0 , 1 } ,
{ 2 , 3 } , { 4 , 5 } , { 6 , 7 } , { 8 , 9 } , { 10 , 11 } , { 12 , 13 } , {
14 , 15 } , { 16 , 17 } , { 18 , 19 } } ; const SmSizePair dofOffsets [ 10 ]
= { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 4 } , { 4 , 5 } , { 5 , 6 } , {
6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9 , 10 } } ; const size_t *
flexibleStages = NULL ; const size_t remodIndices [ 10 ] = { 0 , 2 , 4 , 6 ,
8 , 10 , 12 , 14 , 16 , 18 } ; const size_t equationsPerConstraint [ 2 ] = {
5 , 5 } ; const size_t dofToVelSlot [ 10 ] = { 1 , 3 , 5 , 7 , 9 , 11 , 13 ,
15 , 17 , 19 } ; const size_t constraintDofs [ 6 ] = { 6 , 4 , 5 , 9 , 7 , 8
} ; const size_t constraintDofOffsets [ 2 + 1 ] = { 0 , 3 , 6 } ; const
size_t Jm = 10 ; const size_t Jn = 10 ; SmSizePair zeroSizePair ;
zeroSizePair . mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 10 ; delegate -> mDof
= 10 ; delegate -> mStateSize = 24 ; delegate -> mContinuousStateSize = 24 ;
delegate -> mNumStages = 10 ; delegate -> mNumConstraints = 2 ; delegate ->
mNumAllConstraintEquations = 10 ; sm_core_SmSizePairVector_create ( &
delegate -> mJointToStageIdx , delegate -> mNumStages , & zeroSizePair ) ;
memcpy ( sm_core_SmSizePairVector_nonConstValues ( & delegate ->
mJointToStageIdx ) , jointToStageIdx , 10 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate ->
mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 10 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 10 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 10 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 10 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 10 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 10 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 6 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 6 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 10 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 10 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 2 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 2 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 10 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 10 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 10 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 10 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 10 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 10 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 10 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvVelOffsets , 10 , &
zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvAzimuthValues , 10 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mInitialState , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mStartState , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mTestState , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mFullStateVector , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 461 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 10 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 24 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 10 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 144 , 0.0
) ; delegate -> mSetTargets = closedLoop_toTune_b924f1e8_1_setTargets ;
delegate -> mResetStateVector = closedLoop_toTune_b924f1e8_1_resetStateVector
; delegate -> mInitializeTrackedAngleState =
closedLoop_toTune_b924f1e8_1_initializeTrackedAngleState ; delegate ->
mComputeDiscreteState = closedLoop_toTune_b924f1e8_1_computeDiscreteState ;
delegate -> mAdjustPosition = closedLoop_toTune_b924f1e8_1_adjustPosition ;
delegate -> mPerturbJointPrimitiveState =
closedLoop_toTune_b924f1e8_1_perturbJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState =
closedLoop_toTune_b924f1e8_1_perturbFlexibleBodyState ; delegate ->
mComputeDofBlendMatrix = closedLoop_toTune_b924f1e8_1_computeDofBlendMatrix ;
delegate -> mProjectPartiallyTargetedPos =
closedLoop_toTune_b924f1e8_1_projectPartiallyTargetedPos ; delegate ->
mPropagateMotion = closedLoop_toTune_b924f1e8_1_propagateMotion ; delegate ->
mComputeAssemblyError = closedLoop_toTune_b924f1e8_1_computeAssemblyError ;
delegate -> mComputeAssemblyJacobian =
closedLoop_toTune_b924f1e8_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian =
closedLoop_toTune_b924f1e8_1_computeFullAssemblyJacobian ; delegate ->
mIsInKinematicSingularity =
closedLoop_toTune_b924f1e8_1_isInKinematicSingularity ; delegate ->
mConvertStateVector = closedLoop_toTune_b924f1e8_1_convertStateVector ;
delegate -> mConstructStateVector =
closedLoop_toTune_b924f1e8_1_constructStateVector ; delegate ->
mExtractSolverStateVector =
closedLoop_toTune_b924f1e8_1_extractSolverStateVector ; delegate ->
mIsPositionViolation = closedLoop_toTune_b924f1e8_1_isPositionViolation ;
delegate -> mIsVelocityViolation =
closedLoop_toTune_b924f1e8_1_isVelocityViolation ; delegate ->
mProjectStateSim = closedLoop_toTune_b924f1e8_1_projectStateSim ; delegate ->
mComputeConstraintError = closedLoop_toTune_b924f1e8_1_computeConstraintError
; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 10 ] = { { 47 , 5 } , { 67 , 4 }
, { 95 , 8 } , { 115 , 7 } , { 130 , 6 } , { 136 , 9 } , { 143 , 0 } , { 149
, 1 } , { 155 , 2 } , { 161 , 3 } } ; const size_t primitiveIndices [ 10 + 1
] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 } ; const SmSizePair
stateOffsets [ 10 ] = { { 0 , 1 } , { 2 , 3 } , { 4 , 5 } , { 6 , 7 } , { 8 ,
9 } , { 10 , 11 } , { 12 , 13 } , { 14 , 15 } , { 16 , 17 } , { 18 , 19 } } ;
const SmSizePair dofOffsets [ 10 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , {
3 , 4 } , { 4 , 5 } , { 5 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9 ,
10 } } ; const size_t * flexibleStages = NULL ; const size_t remodIndices [
10 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 16 , 18 } ; const size_t
equationsPerConstraint [ 2 ] = { 3 , 3 } ; const size_t dofToVelSlot [ 10 ] =
{ 1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 } ; const size_t constraintDofs
[ 6 ] = { 6 , 4 , 5 , 9 , 7 , 8 } ; const size_t constraintDofOffsets [ 2 + 1
] = { 0 , 3 , 6 } ; const size_t Jm = 6 ; const size_t Jn = 10 ; SmSizePair
zeroSizePair ; zeroSizePair . mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 10 ; delegate -> mDof
= 10 ; delegate -> mStateSize = 24 ; delegate -> mContinuousStateSize = 24 ;
delegate -> mNumStages = 10 ; delegate -> mNumConstraints = 2 ; delegate ->
mNumAllConstraintEquations = 6 ; sm_core_SmSizePairVector_create ( & delegate
-> mJointToStageIdx , delegate -> mNumStages , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 10 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 10 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 10 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 10 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 10 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 10 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 10 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 6 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 6 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 10 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 10 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 10 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 10 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 2 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 2 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 10 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 10 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 10 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 10 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 10 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 10 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 10 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvVelOffsets , 10 , &
zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvAzimuthValues , 10 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mInitialState , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mStartState , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mTestState , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mFullStateVector , 24 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 301 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 10 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 24 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 10 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 144 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
closedLoop_toTune_b924f1e8_1_resetStateVector ; delegate ->
mInitializeTrackedAngleState =
closedLoop_toTune_b924f1e8_1_initializeTrackedAngleState ; delegate ->
mComputeDiscreteState = closedLoop_toTune_b924f1e8_1_computeDiscreteState ;
delegate -> mAdjustPosition = closedLoop_toTune_b924f1e8_1_adjustPosition ;
delegate -> mPerturbJointPrimitiveState =
closedLoop_toTune_b924f1e8_1_perturbJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState =
closedLoop_toTune_b924f1e8_1_perturbFlexibleBodyState ; delegate ->
mComputeDofBlendMatrix = NULL ; delegate -> mProjectPartiallyTargetedPos =
NULL ; delegate -> mPropagateMotion =
closedLoop_toTune_b924f1e8_1_propagateMotion ; delegate ->
mComputeAssemblyError = closedLoop_toTune_b924f1e8_1_computeAssemblyError ;
delegate -> mComputeAssemblyJacobian =
closedLoop_toTune_b924f1e8_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian =
closedLoop_toTune_b924f1e8_1_computeFullAssemblyJacobian ; delegate ->
mIsInKinematicSingularity =
closedLoop_toTune_b924f1e8_1_isInKinematicSingularity ; delegate ->
mConvertStateVector = closedLoop_toTune_b924f1e8_1_convertStateVector ;
delegate -> mConstructStateVector =
closedLoop_toTune_b924f1e8_1_constructStateVector ; delegate ->
mExtractSolverStateVector =
closedLoop_toTune_b924f1e8_1_extractSolverStateVector ; delegate ->
mIsPositionViolation = closedLoop_toTune_b924f1e8_1_isPositionViolation ;
delegate -> mIsVelocityViolation =
closedLoop_toTune_b924f1e8_1_isVelocityViolation ; delegate ->
mProjectStateSim = closedLoop_toTune_b924f1e8_1_projectStateSim ; delegate ->
mComputeConstraintError = closedLoop_toTune_b924f1e8_1_computeConstraintError
; delegate -> mMech = NULL ; } static void initMechanismDelegates (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T * motionInputOffsets = NULL ; int_T status = 0 ;
initAssemblyDelegate ( & smData -> mAssemblyDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 0 * sizeof (
int32_T ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData *
smData ) { smData -> mSetParametersFcn = dae_cg_setParameters_function ;
smData -> mPAssertFcn = dae_cg_pAssert_method ; smData -> mDerivativeFcn =
dae_cg_deriv_method ; smData -> mOutputFcn = dae_cg_output_method ; smData ->
mProjectionFcn = dae_cg_project_solve ; smData -> mProjectionMaybeFcn =
dae_cg_projectMaybe_solve ; smData -> mCheckFcn = ( smData ->
mStateVectorSize == 0 ) ? dae_cg_check_solve : NULL ; smData -> mAssemblyFcn
= dae_cg_assemble_solve ; smData -> mSetupLoggerFcn =
sm_ssci_setupLoggerFcn_codeGen ; smData -> mLogFcn = sm_ssci_logFcn_codeGen ;
smData -> mResidualsFcn = NULL ; smData -> mLinearizeFcn = NULL ; smData ->
mGenerateFcn = NULL ; } static void initLiveLinkToSm ( NeDaePrivateData *
smData ) { smData -> mLiveSmLink = NULL ; smData -> mLiveSmLink_destroy =
NULL ; smData -> mLiveSmLink_copy = NULL ; } void
closedLoop_toTune_b924f1e8_1_NeDaePrivateData_create ( NeDaePrivateData *
smData ) { initBasicAttributes ( smData ) ; initStateVector ( smData ) ;
initAsserts ( smData ) ; initVariables ( smData ) ; initRuntimeParameters (
smData ) ; initIoInfo ( smData ) ; initInputDerivs ( smData ) ;
initDirectFeedthrough ( smData ) ; initOutputDerivProc ( smData ) ;
initMechanismDelegates ( smData ) ; initComputationFcnPtrs ( smData ) ;
initLiveLinkToSm ( smData ) ; }