# uec-52-repro
Reproduction of Seibu UEC-52 custom SIL package.

![Board image](https://github.com/ole00/uec-52-repro/raw/master/img/uec52-repro.jpg "uec-52 repro")


**Note: This design was not tested with an actual Seibu arcade PCB - use it at your own risk.**
However I had an original UEC-52 available for testing out of the arcade PCB board. If you manage to
use it on the Arcade bord, share your results please (in Issues).

The circuitry is based on work made by Caius as kindly shared on the following sites:

  https://www.arcade-projects.com/threads/seibu-%E2%80%98uec-52%E2%80%99-reproduction-by-caius.4768/
  
  https://www.eevblog.com/forum/projects/how-to-amplify-ttl-logical-levels/

The PCB design can be opened in gEDA PCB software. 
Arduino UNO (5V) testing sketch is attached.

BOM: <br/>
U1, U2 : 74HC574 SO-20 <br/>
U3 : 74HC368 SO-16 <br/>
C1, C2, C3 - 100nF <br/>
R1, R6, R11 - 3k9 (or 4k7) Ohm <br/>
R2,R7,R12 - 2k (or 2k2) Ohm <br/>
R3, R8, R13, R19, R20, R21 - 1k Ohm <br/>
R4, R9, R14 - 500 (or 470) Ohm <br/>
R5, R10, R15 - 270 (or 220) Ohm <br/>
R16, R17, R18 - 100 Ohm <br/>
All passives: 0805 package <br/>


