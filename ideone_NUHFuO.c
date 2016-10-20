#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
		}
	for(k=1;k<(2*i);k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
