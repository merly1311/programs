#include <stdio.h>

int main(void)
{
  int a,b,n,i,c;
  printf("Enter the limit\n");
  scanf("%d",&n);
a=1;
b=1;
printf("%d %d ",a,b);
for ( i =2; i< n; i++)
{
  c=a+b;
  printf("%d ",c);
  a=b;
  b=c;
}
printf("\n");
}
