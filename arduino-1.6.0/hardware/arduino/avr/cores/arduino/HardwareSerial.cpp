/*
  HardwareSerial.cpp - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  
  Modified 23 November 2006 by David A. Mellis
  Modified 28 September 2010 by Mark Sproul
  Modified 14 August 2012 by Alarus
  Modified 3 December 2013 by Matthijs Kooijman
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"

#include "HardwareSerial.h"
// #include "HardwareSerial_private.h"

// // this next line disables the entire HardwareSerial.cpp, 
// // this is so I can support Attiny series and any other chip without a uart
// #if defined(HAVE_HWSERIAL0) || defined(HAVE_HWSERIAL1) || defined(HAVE_HWSERIAL2) || defined(HAVE_HWSERIAL3)

// // SerialEvent functions are weak, so when the user doesn't define them,
// // the linker just sets their address to 0 (which is checked below).
// // The Serialx_available is just a wrapper around Serialx.available(),
// // but we can refer to it weakly so we don't pull in the entire
// // HardwareSerial instance if the user doesn't also refer to it.
// #if defined(HAVE_HWSERIAL0)
//   void serialEvent() __attribute__((weak));
//   bool Serial0_available() __attribute__((weak));
// #endif

// #if defined(HAVE_HWSERIAL1)
//   void serialEvent1() __attribute__((weak));
//   bool Serial1_available() __attribute__((weak));
// #endif

// #if defined(HAVE_HWSERIAL2)
//   void serialEvent2() __attribute__((weak));
//   bool Serial2_available() __attribute__((weak));
// #endif

// #if defined(HAVE_HWSERIAL3)
//   void serialEvent3() __attribute__((weak));
//   bool Serial3_available() __attribute__((weak));
// #endif

// void serialEventRun(void)
// {
// #if defined(HAVE_HWSERIAL0)
//   if (Serial0_available && serialEvent && Serial0_available()) serialEvent();
// #endif
// #if defined(HAVE_HWSERIAL1)
//   if (Serial1_available && serialEvent1 && Serial1_available()) serialEvent1();
// #endif
// #if defined(HAVE_HWSERIAL2)
//   if (Serial2_available && serialEvent2 && Serial2_available()) serialEvent2();
// #endif
// #if defined(HAVE_HWSERIAL3)
//   if (Serial3_available && serialEvent3 && Serial3_available()) serialEvent3();
// #endif
// }

// // Actual interrupt handlers //////////////////////////////////////////////////////////////

// void HardwareSerial::_tx_udr_empty_irq(void)
// {
//   // If interrupts are enabled, there must be more data in the output
//   // buffer. Send the next byte
//   unsigned char c = _tx_buffer[_tx_buffer_tail];
//   _tx_buffer_tail = (_tx_buffer_tail + 1) % SERIAL_TX_BUFFER_SIZE;

//   *_udr = c;

//   // clear the TXC bit -- "can be cleared by writing a one to its bit
//   // location". This makes sure flush() won't return until the bytes
//   // actually got written
//   sbi(*_ucsra, TXC0);

//   if (_tx_buffer_head == _tx_buffer_tail) {
//     // Buffer empty, so disable interrupts
//     cbi(*_ucsrb, UDRIE0);
//   }
// }

// Public Methods //////////////////////////////////////////////////////////////

void HardwareSerial::begin(unsigned long, byte)
{
}

void HardwareSerial::end()
{
}

int HardwareSerial::available(void)
{
  return 0;
}

int HardwareSerial::peek(void)
{
  return -1;
}

int HardwareSerial::read(void)
{
  return -1;
}

int HardwareSerial::availableForWrite(void)
{
  return 1;
}

void HardwareSerial::flush()
{
}

size_t HardwareSerial::write(uint8_t)
{
  return 1;
}


// #endif // whole file
