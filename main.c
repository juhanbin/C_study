#include <stdio.h>

 unsigned char RestBit(unsigned char dest_data,unsigned char bit_num)
 {
    if(bit_num < 8) dest_data=dest_data & ~(0x01 << bit_num);
    return dest_data;
 }
 int main()
 {
  unsigned char lamp_staatus = 0x7F;
     printf("%x->",lamp_staatus);
     lamp_staatus = RestBit(lamp_staatus,3);
     printf("%x\n",lamp_staatus);
 }