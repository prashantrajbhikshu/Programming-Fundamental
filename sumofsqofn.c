#include<stdio.h>

int main(){
	int a,i,sum=0;
	printf("\n Enter any number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum =sum + i * i;	
	}
	printf("Sum of square of %d natural number: %d",a,sum);
	return 0;
}