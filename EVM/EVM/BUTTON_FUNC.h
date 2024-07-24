#ifndef	BUTTON_FUNC.h
#define BUTTON_FUNC.h
#include "DIO_FUNC.h"
#define	F_CPU 8000000UL
#include <util/delay.h>
void	BUTTON_INIT			(uint_8 port, uint_8 pin);
uint_8	BUTTON_READ_STATE	(uint_8 port, uint_8 pin);
#endif