/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#ifndef ADC_INTERFAC_H
#define ADC_INTERFAC_H


// Initialize ADC peripheral
void MADC_Init(void);

// Start the conversion of a defined channel and get its reading
u32 MADC_Convert(ADC_ID ADC_n, ADC_Channel Channel_n);










#endif