#include <stdio.h>

int main(void) {
	int n,s=0,i;
	printf("Enter the no. \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{s=s+i*i;
	}
	printf("Sum is %d",s);
	return 0;
}
