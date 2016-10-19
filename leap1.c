#include<stdio.h>

int main(){
	int days;
	printf("\n Program to find leap year");
	printf("\n Enter days in Febuary ");
	scanf("%d",&days);
	
	if (days<=28)
		printf("\n Not a leap year/");
	else if (days=29)
		printf("\n Leap year");
	else 
		printf("\n Enter a valid number");
		return 0;
}
