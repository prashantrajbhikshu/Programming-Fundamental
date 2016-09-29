#include<stdio.h>
#include<conio.h>

void main(){
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);
	if (a<0)
		printf("\n %d is a negetive number",a);
	else if(a>0)
		printf("\n %d is a positive number",a);
	else
		printf("\n The given number is zero");
	getch();
}