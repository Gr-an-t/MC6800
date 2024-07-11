#include <stdio.h>
#include <stdlib.h>



struct CPU
{
   using Byte = unsigned char;
   using Word = unsigned short;
};

int main()
{
    return 0;
}









/* 
INFORMATION ZONE
----------------

Register Information
--------------------
!* 3 16-bit registers
!* 3 8-bit registers

* 2 Accumulators A, B | 8-bit, holds operands/results from ALU
* Program Counter PC | 16-bit, points to current program address
* Stack Pointer SP | 16-bit, contains address of next avalible location in push/pop stack
* Index Register X | 16-bit, used to store data or 2-bytes of memory adress for indexed memory addressing
* Condition Code Register CCR | shows conditions that occur from ALU operations
   | Bit 0: carry from bit 7 of an arithmetic operation (C)
   | Bit 1: Overflow flag (V)
   | Bit 2: Zero flag (Z)
   | Bit 3: Negative flag (N)
   | Bit 4: Interrupt Mask (I)
   | Bit 5: Half carry from bit 3 of an arithmetic operation (H)
   | Bit 6: Unused
   | Bit 7: Unused




*/