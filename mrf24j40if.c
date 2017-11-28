/*
 * mrf24j40if.c
 *
 *  Created on: 16 окт. 2017 г.
 *      Author: Dumitru
 */


/**************Imports***********************************/

#include "mrf24j40if.h"
#include "SPI/spi.h"
#include "Timer/Timer.h"
#include "CustomLib/custom_string.h"


/**************Private Macro Definitions*****************/



/**************Private Type Definitions******************/



/**************Private Variable Definitions**************/




/**************Public Variable Definitions***************/



/**************Private Function Definitions**************/





/**************Public Function Definitions***************/


void MRF24J40IF_SpiTransmit(uint8_t v) // write 1 byte to SPI
{
    SPI_Transmit(v);
}

uint8_t MRF24J40IF_SpiReceive(void) // read 1 byte from SPI
{
    return SPI_Receive();
}

void MRF24J40IF_Delay_ms(uint16_t miliseconds){
    Delay_ms(miliseconds);
}


uint32_t MRF24J40IF_ElapsedTimeSince(uint32_t time){
    return ElapsedTimeSince(time);
}

uint32_t MRF24J40IF_GetSysMilliseconds(void){
    return (uint32_t)GetMilliseconds();
}

