/*
 * mrf24j40ma_pinout.c
 *
 *  Created on: 16 окт. 2017 г.
 *      Author: Dumitru
 */


/**************Imports***********************************/

#include <MRF24J40/mrf24j40ma_pinout.h>
#include "IO/io.h"

/**************Private Macro Definitions*****************/

//PINOUT for MSP430FR5969

#define ZB_RST_PORT             GPIO_PORT_P3
#define ZB_RST_PIN              GPIO_PIN4         //P3.4
#define ZB_WAKE_PORT            GPIO_PORT_P3
#define ZB_WAKE_PIN             GPIO_PIN5         //P3.5
#define ZB_INT_PORT             GPIO_PORT_P3
#define ZB_INT_PIN              GPIO_PIN6         //P3.6

#define ZB_SDI_PORT             GPIO_MOSI_PORT
#define ZB_SDI_PIN              GPIO_MOSI_PIN     //P1.6    MOSI
#define ZB_SCK_PORT             GPIO_SCLK_PORT
#define ZB_SCK_PIN              GPIO_SCLK_PIN      //P2.2    SCLK
#define ZB_CS_PORT              GPIO_PORT_P1
#define ZB_CS_PIN               GPIO_PIN3         //P1.3
#define ZB_SDO_PORT             GPIO_MISO_PORT
#define ZB_SDO_PIN              GPIO_MISO_PIN     //P1.7    MISO

/*
 *               ___________________________
                |  _______________________  |
                | |                       | |
                | |                       | |
                | |                       | |
                | |   _____       _____   | |
                | |  |     |     |     |  | |
                | |  |     |     |     |  | |
                | |  |     |     |     |  | |
                | |  |     |     |     |  | |
                | |  |     |     |     |  | |
                | |__|     |_____|     |__| |
                |___________________________|
                |                           |
                >> GND (1)       (12) GND  <<
                |                           |
   ZB_RST_PIN   >> /RST(2)       (11) GND  <<
                |                           |
   ZB_WAKE_PIN  >> WAKE(3)       (10) Vin  <<
                |                           |
   ZB_INT_PIN   >> INT (4)        (9) NC   <<
                |                           |
   ZB_SDI_PIN   >> SDI (5)        (8) /CS  <<   ZB_CS_PIN
                |                           |
   ZB_SCK_PIN   >> SCK (6)        (7) SDO  <<   ZB_SDO_PIN
                |___________________________|
 *
*/


/**************Private Type Definitions******************/



/**************Private Variable Definitions**************/




/**************Public Variable Definitions***************/



/**************Private Function Definitions**************/





/**************Public Function Definitions***************/


void MRF24J40_ChipSelectPullDown(void){

    GPIO_setOutputLowOnPin(ZB_CS_PORT, ZB_CS_PIN);
}

void MRF24J40_ChipSelectPullUp(void){

    GPIO_setOutputHighOnPin(ZB_CS_PORT, ZB_CS_PIN);
}

void MRF24J40_WakePinPullUp(void){

    GPIO_setOutputHighOnPin(ZB_WAKE_PORT, ZB_WAKE_PIN);
}

void MRF24J40_WakePinPullDown(void){

    GPIO_setOutputLowOnPin(ZB_WAKE_PORT, ZB_WAKE_PIN);
}

void MRF24J40_RstPinPullUp(void){

    GPIO_setOutputHighOnPin(ZB_RST_PORT, ZB_RST_PIN);
}

void MRF24J40_RstPinPullDown(void){

    GPIO_setOutputLowOnPin(ZB_RST_PORT, ZB_RST_PIN);
}

void MRF24J40_InterruptEnable(void){

    GPIO_enableInterrupt(ZB_INT_PORT, ZB_INT_PIN);
}

void MRF24J40_InterruptDisable(void){

    GPIO_disableInterrupt(ZB_INT_PORT, ZB_INT_PIN);
}

void MRF24J40_ClearInterruptFlag(void){
    GPIO_clearInterrupt(ZB_INT_PORT, ZB_INT_PIN);
}

void MRF24J40_PinOutInit(void){

    GPIO_setAsInputPinWithPullUpResistor(ZB_INT_PORT, ZB_INT_PIN);

    GPIO_setAsOutputPin(ZB_CS_PORT, ZB_CS_PIN);
    MRF24J40_ChipSelectPullUp();
    GPIO_setAsOutputPin(ZB_RST_PORT, ZB_RST_PIN);
    MRF24J40_RstPinPullUp();
    GPIO_setAsOutputPin(ZB_WAKE_PORT, ZB_WAKE_PIN);
    MRF24J40_WakePinPullUp();

    GPIO_selectInterruptEdge(ZB_INT_PORT, ZB_INT_PIN, GPIO_HIGH_TO_LOW_TRANSITION);
    MRF24J40_ClearInterruptFlag();

    MRF24J40_InterruptEnable();
}

void MRF24J40_Disable(void){

    MRF24J40_ChipSelectPullUp();
    MRF24J40_RstPinPullUp();

}
