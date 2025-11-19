/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  CtApController.c
 *           Config:  FanControl.dpa
 *        SW-C Type:  CtApController
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  PAI5515
 *
 *      Description:  C-Code implementation template for SW-C <CtApController>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * BswM_ESH_RunRequest
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DataPrimitiveType_uint8
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_OperationCycleStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_UdsStatusByteType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * IdtAdcResult
 *   The float64 datatype corresponds to IEEE float64-precision 64-bit floating point
 *      type [IEEE 754-1985]. The basic value space of float64 consists of the values
 *      m * 2^e, where m is an integer whose absolute value is less than 2^53, and e is
 *       an integer between -1075 and 970, inclusive. In addition to the basic value 
 *      space described above, the value space of float64 also contains the following 
 *      special values: positive and negative zero, positive and negative infinity 
 *      and not-a-number. 
 *      The order-relation on float64 is: x < y if y - x is positive. 
 *      Positive zero is greater than negative zero. Not-a-number equals itself and 
 *      is greater than all float64 values including positive infinity. 
 *                          
 *      float64 values have a lexical representation consisting of a mantissa followed,
 *      optionally, by the character "E" or "e", followed by an exponent. 
 *      The exponent must be an integer. The mantissa must be a decimal number.
 *      The representations for exponent and mantissa must follow the lexical rules 
 *      for integer and decimal. If the "E" or "e" and the following exponent are 
 *      omitted, an exponent value of 0 is assumed. 
 *      
 *      The special values positive and negative zero, positive and negative infinity
 *      and not-a-number have lexical representations 0, -0, INF, -INF and NaN, 
 *      respectively. 
 *      
 *      For example, -1E4, 1267.43233E12, 12.78e-2, 12 and INF are all 
 *      legal literals for float64.
 *
 * IdtPwmValueType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CtApController.h"
#include "canoeAPI.h" 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "vstdlib.h"
 
 // Max speed as stated in system description
const uint16 MAX_SPEED = 3500;
// Min speed
const uint16 MIN_SPEED = 0;
// Max PWM value in decimal allowed by the PWM Module; equivalent to 0x8000
const uint16 MAX_PWM = 32768;
// Max volt is 5v as defined by adc module
const uint8 MAX_VOLT = 5;

const float64 TRANSIENT_VALUE = 0.25;

const uint16 EMERGENCY_SPEED = 357;

// Count clean cycles
uint8 messageCycleCounter = 0;

// Is fault active?
boolean faultSpeedSignal = 0;

uint8 isDrivingCycleActive = 0;

// Last read speed value
uint64 lastReadValue = 0;

// ErrorDetection declarations and initializations
typedef struct {
  uint8 messageCycle;
  boolean messageReceived;
} messageCycleStatus_t;
messageCycleStatus_t messageCyclesLog[500];
uint8 faultInCurrentDrivingCycle = 0;

float64 ApproximateFloat(float64 number);
void ClearMessageCycleLog();




