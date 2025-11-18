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
 *             File:  CtCddIoHwAb.c
 *        SW-C Type:  CtCddIoHwAb
 *
 *        Generator:  MICROSAR RTE ContractPhase Generator Version 4.39.00
 *                    RTE Core Version 4.39.00
 *          License:  DVSwcGen
 *
 *      Description:  C-Code implementation template for SW-C <CtCddIoHwAb>
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

#include "Rte_CtCddIoHwAb.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
 * IdtAdcResult: Real in interval [1.0...DBL_MAX] with single precision including NaN
 * IdtPwmValueType: Integer in interval [0...32768]
 * float64: Real in interval [-DBL_MAX...DBL_MAX] with double precision including NaN (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 *
 *********************************************************************************************************************/


#define CtCddIoHwAb_START_SEC_CODE
#include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtCddIoHwAb_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
   * Symbol: RCtCddIoHwAb_Init
   *********************************************************************************************************************/


  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
   *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup(P2VAR(IdtAdcResult, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) adcResult) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
   * Symbol: RCtCddIoHwAb_PpAdcReadIoHwAb_ReadGroup
   *********************************************************************************************************************/


  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
   *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle(P2VAR(IdtPwmValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
   * Symbol: RCtCddIoHwAb_PpPwmDcIoHwAb_SetDutyCycle
   *********************************************************************************************************************/


  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
   *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
   * Symbol: RCtCddIoHwAb_PpPwmDeInitIoHwAb_Pwm_DeInit
   *********************************************************************************************************************/


  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
   *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
   * Symbol: RCtCddIoHwAb_PpPwmInitIoHwAb_Pwm_Init
   *********************************************************************************************************************/


  /**********************************************************************************************************************
   * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
   *********************************************************************************************************************/
}


#define CtCddIoHwAb_STOP_SEC_CODE
#include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
     Reason:     The parameters are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
