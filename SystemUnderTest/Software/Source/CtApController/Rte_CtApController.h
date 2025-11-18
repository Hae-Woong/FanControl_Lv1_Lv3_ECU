/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_CtApController.h
 *           Config:  FanControl.dpa
 *        SW-C Type:  CtApController
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  PAI5515
 *
 *      Description:  Application header file for SW-C <CtApController> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAPCONTROLLER_H
# define RTE_CTAPCONTROLLER_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtApController_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtApController
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PimFanCurrentDid;
  /* Vendor specific section */
};
typedef struct Rte_CDS_CtApController Rte_CDS_CtApController;

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONSTP2CONST(struct Rte_CDS_CtApController, RTE_CONST, RTE_CONST) Rte_Inst_CtApController;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef RTE_INSTANCECONSTP2CONST(struct Rte_CDS_CtApController, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 1507 */ /* MD_Rte_1507 */


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpFault_DeFault (0U)
# define Rte_InitValue_PpOBDdrivingCycle_DeOBDdrivingCycle (1U)
# define Rte_InitValue_PpSpeed_DeSpeed (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApController_PpOBDdrivingCycle_DeOBDdrivingCycle(P2VAR(uint8, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApController_PpSpeed_DeSpeed(P2VAR(Idt_Signal_Fan_Setpoint, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApController_PpBswMPostRunRequestCtApController_requestedMode(BswM_ESH_RunRequest data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApController_PpBswMRunRequestCtApController_requestedMode(BswM_ESH_RunRequest data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApController_PpFault_DeFault(Idt_Signal_Fan_Fault data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_GetEventUdsStatus(P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) UDSStatusByte); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_GetEventUdsStatus(P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) UDSStatusByte); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_High_Current_GetEventUdsStatus(P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) UDSStatusByte); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_High_Current_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_Low_Current_GetEventUdsStatus(P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) UDSStatusByte); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_Low_Current_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_OpCycle_OBD_driving_cycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_PpAdcReadIoHwAb_ReadGroup(P2VAR(IdtAdcResult, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) adcResult); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_PpComMUserRequestCtApController_RequestComMode(ComM_ModeType ComMode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApController_PpPwmDcIoHwAb_SetDutyCycle(P2VAR(IdtPwmValueType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) value); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_CtApController_RCtApController_ActuationControl_IrvOBDdrivingCycleOld(void);
FUNC(Idt_Signal_Fan_Setpoint, RTE_CODE) Rte_IrvRead_CtApController_RCtApController_ActuationControl_IrvSpeed(void);
FUNC(void, RTE_CODE) Rte_IrvWrite_CtApController_RCtApController_ActuationControl_IrvActuationControl(P2CONST(Idt_Speed_PWM_Struct, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_DATA) data);
FUNC(void, RTE_CODE) Rte_IrvWrite_CtApController_RCtApController_ActuationControl_IrvOBDdrivingCycleOld(boolean data);
FUNC(void, RTE_CODE) Rte_IrvRead_CtApController_RCtApController_ErrorDetection_IrvActuationControl(P2VAR(Idt_Speed_PWM_Struct, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) data);
FUNC(boolean, RTE_CODE) Rte_IrvRead_CtApController_RCtApController_Init_IrvOBDdrivingCycleOld(void);
FUNC(void, RTE_CODE) Rte_IrvWrite_CtApController_RCtApController_Init_IrvOBDdrivingCycleOld(boolean data);
FUNC(boolean, RTE_CODE) Rte_IrvRead_CtApController_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(void);
FUNC(void, RTE_CODE) Rte_IrvWrite_CtApController_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(boolean data);
FUNC(void, RTE_CODE) Rte_IrvWrite_CtApController_RCtApController_ReadSpeed_IrvSpeed(Idt_Signal_Fan_Setpoint data);

FUNC(void, RTE_CODE) Rte_Enter_CtApController_ExArFanCurrent(void);
FUNC(void, RTE_CODE) Rte_Exit_CtApController_ExArFanCurrent(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpOBDdrivingCycle_DeOBDdrivingCycle Rte_Read_CtApController_PpOBDdrivingCycle_DeOBDdrivingCycle
# define Rte_Read_PpSpeed_DeSpeed Rte_Read_CtApController_PpSpeed_DeSpeed


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpBswMPostRunRequestCtApController_requestedMode Rte_Write_CtApController_PpBswMPostRunRequestCtApController_requestedMode
# define Rte_Write_PpBswMRunRequestCtApController_requestedMode Rte_Write_CtApController_PpBswMRunRequestCtApController_requestedMode
# define Rte_Write_PpFault_DeFault Rte_Write_CtApController_PpFault_DeFault


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_GetEventUdsStatus Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_GetEventUdsStatus
# define Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_SetEventStatus Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Open_SetEventStatus
# define Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_GetEventUdsStatus Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_GetEventUdsStatus
# define Rte_Call_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_SetEventStatus Rte_Call_CtApController_Event_Electrical_Fault_Fan_Motor_Control_Circuit_Short_SetEventStatus
# define Rte_Call_Event_Mechanical_Fault_Unexpected_High_Current_GetEventUdsStatus Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_High_Current_GetEventUdsStatus
# define Rte_Call_Event_Mechanical_Fault_Unexpected_High_Current_SetEventStatus Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_High_Current_SetEventStatus
# define Rte_Call_Event_Mechanical_Fault_Unexpected_Low_Current_GetEventUdsStatus Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_Low_Current_GetEventUdsStatus
# define Rte_Call_Event_Mechanical_Fault_Unexpected_Low_Current_SetEventStatus Rte_Call_CtApController_Event_Mechanical_Fault_Unexpected_Low_Current_SetEventStatus
# define Rte_Call_OpCycle_OBD_driving_cycle_SetOperationCycleState Rte_Call_CtApController_OpCycle_OBD_driving_cycle_SetOperationCycleState
# define Rte_Call_PpAdcReadIoHwAb_ReadGroup Rte_Call_CtApController_PpAdcReadIoHwAb_ReadGroup
# define Rte_Call_PpComMUserRequestCtApController_RequestComMode Rte_Call_CtApController_PpComMUserRequestCtApController_RequestComMode
# define Rte_Call_PpPwmDcIoHwAb_SetDutyCycle Rte_Call_CtApController_PpPwmDcIoHwAb_SetDutyCycle


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_ExArFanCurrent Rte_Enter_CtApController_ExArFanCurrent /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
# define Rte_Exit_ExArFanCurrent Rte_Exit_CtApController_ExArFanCurrent /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvRead_RCtApController_ActuationControl_IrvOBDdrivingCycleOld() \
  Rte_IrvRead_CtApController_RCtApController_ActuationControl_IrvOBDdrivingCycleOld()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvRead_RCtApController_ActuationControl_IrvSpeed() \
  Rte_IrvRead_CtApController_RCtApController_ActuationControl_IrvSpeed()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvWrite_RCtApController_ActuationControl_IrvActuationControl(data) \
  Rte_IrvWrite_CtApController_RCtApController_ActuationControl_IrvActuationControl(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvWrite_RCtApController_ActuationControl_IrvOBDdrivingCycleOld(data) \
  Rte_IrvWrite_CtApController_RCtApController_ActuationControl_IrvOBDdrivingCycleOld(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvRead_RCtApController_ErrorDetection_IrvActuationControl(data) \
  Rte_IrvRead_CtApController_RCtApController_ErrorDetection_IrvActuationControl(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvRead_RCtApController_Init_IrvOBDdrivingCycleOld() \
  Rte_IrvRead_CtApController_RCtApController_Init_IrvOBDdrivingCycleOld()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvWrite_RCtApController_Init_IrvOBDdrivingCycleOld(data) \
  Rte_IrvWrite_CtApController_RCtApController_Init_IrvOBDdrivingCycleOld(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvRead_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld() \
  Rte_IrvRead_CtApController_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvWrite_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(data) \
  Rte_IrvWrite_CtApController_RCtApController_ReadSpeed_IrvOBDdrivingCycleOld(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvWrite_RCtApController_ReadSpeed_IrvSpeed(data) \
  Rte_IrvWrite_CtApController_RCtApController_ReadSpeed_IrvSpeed(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_PimFanCurrentDid() (Rte_Inst_CtApController->Pim_PimFanCurrentDid)




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


# define CtApController_START_SEC_CODE
# include "CtApController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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

# define RTE_RUNNABLE_CBReadData_DID_0x2_Current_ReadData CBReadData_DID_0x2_Current_ReadData
FUNC(Std_ReturnType, CtApController_CODE) CBReadData_DID_0x2_Current_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

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

# define RTE_RUNNABLE_DataServices_Fan_Current_Power_Current_ConditionCheckRead DataServices_Fan_Current_Power_Current_ConditionCheckRead
FUNC(Std_ReturnType, CtApController_CODE) DataServices_Fan_Current_Power_Current_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

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

# define RTE_RUNNABLE_DataServices_Fan_Current_Power_Current_ReadData DataServices_Fan_Current_Power_Current_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, CtApController_CODE) DataServices_Fan_Current_Power_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, CtApController_CODE) DataServices_Fan_Current_Power_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPCONTROLLER_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

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
 *   void Rte_IrvWrite_RCtApController_ActuationControl_IrvActuationControl(Idt_Speed_PWM_Struct *data)
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

# define RTE_RUNNABLE_RCtApController_ActuationControl RCtApController_ActuationControl
FUNC(void, CtApController_CODE) RCtApController_ActuationControl(void);

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

# define RTE_RUNNABLE_RCtApController_ErrorDetection RCtApController_ErrorDetection
FUNC(void, CtApController_CODE) RCtApController_ErrorDetection(void);

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

# define RTE_RUNNABLE_RCtApController_Init RCtApController_Init
FUNC(void, CtApController_CODE) RCtApController_Init(void);

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

# define RTE_RUNNABLE_RCtApController_ReadSpeed RCtApController_ReadSpeed
FUNC(void, CtApController_CODE) RCtApController_ReadSpeed(void);

# define CtApController_STOP_SEC_CODE
# include "CtApController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_CSDataServices_DID_0x2_Current_E_NOT_OK (1U)

# define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

# define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

# define RTE_E_DataServices_Fan_Current_Power_Current_DCM_E_PENDING (10U)

# define RTE_E_DataServices_Fan_Current_Power_Current_E_NOT_OK (1U)

# define RTE_E_DiagnosticMonitor_E_NOT_OK (1U)

# define RTE_E_OperationCycle_E_NOT_OK (1U)

# define RTE_E_OperationCycle_E_OK (0U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAPCONTROLLER_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_1507:  MISRA rule: Rule5.6
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
