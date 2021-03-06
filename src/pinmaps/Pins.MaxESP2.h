// -------------------------------------------------------------------------------------------------
// Pin map for OnStep MaxESP Version 2.x (ESP32S)

#if defined(ESP32)

// The multi-purpose pins (Aux3..Aux8 can be analog pwm/dac if supported)
#define Aux1                 12     // pullup driver RST or SPI MISO or Fault
#define Aux3                 21     // Home SW for Axis1 (or I2C SDA)
#define Aux4                 22     // Home SW for Axis2 (or I2C SCL)
#define Aux7                 39     // Limit SW, PPS, etc.
#define Aux8                 25     // OneWire, Status LED, Status2 LED, Reticle LED, Tone, etc.

// Misc. pins
#ifndef OneWirePin
  #define OneWirePin       Aux8     // Default Pin for one wire bus
#endif

// The PEC index sense is a logic level input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin               36
#define AnalogPecPin         A0     // PEC Sense, analog or digital (GPIO36)

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDnegPin          Aux8     // Drain
#define LEDneg2Pin         Aux8     // Drain
#define ReticlePin         Aux8     // Drain

// For a piezo buzzer
#define TonePin            Aux8     // Tone

// The PPS pin is a 3.3V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin             Aux7     // PPS time source, GPS for example

#define LimitPin           Aux7     // The limit switch sense is a logic level input normally pull high (2k resistor,) shorted to ground it stops gotos/tracking

// Axis1 RA/Azm step/dir driver
#define Axis1_EN              4     // Enable
#define Axis1_M0             13     // Microstep Mode 0  or SPI MOSI
#define Axis1_M1             14     // Microstep Mode 1  or SPI SCK
#define Axis1_M2             23     // Microstep Mode 2  or SPI CS or Decay Mode
#define Axis1_M3           Aux1     // Pullup driver RST or SPI MISO/Fault
#define Axis1StepPin         18     // Step
#define Axis1DirPin          19     // Dir
#define Axis1ModePin   Axis1_M2     // Decay mode
#define Axis1FaultPin      Aux1     // SPI MISO/Fault
#define Axis1HomePin       Aux3     // Sense home position Axis1

// Axis2 Dec/Alt step/dir driver
#define Axis2_EN              4     // Enable
#define Axis2_M0             13     // Microstep Mode 0  or SPI MOSI
#define Axis2_M1             14     // Microstep Mode 1  or SPI SCK
#define Axis2_M2              5     // Microstep Mode 2  or SPI CS or Decay Mode
#define Axis2_M3           Aux1     // Pullup driver RST or SPI MISO/Fault
#define Axis2StepPin         27     // Step
#define Axis2DirPin          26     // Dir
#define Axis2ModePin   Axis2_M2     // Decay mode
#define Axis2FaultPin      Aux1     // SPI MISO/Fault
#define Axis2HomePin       Aux4     // Sense home position Axis2

// For rotator stepper driver
#define Axis3_EN              0     // Enable
#define Axis3StepPin          2     // Step
#define Axis3DirPin          15     // Dir

// For focuser1 stepper driver
#define Axis4_EN              0     // Enable
#define Axis4StepPin          2     // Step
#define Axis4DirPin          15     // Dir

// For focuser2 stepper driver
#define Axis5_EN             -1     // Enable
#define Axis5StepPin         -1     // Step
#define Axis5DirPin          -1     // Dir

// ST4 interface
#define ST4RAw               34     // ST4 RA- West
#define ST4DEs               32     // ST4 DE- South
#define ST4DEn               33     // ST4 DE+ North
#define ST4RAe               35     // ST4 RA+ East

#else
#error "Wrong processor for this configuration!"

#endif
