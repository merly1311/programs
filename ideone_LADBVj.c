#include <stdio.h>

int main(void) {
int a,x;
printf("Enter a number\n");
scanf("%d",&a);
x=a%2;
if(x==0)
{printf("%d is even",a);
}
else
{printf("%d is odd",a);
}
	return 0;
}
