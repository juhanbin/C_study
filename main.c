#include <stdio.h>

 unsigned char SetBit(unsigned char dest_data,unsigned char bit_num)
 {
    if(bit_num < 8) dest_data=dest_data | (0x01 << bit_num);
    return dest_data;
 }
 int main()
 {
  unsigned char lamp_stat = 0x77;
     printf("%x->",lamp_stat);
     lamp_stat = SetBit(lamp_stat,3);
     printf("%x\n",lamp_stat);
 }