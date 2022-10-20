/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPT.h"
#include "GPT_interface.h"


// Initialize GPT peripheral
void MGPT_Init(void)
{
	// initialize GPT Module
}

// Start the timer
void MGPT_StartTimer(GPT_ConfigType *ConfigPtr, u32 Time)
{
	// Start counting
}

// Stop the timer
void MGPT_StopTimer(GPT_ConfigType *ConfigPtr)
{
	// Stop counting
}

// Enable notification when the timer finish or start
void MGPT_EnableNotif(GPT_ConfigType *ConfigPtr)
{
	// Enable notification
}

// Disable notification when the timer finish or start
void MGPT_DisableNotif(GPT_ConfigType *ConfigPtr)
{
	// Disable notification
}

// Check if the flag is up or not
void MGPT_HasFinished(GPT_ConfigType *ConfigPtr)
{
	// Check if the flag is up or not
}

// Get the information of time elapsed from GPT
u32 MGPT_GetTimeElapsed(GPT_ConfigType *ConfigPtr)
{
	// Get the information of time elapsed from GPT
}

// Get the information of time remaining from GPT
u32 MGPT_GetTimeRemaining(GPT_ConfigType *ConfigPtr)
{
	// Get the information of time remaining from GPT
}

// Clear the flag after the finished time
void MGPT_ClearFlag(GPT_ConfigType *ConfigPtr)
{
	// Clear the flag after the finished time
}
