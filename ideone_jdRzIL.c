#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void) {
	int a,b,c,s,area;
	clrscr();
	printf("Enter the sides of the triangle  ");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of triangle is %d",area);
	return 0;
}
