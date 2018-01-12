/*
 * mrf24j40if.c
 *
 *  Created on: 16 окт. 2017 г.
 *      Author: Dumitru
 */


/**************Imports***********************************/

#include "mrf24j40if.h"
//#include "SPI/spi.h"               /* Include the spi header */
//#include "Timer/Timer.h"           /* Include the timer header */


/**************Private Macro Definitions*****************/



/**************Private Type Definitions******************/



/**************Private Variable Definitions**************/




/**************Public Variable Definitions***************/



/**************Private Function Definitions**************/





/**************Public Function Definitions***************/

/* ---------------------------- SPI dependent code ---------------------------- */

void MRF24J40IF_SpiTransmit(uint8_t v) // write 1 byte to SPI
{
    /* Interface for transmit data through SPI */
}

uint8_t MRF24J40IF_SpiReceive(void) // read 1 byte from SPI
{
    /* Interface for receive data through SPI */
}




/* ---------------------------- Timer dependent code ---------------------------- */

void MRF24J40IF_Delay_ms(uint16_t miliseconds){
    /* Delay function (simple delay based on onChip timer is not compatible with OS_Delay) */
}


uint32_t MRF24J40IF_ElapsedTimeSince(uint32_t time){
    /* "time" represent the saved Timer tick or SYS tick and returning the difference between actual value of
     * SYS tick (timer tick) and "time" parameter */
}

uint32_t MRF24J40IF_GetSysMilliseconds(void){
    /* This function returning milliseconds converted value of SYS tick */
}

