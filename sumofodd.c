#include <stdio.h>

int main(void)
{
	int n,i,a,sum;
	printf("Enter the limit\n" );
	scanf("%d",&n);
  a=1;
	sum=0;
	for(i=0;i<n;i++)
	{sum=sum+a;
		a=a+2;
		}
		printf("%d \n",sum);

	return 0;
}
