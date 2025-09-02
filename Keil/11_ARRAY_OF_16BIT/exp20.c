#include <reg51.h> void main()
{
unsigned int i, array[5] = { 0x1111, 0x2222, 0x8888, 0x4444, 0xABCD }; unsigned long sum
= 0;
for (i = 0; i < 5; i++)
{
sum =sum + array[i];
}
P0 = sum & 0xFF;
P1= (sum & 0xff00)>>8; P2=(sum & 0xFF0000)>>16;
}