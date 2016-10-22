#include <stdio.h>
int ispalindrome(int n)
{
  int a[10];
  int b,i,j,d;
  b=n;
  i=0;
  while(b)
  {
    a[i]=b%10;
    b=b/10;
    i++;
  }
  d=i;
  for(i=0,j=d-1;i<d,j>=0;i++,j--)
  {
    if(a[i]!=a[j])
    return 0;
  }
  return 1;
}

int main(void)
{
	int x,a;
	printf("Enter the number\n" );
	scanf("%d",&x);
  a=ispalindrome(x);
  if(a==0)
		printf("NOT PALINDROME \n");
else
printf(" PALINDROME \n");
	return 0;
}
