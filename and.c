//Program to demonstrate the bitwise AND operator
#include <stdio.h>

int main(void)
{
  unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;

  printf("%o ", word1 & word2);
  printf("%o ", word1 & word1);//x AND x yields x
  printf("%o ",word1 & word2 & word3);
  printf("%o\n", word1 & 1);
  //Recall, a int const with a leading 0 is an octal
  //A u preceeding an int const is an unsigned int

  /**
   * The final printf extracts the rightmost bit of the word1
   * It is also a cool way of testing if the number is odd or even.
   * Odd nums are 1(but don't work on machines that use ones complement representation of numbers.
   */
  return (0);
}
