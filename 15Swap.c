#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of a: ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("\n New value of a: %d",a);
	printf("\n New value of b: %d",b);	
	getch();
}
