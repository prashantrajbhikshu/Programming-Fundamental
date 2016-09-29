#include<stdio.h>
#include<conio.h>

void main(){
	int l,b,a,p;
	printf("\n Enter breadth of recatangle: ");
	scanf("%d",&b);
	printf("\n Enter length of rectangle: ");
	scanf("%d",&l);
	
	a=l*b;
	p=2*(l+b);
	
	printf("\n Area of Rectangle =%d",a);
	printf("\n Perimeter of Rectangle =%d",p);
	
	getch();
}