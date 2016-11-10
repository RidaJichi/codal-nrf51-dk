/*
The MIT License (MIT)

Copyright (c) 2016 British Broadcasting Corporation.
This software is provided by Lancaster University by arrangement with the BBC.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#ifndef CODAL_TARGET_PERIPHERALS_H
#define CODAL_TARGET_PERIPHERALS_H

//#defines for each edge connector pin
#define DEVICE_PIN_P0                     P0_0        // AREF
#define DEVICE_PIN_P1                     P0_1        // ANALOG IN
#define DEVICE_PIN_P2                     P0_2        // ANALOG IN
#define DEVICE_PIN_P3                     P0_3        // ANALOG IN
#define DEVICE_PIN_P4                     P0_4        // ANALOG IN
#define DEVICE_PIN_P5                     P0_5        // ANALOG IN
#define DEVICE_PIN_P6                     P0_6        // ANALOG IN
#define DEVICE_PIN_P7                     P0_7        // I2C0 SCL
#define DEVICE_PIN_P8                     P0_8        // STDIO RTS
#define DEVICE_PIN_P9                     P0_9        // STDIO TX
#define DEVICE_PIN_P10                    P0_10       // STDIO CTS
#define DEVICE_PIN_P11                    P0_11       // STDIO RX
#define DEVICE_PIN_P12                    P0_12
#define DEVICE_PIN_P13                    P0_13
#define DEVICE_PIN_P14                    P0_14
#define DEVICE_PIN_P15                    P0_15
#define DEVICE_PIN_P16                    P0_16
#define DEVICE_PIN_P17                    P0_17       // BTN1
#define DEVICE_PIN_P18                    P0_18       // BTN2
#define DEVICE_PIN_P19                    P0_19       // BTN3
#define DEVICE_PIN_P20                    P0_20       // BTN4
#define DEVICE_PIN_P21                    P0_21       // LED1
#define DEVICE_PIN_P22                    P0_22       // LED2
#define DEVICE_PIN_P23                    P0_23       // LED3
#define DEVICE_PIN_P24                    P0_24       // LED4 / SPI0 SEL
#define DEVICE_PIN_P25                    P0_25       // SPI0 MOSI
#define DEVICE_PIN_P26                    P0_26       // LFCLK
#define DEVICE_PIN_P27                    P0_27       // LFCLK
#define DEVICE_PIN_P28                    P0_28       // SPI0 MISO
#define DEVICE_PIN_P29                    P0_29       // SPI0 SCK
#define DEVICE_PIN_P30                    P0_30       // I2C0 SDA

// Readable names
#define DEVICE_PIN_BUTTON_A               BUTTON1 
#define DEVICE_PIN_BUTTON_B               BUTTON2

// Other peripherals here

#endif
