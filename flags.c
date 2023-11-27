#include <stdio.h>

#define FIRST_OPT 0x01
#define SECOND_OPT 0x10
#define THIRD_OPT 0x11
#define FOURTH_OPT 0x100

int main(int argc, char * argv[])
{
  unsigned int flags = FIRST_OPT | SECOND_OPT | THIRD_OPT | FOURTH_OPT;

  if (flags & (FIRST_OPT >> 2)) //if ((flags & 1) != 0)
  {
    printf("1st feature is enabled\n");
  }
  if ((flags & SECOND_OPT) != 0){
    printf("2nd feature is enabled\n");
  }
  if ((flags & THIRD_OPT)){
    printf("Third feature is enabled\n");
  }
  else
  printf("Fourth feature enabled\n");

  printf("%p\n", flags);
  
  return (0);
}