/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * DataPrimitiveType_uint8: Integer in interval [0...255]
 * IdtAdcResult: Real in interval [1.0...DBL_MAX] with single precision including NaN
 * IdtPwmValueType: Integer in interval [0...32768]
 * Idt_Signal_Fan_Setpoint: Integer in interval [0.0...3500]
 * boolean: Boolean (standard type)
 * float64: Real in interval [-DBL_MAX...DBL_MAX] with double precision including NaN (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * BswM_ESH_RunRequest: Enumeration of integer in interval [0...255] with enumerators
 *   RELEASED (0U)
 *   REQUESTED (1U)
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_AUTHENTICATIONREQUIRED (52U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_CVF_INVALIDTIMEPERIOD (80U)
 *   DCM_E_CVF_INVALIDSIGNATURE (81U)
 *   DCM_E_CVF_INVALIDCHAINOFTRUST (82U)
 *   DCM_E_CVF_INVALIDTYPE (83U)
 *   DCM_E_CVF_INVALIDFORMAT (84U)
 *   DCM_E_CVF_INVALIDCONTENT (85U)
 *   DCM_E_CVF_INVALIDSCOPE (86U)
 *   DCM_E_CVF_INVALIDCERTIFICATEREVOKED (87U)
 *   DCM_E_OWNERSHIPVERIFICATIONFAILED (88U)
 *   DCM_E_CHALLENGECALCULATIONFAILED (89U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...64] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 *   DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED (5U)
 *   DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED (6U)
 *   DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED (7U)
 *   DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED (8U)
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...1] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_UDS_STATUS_TF (1U)
 *   DEM_UDS_STATUS_TF_BflMask 1U (0b00000001)
 *   DEM_UDS_STATUS_TF_BflPn 0
 *   DEM_UDS_STATUS_TF_BflLn 1
 *   DEM_UDS_STATUS_TFTOC (2U)
 *   DEM_UDS_STATUS_TFTOC_BflMask 2U (0b00000010)
 *   DEM_UDS_STATUS_TFTOC_BflPn 1
 *   DEM_UDS_STATUS_TFTOC_BflLn 1
 *   DEM_UDS_STATUS_PDTC (4U)
 *   DEM_UDS_STATUS_PDTC_BflMask 4U (0b00000100)
 *   DEM_UDS_STATUS_PDTC_BflPn 2
 *   DEM_UDS_STATUS_PDTC_BflLn 1
 *   DEM_UDS_STATUS_CDTC (8U)
 *   DEM_UDS_STATUS_CDTC_BflMask 8U (0b00001000)
 *   DEM_UDS_STATUS_CDTC_BflPn 3
 *   DEM_UDS_STATUS_CDTC_BflLn 1
 *   DEM_UDS_STATUS_TNCSLC (16U)
 *   DEM_UDS_STATUS_TNCSLC_BflMask 16U (0b00010000)
 *   DEM_UDS_STATUS_TNCSLC_BflPn 4
 *   DEM_UDS_STATUS_TNCSLC_BflLn 1
 *   DEM_UDS_STATUS_TFSLC (32U)
 *   DEM_UDS_STATUS_TFSLC_BflMask 32U (0b00100000)
 *   DEM_UDS_STATUS_TFSLC_BflPn 5
 *   DEM_UDS_STATUS_TFSLC_BflLn 1
 *   DEM_UDS_STATUS_TNCTOC (64U)
 *   DEM_UDS_STATUS_TNCTOC_BflMask 64U (0b01000000)
 *   DEM_UDS_STATUS_TNCTOC_BflPn 6
 *   DEM_UDS_STATUS_TNCTOC_BflLn 1
 *   DEM_UDS_STATUS_WIR (128U)
 *   DEM_UDS_STATUS_WIR_BflMask 128U (0b10000000)
 *   DEM_UDS_STATUS_WIR_BflPn 7
 *   DEM_UDS_STATUS_WIR_BflLn 1
 * Idt_Signal_Fan_Fault: Enumeration of integer in interval [0...255] with enumerators
 *   Faulty (1U)
 *   NormalOperation (0U)
 *
 * Array Types:
 * ============
 * Dcm_Data1ByteType: Array with 1 element(s) of type uint8
 *
 * Record Types:
 * =============
 * Idt_Speed_PWM_Struct: Record with elements
 *   Speed of type Idt_Signal_Fan_Setpoint
 *   Pwm of type IdtPwmValueType
 *   RequestedSpeed of type Idt_Signal_Fan_Setpoint
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PimFanCurrentDid(void)
 *
 *********************************************************************************************************************/


#define CtApController_START_SEC_CODE
#include "CtApController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0x2_Current_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0x2_Current>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0x2_Current_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0x2_Current_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0x2_Current_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApController_CODE) CBReadData_DID_0x2_Current_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0x2_Current_ReadData (returns application error)
 *********************************************************************************************************************/
    
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Fan_Current_Power_Current_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Fan_Current_Power_Current>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArFanCurrent(void)
 *   void Rte_Exit_ExArFanCurrent(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Fan_Current_Power_Current_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Fan_Current_Power_Current_DCM_E_PENDING
 *   RTE_E_DataServices_Fan_Current_Power_Current_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Fan_Current_Power_Current_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApController_CODE) DataServices_Fan_Current_Power_Current_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Fan_Current_Power_Current_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Fan_Current_Power_Current_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Fan_Current_Power_Current>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArFanCurrent(void)
 *   void Rte_Exit_ExArFanCurrent(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Fan_Current_Power_Current_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Fan_Current_Power_Current_DCM_E_PENDING
 *   RTE_E_DataServices_Fan_Current_Power_Current_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Fan_Current_Power_Current_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApController_CODE) DataServices_Fan_Current_Power_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Fan_Current_Power_Current_ReadData (returns application error)
 *********************************************************************************************************************/
    Rte_Enter_ExArFanCurrent();
    VStdLib_MemCpy(Data, Rte_Pim_PimFanCurrentDid(), sizeof(*Rte_Pim_PimFanCurrentDid()));
    Rte_Exit_ExArFanCurrent();
    
    return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApController_ActuationControl
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 500ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpOBDdrivingCycle_DeOBDdrivingCycle(uint8 *data)
 *   Std_ReturnType Rte_Read_PpSpeed_DeSpeed(Idt_Signal_Fan_Setpoint *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpFault_DeFault(Idt_Signal_Fan_Fault data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_RCtApController_ActuationControl_IrvOBDdrivingCycleOld(void)
 *   Idt_Signal_Fan_Setpoint Rte_IrvRead_RCtApController_ActuationControl_IrvSpeed(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_RCtApController_ActuationControl_IrvActuationControl(const Idt_Speed_PWM_Struct *data)
 *   void Rte_IrvWrite_RCtApController_ActuationControl_IrvOBDdrivingCycleOld(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpPwmDcIoHwAb_SetDutyCycle(IdtPwmValueType *value)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_GetEventUdsStatus(Dem_UdsStatusByteType *UDSStatusByte)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_GetEventUdsStatus(Dem_UdsStatusByteType *UDSStatusByte)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_Mechanical_Fault_Unexpected_High_Current_GetEventUdsStatus(Dem_UdsStatusByteType *UDSStatusByte)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_Mechanical_Fault_Unexpected_Low_Current_GetEventUdsStatus(Dem_UdsStatusByteType *UDSStatusByte)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApController_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_ActuationControl_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApController_CODE) RCtApController_ActuationControl(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_ActuationControl
 *********************************************************************************************************************/
  Dem_UdsStatusByteType eventStatus_highcurrent = 0;
  Dem_UdsStatusByteType eventStatus_lowcurrent = 0;
  Idt_Speed_PWM_Struct speedPwmStruct;
  uint16 actuationSpeed = 0;
  IdtPwmValueType mapped_pwm = 0;
  
  Rte_Call_Event_Mechanical_Fault_Unexpected_High_Current_GetEventUdsStatus(&eventStatus_highcurrent);
  Rte_Call_Event_Mechanical_Fault_Unexpected_Low_Current_GetEventUdsStatus(&eventStatus_lowcurrent);
  actuationSpeed = Rte_IrvRead_RCtApController_ActuationControl_IrvSpeed();
  speedPwmStruct.RequestedSpeed = actuationSpeed;

  // checks if we have any confirmed mechanical DTCs
  // EDSG-00022: When a confirmed DTC indicating a mechanical fault is present, the fan ECU does not actuate the motor
  // EDSG-00123: When a fault in the motor is observed in the current driving cycle, the motor is no longer actuated until the end of the current driving cycle.
  if ((eventStatus_highcurrent & DEM_UDS_STATUS_CDTC) || (eventStatus_lowcurrent & DEM_UDS_STATUS_CDTC) || (faultInCurrentDrivingCycle && isDrivingCycleActive)) {
      faultInCurrentDrivingCycle = 1;
      mapped_pwm = 0;
      actuationSpeed = 0;
  } else {
    // The mapped_signal cannot exceed 0x8000.
    // EDSG-00010: The Fan ECU uses PWM to drive a motor to the received setpoint speed
    // EDSG-00011: The function to compute the PWM ratio for the setpoint speed is set from the factory.
    mapped_pwm = (actuationSpeed * MAX_PWM) / MAX_SPEED;
  }
  Rte_Call_PpPwmDcIoHwAb_SetDutyCycle(&mapped_pwm);
  speedPwmStruct.Speed = actuationSpeed;
  speedPwmStruct.Pwm = mapped_pwm;
  Rte_IrvWrite_RCtApController_ActuationControl_IrvActuationControl(&speedPwmStruct);
  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApController_ErrorDetection
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 500ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpFault_DeFault(Idt_Signal_Fan_Fault data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   void Rte_IrvRead_RCtApController_ErrorDetection_IrvActuationControl(Idt_Speed_PWM_Struct *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpAdcReadIoHwAb_ReadGroup(IdtAdcResult *adcResult)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_Mechanical_Fault_Unexpected_High_Current_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_Mechanical_Fault_Unexpected_Low_Current_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApController_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_ErrorDetection_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApController_CODE) RCtApController_ErrorDetection(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_ErrorDetection
 *********************************************************************************************************************/
  float32 pwm_ratio = 0;
  float64 expected_current = 0;
  float64 measured_current = 0;
  float64 expected_adc = 0;
  float64 power_adc = 0.0;
  Idt_Speed_PWM_Struct actuationControl;

  if (isDrivingCycleActive) {

    // EDSG-00012: The Fan ECU observes the current draw of the motor
    Rte_Call_PpAdcReadIoHwAb_ReadGroup(&power_adc);

    Rte_IrvRead_RCtApController_ErrorDetection_IrvActuationControl(&actuationControl);
    
    if (actuationControl.Pwm > 0) {
      // EDSG-00013: The Fan ECU identifies an open loop in the power circuit for the motor.
      // if PWM has a value and returning adc value corresponds to 5% DC (negligible)
      if (power_adc < TRANSIENT_VALUE) {
          faultInCurrentDrivingCycle = 1;
          // EDSG-00014: In case of an open loop, the Fan ECU writes a DTC indicating an electrical fault.
          (void)Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
      } else {
          (void)Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_SetEventStatus(DEM_EVENT_STATUS_PREPASSED);
      }

      // EDSG-00015: The Fan ECU identifies a short circuit in the power circuit for the motor
      if (power_adc > (MAX_VOLT - TRANSIENT_VALUE)) {
          faultInCurrentDrivingCycle = 1;
          // EDSG-00016: In case of a short circuit, the Fan ECU writes a DTC indicating an electrical fault.
          (void)Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
      } else {
          (void)Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_SetEventStatus(DEM_EVENT_STATUS_PREPASSED);
      }

      if (power_adc >= TRANSIENT_VALUE) {
          pwm_ratio = actuationControl.Pwm / (float32)(MAX_PWM);
          expected_current = (pwm_ratio * ((float64)MAX_VOLT - 2*TRANSIENT_VALUE)) + TRANSIENT_VALUE;
          expected_current = ApproximateFloat(expected_current);
          measured_current = ApproximateFloat(power_adc);

          // EDSG-00018: The Fan ECU identifies overly high current draw of the motor for the current PWM ratio
          if (measured_current - expected_current >= TRANSIENT_VALUE) {
              faultInCurrentDrivingCycle = 1;
              // EDSG-00019: In case of overly high current draw, the Fan ECU writes a DTC indicating a mechanical fault.
              (void)Rte_Call_Event_Mechanical_Fault_Unexpected_High_Current_SetEventStatus(DEM_EVENT_STATUS_FAILED);
          } else {
              (void)Rte_Call_Event_Mechanical_Fault_Unexpected_High_Current_SetEventStatus(DEM_EVENT_STATUS_PASSED);
          }

          // EDSG-00020: The Fan ECU identifies unexpectedly low current draw of the motor for the current PWM ratio
          if (expected_current - measured_current >= TRANSIENT_VALUE) {
              faultInCurrentDrivingCycle = 1;
              // EDSG-00021: In case of unexpectedly low current draw, the Fan ECU writes a DTC indicating a mechanical fault.
              (void)Rte_Call_Event_Mechanical_Fault_Unexpected_Low_Current_SetEventStatus(DEM_EVENT_STATUS_FAILED);
          } else {
              (void)Rte_Call_Event_Mechanical_Fault_Unexpected_Low_Current_SetEventStatus(DEM_EVENT_STATUS_PASSED);
          }
      }
    }

    if ((faultInCurrentDrivingCycle || faultSpeedSignal) && actuationControl.RequestedSpeed > 0) {
      Rte_Write_PpFault_DeFault(1);
    }
    else {
      Rte_Write_PpFault_DeFault(0);
    }
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApController_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpBswMPostRunRequestCtApController_requestedMode(BswM_ESH_RunRequest data)
 *   Std_ReturnType Rte_Write_PpBswMRunRequestCtApController_requestedMode(BswM_ESH_RunRequest data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_RCtApController_Init_IrvOBDdrivingCycleOld(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_RCtApController_Init_IrvOBDdrivingCycleOld(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_OpCycle_OBD_driving_cycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApController_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApController_CODE) RCtApController_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_Init
 *********************************************************************************************************************/
  (void)Rte_Call_OpCycle_OBD_driving_cycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
  (void)Rte_IrvWrite_RCtApController_Init_IrvOBDdrivingCycleOld(1);

  (void)Rte_Write_PpBswMRunRequestCtApController_requestedMode(REQUESTED);
  (void)Rte_Write_PpBswMPostRunRequestCtApController_requestedMode(REQUESTED);

  (void)Rte_Call_PpComMUserRequestCtApController_RequestComMode(COMM_FULL_COMMUNICATION);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApController_ReadSpeed
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpOBDdrivingCycle_DeOBDdrivingCycle(uint8 *data)
 *   Std_ReturnType Rte_Read_PpSpeed_DeSpeed(Idt_Signal_Fan_Setpoint *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpFault_DeFault(Idt_Signal_Fan_Fault data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(boolean data)
 *   void Rte_IrvWrite_RCtApController_ReadSpeed_IrvSpeed(Idt_Signal_Fan_Setpoint data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApController_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_ReadSpeed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApController_CODE) RCtApController_ReadSpeed(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApController_ReadSpeed
 *********************************************************************************************************************/
  boolean obd_driving_cycle = 0;
  uint16 speed = 0;
  Std_ReturnType returnCode;

  messageCycleStatus_t msgCycleStatus = { .messageCycle = 0, .messageReceived = 1 };
  int missedMsgCounter = 0;


  // READ current DrivingCycle value
  Rte_Read_PpOBDdrivingCycle_DeOBDdrivingCycle(&obd_driving_cycle);

  // End of the driving cycle 1 --> 0 (end)
  if (obd_driving_cycle == 0 && obd_driving_cycle != Rte_IrvRead_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld()) {
    Rte_Call_OpCycle_OBD_driving_cycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
    Rte_IrvWrite_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(0);
    isDrivingCycleActive = 0;
    faultInCurrentDrivingCycle = 0;
    Rte_Write_PpFault_DeFault(0);
  } 
  // Start of the driving cycle 0 --> 1 (start)
  else if (obd_driving_cycle == 1 && obd_driving_cycle != Rte_IrvRead_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld()) {
    Rte_Call_OpCycle_OBD_driving_cycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
    Rte_IrvWrite_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(1);
    isDrivingCycleActive = 1;
  }

  // IF DRIVING_CYCLE
  if (isDrivingCycleActive) {
    // EDSG-00009: The Fan ECU receives a fan speed setpoint
    returnCode = Rte_Read_PpSpeed_DeSpeed(&speed);
 
    // IF INVALID RANGE
    if ( MIN_SPEED > speed || speed > MAX_SPEED ) { //Min: 0 MAx: 3500 --> speed minus value or over 3500
      // try to stay sane and overwrite faulty input
      if (speed != lastReadValue) { //init of lastReadValue : 0
        // first time we receive this value, time to report
        (void)Rte_Call_DiagnosticMonitor_P_DTC_0x700006_SetEventStatus(DEM_EVENT_STATUS_FAILED);
      }
      lastReadValue = speed;
      speed = EMERGENCY_SPEED; //357
      // Reset counter for succesful cycles and set local informer
      messageCycleCounter = 0;
      faultSpeedSignal = 1;
    }
    else {
      // NO ERROR IN THIS CYCLE AND WE RECEIVED A GOOD SPEED!
      if (messageCycleCounter < 255) {
        messageCycleCounter += 1;
      }

      // IF >= 10 SUCCESFUL CYLCLES AND FAULTY STATE
      if ((messageCycleCounter >= 10 ) && (faultSpeedSignal == 1)) {
        // Time to clear our error state
        (void)Rte_Call_DiagnosticMonitor_P_DTC_0x700006_SetEventStatus(DEM_EVENT_STATUS_PASSED);
        faultSpeedSignal = 0;
      }
      
      if ( faultSpeedSignal == 1 ) {
        // We have a good value but have not yet reached 10 succesful cycles
        // Stick with emergency value for now...
        speed = EMERGENCY_SPEED; //357
      }
    }
    // Write value (may have been overwritten for safety reasons)
    Rte_IrvWrite_RCtApController_ReadSpeed_IrvSpeed(speed);
    //RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle(& speed); //-----------------> IoHwAb == Speed (x)
  } else {
    // IF DRIVINC_CYCLE NOT ACTIVE
    // Acknowledge and still provide value
    Rte_IrvWrite_RCtApController_ReadSpeed_IrvSpeed((uint16) 0);
    lastReadValue = 0;
    faultSpeedSignal = 0;
    messageCycleCounter = 0;
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtApController_STOP_SEC_CODE
#include "CtApController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
float64 ApproximateFloat(float64 number) {

  return (sint64)((number * 100) / 100);

}

void ClearMessageCycleLog() {
  messageCycleCounter = 0;
  VStdLib_MemSet(messageCyclesLog, 0, sizeof messageCyclesLog);
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.*/
