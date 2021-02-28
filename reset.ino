#include <Adafruit_SleepyDog.h>


void setup() {
  // put your setup code here, to run once:

}

void loop() {oid software_Reset()
// Restarts program from beginning but
// does not reset the peripherals and registers
{
 asm volatile (”jmp0″);  
}

void(* resetFunc) (void) = 0; //declare reset function at address 0
  // put your main code here, to run repeatedly:

}
