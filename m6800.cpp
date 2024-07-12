#include <stdio.h>
#include <stdlib.h>


   using Byte = unsigned char;
   using Word = unsigned short int;
   using u32 = unsigned int;


struct Memory
{
   static constexpr u32 MAX_MEM = 1024 * 64;
   Byte Data[MAX_MEM];
   
   void Initialize()
   {
      for (u32 i = 0; i < MAX_MEM; ++i)
      {
         Data[i] = 0;
      }
   }
};


struct CPU
{



   /* Registers
   ---------------------------*/
   //8-bit registers
   Byte A, B; //Accumulator A and B

   Byte CCR; //Condition Code Register

   //16-bit registers
   Word PC; //Program Counter

   Word SP; //Stack Pointer

   Word X; //Index Register

   void Reset( Memory& memory )
   {
      memory.Initialize();
      CCR = 0x10;
      Byte lowByte = memory.Data[0xFFFE];
      Byte highByte = memory.Data[0xFFFF];
      PC = (highByte << 8) | lowByte;
      SP = 0x1FFF;
   }
};

int main()
{
   Memory mem;
   CPU cpu;
   cpu.Reset( mem );
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