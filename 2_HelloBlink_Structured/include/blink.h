#ifndef _BLINK_H /* include guards */
#define _BLINK_H

//Pin 13 has an LED connected on most Arduino boards.
//give it a name:
const uint8_t LED_PIN     = 13;
const uint16_t ONE_SECOND  = 1000;
extern int duration;


void gestionarLed();
void encenderLed(int pin);
void apagarLed(int pin);

#endif /* BLINK_H */