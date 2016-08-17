#include <stdio.h>

int main(void) {
	int a,b,c=0,d;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
	printf("1. addition\n 2. substraction\n 3. multiplication\n 4. divisuion\n");
	printf("Enter your choice of operation\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1: c=a+b;
		printf("The sum is %d",c);
		break;
		case 2: c=a-b;
		printf("The difference is %d",c);
		break;
		case 3: c=a*b;
		printf("The product is %d",c);
		break;
		case 4: c=a/b;
		printf("The quotient is %d",c);
		break;
		default: 	printf("Invalid entry");
		break;
	
	}
	return 0;
}
