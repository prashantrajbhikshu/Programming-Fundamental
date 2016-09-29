#include<stdio.h>
#include<conio.h>

void main(){
	int b,h;
	float area;
	printf("\n Enter base of Triangle ");
	scanf("%d",&b);
	printf("\n Enter height of Triangle ");
	scanf("%d",&h);
	
	area=0.5*b*h;
	printf("\n Area of triangle: %.2f",area);
	getch();
}