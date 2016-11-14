/*
The MIT License (MIT)

Copyright (c) 2016 Lancaster University, UK.

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

#ifndef NRF51DK_H
#define NRF51DK_H

#include "mbed.h"

#include "codal_target_memory.h"
#include "codal_target_peripherals.h"

#include "DeviceConfig.h"
#include "DeviceHeapAllocator.h"
#include "CodalDevice.h"
#include "ErrorNo.h"
#include "DeviceSystemTimer.h"
#include "Matrix4.h"
#include "DeviceCompat.h"
#include "DeviceComponent.h"
#include "ManagedType.h"
#include "ManagedString.h"
#include "DeviceImage.h"
#include "DeviceFont.h"
#include "DeviceEvent.h"
#include "DynamicPwm.h"
#include "NotifyEvents.h"

#include "DeviceButton.h"
#include "DevicePin.h"
//#include "DeviceCompass.h"
//#include "DeviceCompassCalibrator.h"
//#include "DeviceAccelerometer.h"
//#include "DeviceThermometer.h"
//#include "DeviceLightSensor.h"
//#include "DeviceMultiButton.h"

//#include "DeviceSerial.h"
#include "nRF51DKIO.h"
//#include "DeviceMatrixMaps.h"
//#include "DeviceDisplay.h"

#include "DeviceFiber.h"
#include "DeviceMessageBus.h"

//#include "DeviceBLEManager.h"
//#include "DeviceRadio.h"
//#include "DeviceStorage.h"


// nRF51DK::flags values
#define NRF51DK_INITIALIZED                    0x01

/**
  * Class definition for a nRF51DK device.
  *
  * Represents the device as a whole, and includes member variables that represent various device drivers
  * used to control aspects of the micro:bit.
  */
class nRF51DK
{
    private:

    /**
      * A listener to perform actions as a result of Message Bus reflection.
      *
      * In some cases we want to perform lazy instantiation of components, such as
      * the compass and the accelerometer, where we only want to add them to the idle
      * fiber when someone has the intention of using these components.
      */
    void                        onListenerRegisteredEvent(DeviceEvent evt);

    uint8_t                     status;

    public:

    nRF51DKIO                   io;

    // Serial Interface
    //nRF51DKSerial              serial;

    // Persistent key value store
    //nRF51DKStorage             storage;

    // I2C Interface
    //nRF51DKI2C                 i2c;

    // Device level Message Bus abstraction
    DeviceMessageBus          messageBus;

    // Member variables to represent each of the core components on the device.
    //nRF51DKDisplay             display;
    DeviceButton              buttonA;
    DeviceButton              buttonB;
    //nRF51DKMultiButton         buttonAB;

    // Bluetooth related member variables.
	//nRF51DKBLEManager		    bleManager;
    //nRF51DKRadio               radio;
    //BLEDevice                   *ble;

    /**
      * Constructor.
      *
      * Create a representation of a nRF51DK device, which includes member variables
      * that represent various device drivers used to control aspects of the micro:bit.
      */
    nRF51DK();

    /**
      * Post constructor initialisation method.
      *
      * This call will initialised the scheduler, memory allocator and Bluetooth stack.
      *
      * This is required as the Bluetooth stack can't be brought up in a
      * static context i.e. in a constructor.
      *
      * @code
      * uBit.init();
      * @endcode
      *
      * @note This method must be called before user code utilises any functionality
      *       contained by uBit.
      */
    void init();
};

#endif
