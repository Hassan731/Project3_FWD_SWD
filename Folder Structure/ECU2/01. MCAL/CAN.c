/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "CAN.h"
#include "CAN_interface.h"


// initializing the CAN drive
void CAN_Init(CAN_Config_Struct *ConfigPtr, BitRate_Config_Struct *Bit_Rate_Ptr )
{
	// initialize CAN Module
}

// Responsible for configuring transmit message object
void CAN_Transmit_SetObject(u8 CAN_ID, CAN_MSG_Object *MsgObject)
{
	// configure tranmission parameters
}

// Responsible for transmitting message object
void CAN_Transmit_Object(u8 CAN_ID, u8 MsgObjNum, u8 *data_pt)
{
	// Transmit
}

// Responsible for configuring receive message object
void CAN_Receive_SetObject(u8 CAN_ID, CAN_MSG_Object *MsgObject)
{
	// configure receiving parameters
}

// Responsible for receiving message object
void CAN_Receive_Object(u8 CAN_ID, u8 MsgObjNum, u8 *data_pt)
{
	// Receive
}