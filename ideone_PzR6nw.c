#include <stdio.h>

int main(void) {
    	int a;
    	printf("Enter a number\n");
    	scanf("%d",&a);
    	if (a>0)
    	{goto positive;
    	}
    	else if (a<0)
    	{goto negative;
    	}
    	else 
    	{goto zero;
    	}
    	positive: printf("The number is positive");
    	goto end;
    	negative: printf("The number is negative");
    	goto end;
    	zero: printf("The number is zero");
    	end: getch();
    
	return 0;
}
