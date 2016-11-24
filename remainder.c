//WAP to print the remainder of the number * use divisor as 10
#include<stdio.h>

int main(){
	int a,i;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	i=a%10;
	printf("Remainder = %d",i);
	
	return 0;
}