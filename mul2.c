#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,mul=0;
	printf("\nEnter first number: ");
	scanf("%d",&a);
	printf("\n Enter second number: ");
	scanf("%d",&b);
	mul=a*b;
	printf("\n Result: \n %d * %d =%d",a,b,mul);
	getch();
}