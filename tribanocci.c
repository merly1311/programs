#include <stdio.h>

int main(void)
{
  int a,b,n,i,c,d;
  printf("Enter the limit\n");
  scanf("%d",&n);
a=0;
b=1;
c=1;
printf("%d %d %d ",a,b,c);
for ( i =0; i< n-3; i++)
{
  d=a+b+c;
  printf("%d ",d);
  a=b;
  b=c;
  c=d;
}
printf("\n");
}
