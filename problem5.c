#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isperfectsquare(int number);
void reverseDigits(int num);
void sumdigits(int num);

int main()
{
  int num;
  printf("enter number =");
  scanf("%ld", &num);
  if (isperfectsquare(num) == true)
  {
    printf(" %.1d is perfect square \n ", num);
  }
  else
  {
    printf(" %.1d is not perfect square \n", num);
  }

  int numb;
  printf("enter your number ");
  scanf("%d", &numb);
  reverseDigits(numb);

  int numbe;
  printf("enter your number ");
  scanf("%ld", &numbe);

  sumdigits(numbe);

  return 0;
}

bool isperfectsquare(int number)
{

  if (number < 0)
  {
    return false;
  }

  int square = (int)sqrt(number);
  return (square * square == number);
}
void reverseDigits(int num)
{
  int reversed = 0;
  while ((num != 0))
  {
    reversed = reversed * 10 + num % 10;
    num = num / 10;
  }
  printf("the reverse number is %d \n", reversed);
}

void sumdigits(int num)
{
  int sum = 0;
  while (num != 0)
  {
    int m = num % 10;
    sum = sum + m;
    num = num / 10;
  }
  printf("sum digit is = %d", sum);
}
