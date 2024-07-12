/*
UE-52 : Seibu Color DAC test
*/

void setup() {
  // initialize digital pins as output
  //5 Data bits for single color (R or G, or B)
  pinMode(2, OUTPUT); // most significant bit 4
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); // least significant bit 0

  pinMode(10, OUTPUT); //clock

  // voltages as measured on original UE-52.
  digitalWrite(2, 0); // 2.1V    270 Ohm  | BLU4
  digitalWrite(3, 0); // 1.1V    500 Ohm  | BLU3
  digitalWrite(4, 0); // 0.568V  1K  Ohm  | BLU2
  digitalWrite(5, 0); // 0.291V  2k  Ohm  | BLU1
  digitalWrite(6, 1); // 0.152V  3k9 Ohm  | BLU0

  /*

  //Measured on original UE-52.
  When all 5 bits are on, then the DAC analogue value is 4.38V (VCC = 5V)

  Test with #OE set to:
   GND - R,G,B output values as per DAC: 0 - 4.5V
   5V  - R, G,B output values are 0V

      R-O, G-O, B-O are color ouptuts for Red, Green, Blue
      B0 - least significant bit
      B4 - most significant bit

      C #|R R R R R|G G G G G|B B B B B|B G R G V
      L O|0 1 2 3 4|0 1 2 3 4|0 1 2 3 4|- - - N C --> PIN NAME
      K E|         |         |         |O O O D V
      -------------------------------------------
      2 2|2 1 1 1 1 1 1 1 1 1|1 0 0 0 0|0 0 0 0 0   \___> PIN NUMBER
      2 1|0 9 8 7 6 5 4 3 2 1|0 9 8 7 6|5 4 3 2 1   /
     -------------------------------------------
         |3 2 1 5 2|3 2 1 5 2|3 2 1 5 2|
         |k k k 0 7|k k k 0 7|k k k 0 7|   --> DAC Resistance on that pin position, color product terminated
         |9     0 0|9     0 0|9   0 0 0|           to ground via 1k resistor to max at 4.5V (white)
  */
}

// the loop function runs over and over again forever
void loop() {

  // toggle the clock so that the output colour are always latched
  digitalWrite(10, 0); 
  delay(100);
  digitalWrite(10, 1);
  delay(100);
}
