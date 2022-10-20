/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#ifndef GPT_H
#define GPT_H

typedef enum
{
	
	GPT_ONE_SHOT;
	GPT_MODE_PERIODIC;
	
	
}GPT_Mode;

typedef enum
{	
	Channel_0;
	Channel_1;
	Channel_2;
	Channel_3;
	Channel_4;
	Channel_5;
	Channel_6;
	Channel_7;
	Channel_8;
	Channel_9;
	Channel_10;
	Channel_11;
	
}GPT_ChannelID;


typedef enum
{
	
	GPT_PREDEF_TIMER_1US_16BIT = 4;
	GPT_PREDEF_TIMER_1US_24BIT = 4;
	GPT_PREDEF_TIMER_1US_32BIT = 0;
	
	
}GPT_TIM_TYPE;


typedef struct
{
	
	Gpt_ChannelID Channel_ID;
	Gpt_Mode Channel_Mode;
	GPT_TIM_TYPE Timer_Type;

	
	
}GPT_ConfigType;


#endif