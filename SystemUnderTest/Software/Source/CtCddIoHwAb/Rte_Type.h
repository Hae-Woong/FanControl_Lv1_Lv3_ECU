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
 *             File:  Rte_Type.h
 *           Config:  FanControl.dpa
 *        SW-C Type:  CtCddIoHwAb
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  PAI5515
 *
 *      Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"

/* PRQA S 1039 EOF */ /* MD_Rte_1039 */

/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_IdtAdcResult
typedef float64 IdtAdcResult;

# define Rte_TypeDef_IdtPwmValueType
typedef uint16 IdtPwmValueType;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Idt_Signal_Fan_Setpoint
typedef uint16 Idt_Signal_Fan_Setpoint;

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_Idt_Signal_Fan_Fault
typedef uint8 Idt_Signal_Fan_Fault;

#  define Rte_TypeDef_Dcm_Data13ByteType
typedef uint8 Dcm_Data13ByteType[13];

#  define Rte_TypeDef_Dcm_Data17ByteType
typedef uint8 Dcm_Data17ByteType[17];

#  define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

#  define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

#  define Rte_TypeDef_Dcm_Data4ByteType
typedef uint8 Dcm_Data4ByteType[4];

#  define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[1];

#  define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

#  define Rte_TypeDef_ComM_UserHandleType
typedef uint16 ComM_UserHandleType;

#  define Rte_TypeDef_DataPrimitiveType_uint8
typedef uint8 DataPrimitiveType_uint8;

#  define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

#  define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

#  define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

#  define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

#  define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

#  define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

#  define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

#  define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

#  define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

#  define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

#  define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

#  define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

#  define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

#  define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

#  define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

#  define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

#  define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

#  define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

#  define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

#  define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

#  define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

#  define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

#  define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

#  define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

#  define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

#  define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

#  define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

#  define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

#  define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

#  define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

#  define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

#  define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

#  define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

#  define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

#  define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

#  define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

#  define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

#  define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

#  define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

#  define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

#  define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

#  define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

#  define Rte_TypeDef_Idt_Speed_PWM_Struct
typedef struct
{
  Idt_Signal_Fan_Setpoint Speed;
  IdtPwmValueType Pwm;
  Idt_Signal_Fan_Setpoint RequestedSpeed;
} Idt_Speed_PWM_Struct;

# endif

#endif /* RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

*/
