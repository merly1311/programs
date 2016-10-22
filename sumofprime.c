#include <stdio.h>

int main(void)
{
	int n,j,b,r,a,sum,count;
	printf("Enter the limit\n");
	scanf("%d",&n);
  a=2;
	sum=1;

	count=0;
	for(a=2;a<(3*n);a++)
	{
		b=0;
		r=1;
  for(j=2;j<a;j++)
  {
  r=a%j;
  if(r==0)
  b=b+1;
  }
  if(b==0)
  {sum=sum+a;
  count++;
		}
		if (count==n-1) break;

    }
		printf("%d \n",sum);

	return 0;
}
