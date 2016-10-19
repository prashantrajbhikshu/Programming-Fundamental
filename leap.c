#include<stdio.h>

int main(){
	int a;
	printf("\n Program to find leap year");
	printf("\n Enter year : ");
	scanf("%d",&a);
	
	if (a%4==0 && a%100!=0 && a%400==0)
		printf("\n %d is Leap year",a);
	else
		printf("\n %d is not Leap year",a);
		return 0;
}
