/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: VTTCntrl
 *           Program: 
 *          Customer: 
 *       Expiry Date: Not restricted
 *    License Scope : The usage is restricted to PAI5515
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: VttCntrl_Pwm_Callout_Stubs.c
 *   Generation Time: 2024-10-08 13:04:37
 *           Project: FanControl - Version 1.0
 *          Delivery: PAI5515
 *      Tool Version: DaVinci Configurator Classic (beta) 5.26.30 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Classic and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


# define VTTPWM_CALLOUT_STUBS_SOURCE


/**********************************************************************************************************************
*  INCLUDES
*********************************************************************************************************************/

#include "VttCntrl_Pwm.h"

/**********************************************************************************************************************
*  PRAGMAS
*********************************************************************************************************************/
/* The following pragmas ensure that all variables of this module are places in memory that is not cleared during a
 * simulated ECU reset/poweron */
#pragma bss_seg()
#pragma data_seg()

/**********************************************************************************************************************
*  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/* Import global definitions via extern from VttCntrl_Pwm.c */

extern CANoeAPI_SysVar_CompuMethod Pwm_DutyCycle_CompuMethod;
extern CANoeAPI_SysVar_CompuMethod Pwm_Frequency_CompuMethod;

extern CANoeAPI_SysVar_CompuMethod Pwm_Polarity_CompuMethod;
extern CANoeAPI_SysVar_CompuMethod Pwm_State_CompuMethod;


/**********************************************************************************************************************
*  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/* Individual definitions for each PWM channel */

/**********************************************************************
 * PWM_FanMotor
 **********************************************************************/

CANoeAPI_SysVar_StructMember_Scale Pwm_PWM_FanMotor_Value_Scalings[] =
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Pwm_PWM_FanMotor_Value_Scalings>
 *********************************************************************************************************************/
  {0, 0, 1, 0, ""},
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

};

uint16 Pwm_PWM_FanMotor_Value_Function(uint16 dutycycle, uint32 period, uint8 outputEnable, Pwm_OutputStateType polarity)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Pwm_PWM_FanMotor_Value_Function>
 *********************************************************************************************************************/
  return dutycycle;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

};

CANoeAPI_SysVar_CompuMethod Pwm_PWM_FanMotor_Value_CompuMethod =
{
    Pwm_PWM_FanMotor_Value_Scalings,
    sizeof(Pwm_PWM_FanMotor_Value_Scalings) / sizeof(Pwm_PWM_FanMotor_Value_Scalings[0]),
    0,
    0,
};

CANoeAPI_SysVar_StructMember Pwm_PWM_FanMotor_Pin_StructMembers[] = {
  SV_STRUCT_DEFINE_MEMBER_AND_COMPUMETHOD("value", SV_TYPE_UINT16, 16, &Pwm_PWM_FanMotor_Value_CompuMethod),
  SV_STRUCT_DEFINE_MEMBER_AND_COMPUMETHOD("dutyCycle", SV_TYPE_UINT16, 16, &Pwm_DutyCycle_CompuMethod),
  SV_STRUCT_BEGIN_DEFINITION("pinDetails", "Types"),
    SV_STRUCT_DEFINE_MEMBER_AND_COMPUMETHOD("frequency", SV_TYPE_UINT32, 32, &Pwm_Frequency_CompuMethod),
    SV_STRUCT_DEFINE_MEMBER_AND_COMPUMETHOD("polarity", SV_TYPE_BOOLEAN, 8, &Pwm_Polarity_CompuMethod),
    SV_STRUCT_DEFINE_MEMBER_AND_COMPUMETHOD("idle", SV_TYPE_BOOLEAN, 8, &Pwm_State_CompuMethod),
  SV_STRUCT_END_DEFINITION(),
};


/* Definition of SysVar interfaces and channel SysVars */

CANoeAPI_SysVar_StructDefinition Pwm_Interfaces[] =
{
  SV_STRUCT_DEFINE("Pwm_PWM_FanMotor_Pin_StructDefs", Pwm_PWM_FanMotor_Pin_StructMembers),
};

CANoeAPI_SysVar_Struct Pwm_Channels[] =
{
  SV_STRUCT("Pwm","PWM_FanMotor", "Pwm::Types::Pwm_PWM_FanMotor_Pin_StructDefs", 0, 0),
};

#if 0
#endif


/**********************************************************************************************************************
*  END OF FILE: VttCntrl_Pwm_Callout_Stubs.c
*********************************************************************************************************************/


