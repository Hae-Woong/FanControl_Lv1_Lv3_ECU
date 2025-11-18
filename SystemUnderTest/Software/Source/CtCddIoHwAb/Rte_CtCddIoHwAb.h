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
 *             File:  Rte_CtCddIoHwAb.h
 *           Config:  FanControl.dpa
 *        SW-C Type:  CtCddIoHwAb
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  PAI5515
 *
 *      Description:  Application header file for SW-C <CtCddIoHwAb> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTCDDIOHWAB_H
# define RTE_CTCDDIOHWAB_H

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

# include "Rte_CtCddIoHwAb_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtCddIoHwAb
{
  /* dummy entry */
  uint8 _dummy;
};
typedef struct Rte_CDS_CtCddIoHwAb Rte_CDS_CtCddIoHwAb;

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONSTP2CONST(struct Rte_CDS_CtCddIoHwAb, RTE_CONST, RTE_CONST) Rte_Inst_CtCddIoHwAb;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef RTE_INSTANCECONSTP2CONST(struct Rte_CDS_CtCddIoHwAb, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 1507 */ /* MD_Rte_1507 */


# define CtCddIoHwAb_START_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_Init RCtCddIoHwAb_Init
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadGroup> of PortPrototype <PpAdcReadIoHwAb>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup(IdtAdcResult *adcResult)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup(P2VAR(IdtAdcResult, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) adcResult); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDutyCycle> of PortPrototype <PpPwmDcIoHwAb>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle(IdtPwmValueType *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle(P2VAR(IdtPwmValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Pwm_DeInit> of PortPrototype <PpPwmDeInitIoHwAb>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit(void); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Pwm_Init> of PortPrototype <PpPwmInitIoHwAb>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init(void); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define CtCddIoHwAb_STOP_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTCDDIOHWAB_H */

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
