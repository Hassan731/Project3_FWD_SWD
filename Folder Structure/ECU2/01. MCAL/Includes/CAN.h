/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#ifndef CAN_H
#define CAN_H

typedef struct
{
	u8 BRP;
	u8 SJW;
	u8 TSEG1;
	u8 TSEG2;

}BitRate_Config_Struct;


typedef struct
{
	u8 CANID;
	u8 MODE ;
	u8 BitRate;	

}CAN_Config_Struct;


typedef struct
{
	u32 MsgID;
	u8 MsgObjectNumber;
	u8 MsgIDExtension ;
	u8 MsgLen;
	u32 MsgIDMask;

}CAN_MSG_Object;









#endif