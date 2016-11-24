#include<stdio.h>

int main(){
	int a,i;
	printf("Enter the number: ");
	scanf("%d",&a);
	i=a%10;
	a=a/10;
	printf("\nlast digit=%d",i);
	printf("\nNumber without last digit= %d",a);
	
	return 0;
}