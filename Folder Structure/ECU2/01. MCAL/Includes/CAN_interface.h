/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#ifndef CAN_INTERFACE_H
#define CAN_INTERFACE_H


// initializing the CAN drive
void CAN_Init(CAN_Config_Struct *ConfigPtr, BitRate_Config_Struct *Bit_Rate_Ptr );

// Responsible for configuring transmit message object
void CAN_Transmit_SetObject(u8 CAN_ID, CAN_MSG_Object *MsgObject);

// Responsible for transmitting message object
void CAN_Transmit_Object(u8 CAN_ID, u8 MsgObjNum, u8 *data_pt);

// Responsible for configuring receive message object
void CAN_Receive_SetObject(u8 CAN_ID, CAN_MSG_Object *MsgObject);

// Responsible for receiving message object
void CAN_Receive_Object(u8 CAN_ID, u8 MsgObjNum, u8 *data_pt);



#endidf