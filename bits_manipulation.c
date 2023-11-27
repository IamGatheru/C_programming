#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("%p\n",0x66 & 0x22);
  printf("%p\n", 0x88 & 0x01);
  printf("%p\n", 0x13 << 1);
  printf("%d\n", 0b001010010);
  printf("%x\n", ~ 0x12);
  printf("%p\n", 0x02 >> 1);
  printf("%p\n", 0x01 & 0x00);
  printf("%p\n", 0x01 | 0x00);
  printf("%d\n", 0x89);
  printf("%p\n", ~ 0x98);
  printf("%d\n", 0x89);
  printf("%p\n", 0x89 >> 3);
  printf("%p\n", 0x01 & 0x01);
  printf("%p\n", 0x44 | 0x22);
  printf("%p\n",0x89 & 0x01);
  printf("%p\n", 0x01 << 1);
  printf("%p\n", 0b01101101);
  printf("%p\n", 0x01 | 0x01);
  printf("%p\n", 98);
  printf("%p\n", ~ 0x12);
  return (0);
}
