/*
 * mrf24j40ma_pinout.c
 *
 *  Created on: 16 окт. 2017 г.
 *      Author: Dumitru
 */


/**************Imports***********************************/

#include "mrf24j40ma_pinout.h"
//#include "IO/io.h"                        /* Include file with hardware pin descriptions */

/**************Private Macro Definitions*****************/

/* Set the uC pins configuration */

#define ZB_RST_PORT            /* uC port which pin is connected to RST pin of MRF24J40 */
#define ZB_RST_PIN             /* uC pin connected to RST pin of MRF24J40 */
#define ZB_WAKE_PORT           /* uC port which pin is connected to WAKE pin of MRF24J40 */
#define ZB_WAKE_PIN            /* uC pin connected to WAKE pin of MRF24J40 */
#define ZB_INT_PORT            /* uC port which pin is connected to INT pin of MRF24J40 */
#define ZB_INT_PIN             /* uC pin connected to INT pin of MRF24J40 */

#define ZB_SDI_PORT            /* uC port which pin is connected to SDI pin of MRF24J40 */
#define ZB_SDI_PIN             /* uC pin connected to SDI pin of MRF24J40 */
#define ZB_SCK_PORT            /* uC port which pin is connected to SCK pin of MRF24J40 */
#define ZB_SCK_PIN             /* uC pin connected to SCK pin of MRF24J40 */
#define ZB_CS_PORT             /* uC port which pin is connected to CS pin of MRF24J40 */
#define ZB_CS_PIN              /* uC pin connected to CS pin of MRF24J40 */
#define ZB_SDO_PORT            /* uC port which pin is connected to SDO pin of MRF24J40 */
#define ZB_SDO_PIN             /* uC pin connected to SDO pin of MRF24J40 */

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

    /* Use the function to pull down the CS pin*/
}

void MRF24J40_ChipSelectPullUp(void){

    /* Use the function to pull up the CS pin*/
}

void MRF24J40_WakePinPullUp(void){

    /* Use the function to pull up the Wake pin*/
}

void MRF24J40_WakePinPullDown(void){

    /* Use the function to pull down the Wake pin*/
}

void MRF24J40_RstPinPullUp(void){

    /* Use the function to pull up the RST pin*/
}

void MRF24J40_RstPinPullDown(void){

    /* Use the function to pull down the RST pin*/
}

void MRF24J40_InterruptEnable(void){

    /* Use the function to enable uC interrupt on pin connected to pin INT of MRF24J40 */
}

void MRF24J40_InterruptDisable(void){

    /* Use the function to disable uC interrupt on pin connected to pin INT of MRF24J40 */
}

void MRF24J40_ClearInterruptFlag(void){
    /* Use the function to clear uC interrupt flag on pin connected to pin INT of MRF24J40 */
}

void MRF24J40_PinOutInit(void){

/*
 *  - Configure the PullUp resistor to pin connected to pin INT of MRF24J40 if uC requires separate configuration
 *    (ex: REN register on MSP430)
 *
 *  - Configure the pins connected to CS, RST, WAKE as output HIGH ("1")
 *
 *  - Set the interrupt event on falling edge at INT pin
 *
 *  - Enable external interrupts
 *  */

}

void MRF24J40_Disable(void){

    /*
     * Set CS and RST pins to LOW ("0")
     * */

}
