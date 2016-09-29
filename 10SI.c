#include<stdio.h>
#include<conio.h>

void main(){
	float p,r,t,si;
	printf("\n Enter Principal: ");
	scanf("%f",&p);
	printf("\n Enter Rate: ");
	scanf("%f",&r);
	printf("\n Enter Time: ");
	scanf("%f",&t);
	si=(p*t*r)/100;
	printf("Simple interset= %.2f",si);
	getch();
}
