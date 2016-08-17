#include <stdio.h>

int main(void) {
	int a,b,c,h;
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	h=(a>b&&a>c)?a:b>c?b:c;
	printf("%d is larger",h);
	return 0;
}
