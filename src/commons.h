#ifndef _COMMONS_H
#define _COMMONS_H

/* these are relays on Arduino Control Board V2 */
#define RT1         0b01110000
#define RT2         0b01111000
#define RT3         0b01110100
#define RT4         0b01111100
#define RT5         0b01110010
#define RT6         0b01111010
#define RT7         0b01110110
#define RT8         0b01111110
#define RT9         0b01110001
#define RT10        0b01111001
#define RT11        0b01110101
#define RT12        0b01111101
#define RT13        0b01110011
#define RT14        0b01111011
#define RT15        0b01110111
#define RT16        0b01111111

#define RT17        0b10110000
#define RT18        0b10111000
#define RT19
#define RT20
#define RT21
#define RT22
#define RT23
#define RT24
#define RT25
#define RT26
#define RT27
#define RT28
#define RT29
#define RT30
#define RT31
#define RT32

#define RT33
#define RT34
#define RT35
#define RT36
#define RT37
#define RT38
#define RT39
#define RT40
#define RT41
#define RT42
#define RT43
#define RT44
#define RT45
#define RT46
#define RT47
#define RT48

#define RT49
#define RT50
#define RT51
#define RT52
#define RT53
#define RT54
#define RT55
#define RT56
#define RT57
#define RT58
#define RT59
#define RT60
#define RT61
#define RT62
#define RT63
#define RT64

/* these are relays on 16-relay module */
#define RLY1_ON     pinMode(37, OUTPUT);digitalWrite(37, LOW);delay(500);
#define RLY1_OFF    pinMode(37, OUTPUT);digitalWrite(37, HIGH);delay(500);


#endif