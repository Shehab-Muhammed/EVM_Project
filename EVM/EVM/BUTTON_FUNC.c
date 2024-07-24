#include "BUTTON_FUNC.h"
void	BUTTON_INIT			(uint_8 port, uint_8 pin)
{
	DIO_SET_PIN_DIRECTION(port,pin,PIN_INPUT);
	DIO_PORT_PIN_WRITE	 (port,pin,PIN_HIGH); //---------->INTERNAL_PULL_UP
}
uint_8	BUTTON_READ_STATE	(uint_8 port, uint_8 pin)
{
	uint_8 state;
	state = DIO_PIN_READ(port,pin);
	return state;
}