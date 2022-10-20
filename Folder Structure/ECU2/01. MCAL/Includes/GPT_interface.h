/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#ifndef GPT_INTERFACE_H
#define GPT_INTERFACE_H



// Initialize GPT peripheral
void MGPT_Init(void);

// Start the timer
void MGPT_StartTimer(GPT_ConfigType *ConfigPtr, u32 Time);

// Stop the timer
void MGPT_StopTimer(GPT_ConfigType *ConfigPtr);

// Enable notification when the timer finish or start
void MGPT_EnableNotif(GPT_ConfigType *ConfigPtr);

// Disable notification when the timer finish or start
void MGPT_DisableNotif(GPT_ConfigType *ConfigPtr);

// Check if the flag is up or not
void MGPT_HasFinished(GPT_ConfigType *ConfigPtr);

// Get the information of time elapsed from GPT
u32 MGPT_GetTimeElapsed(GPT_ConfigType *ConfigPtr);

// Get the information of time remaining from GPT
u32 MGPT_GetTimeRemaining(GPT_ConfigType *ConfigPtr);

// Clear the flag after the finished time
void MGPT_ClearFlag(GPT_ConfigType *ConfigPtr);







#endif