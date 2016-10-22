#include <stdio.h>
int sumofdigits(int n)
{
  int a=0;
  while(n)
  {
    a=n%10+a;
    n=n/10;
  }
  return a;
}

int main(void)
 {
  int number,sum;
  printf("Enter the number\n" );
  scanf("%d",&number );
  sum=sumofdigits(number);
  printf("Sum of Digits is %d\n",sum );
}
