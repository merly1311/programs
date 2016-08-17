#include <stdio.h>

int main(void) {
	int a,b,c,d,r1,r2,r;
	printf("Enter the coefficients\n");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{r=-b/(2*a);
	printf("have equal roots and is equal to %d",r);
	}
	else if(d>0)
	{r1=(-b+sqrt(d)))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("the roots are %d and %d",r1,r2);
	}
	else
	{printf("imaginary roots");
	}
	return 0;
}
