/***********************************/
/*   Author   : Hassan Mahmoud     */
/***********************************/

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H



// Initialize DIO
void MDIO_init(void);

// Set the direction of a pin (Input/Output)
void MDIO_SetPinDirection(PORTS PortNumber, u8 PinNumber, Pin_Direction Direction);

// Set the logical state of the pin (High/Low)
void MDIO_SetPinValue(PORTS PortNumber, u8 PinNumber, Pin_Value Value);

// Toggle the logical state of a pin High to Low and vice versa
void MDIO_TogglePin(PORTS PortNumber, u8 PinNumber);

// Read the logical state of a pin High or Low
u8 MDIO_ReadPin(PORTS PortNumber, u8 PinNumber);














#endif