/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#ifndef COM_MOD
#define COM_MOD

// Send data of door every 10ms
void SendDoorState(u32 Data);

// Send data of light switch every 20ms
void SendLightSWState(u32 Data);

// Send data of speed every 5ms
void SendSpeed(u32 Data);




#define 