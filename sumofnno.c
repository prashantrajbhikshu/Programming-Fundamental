//program to sum of first n natural number

#include<stdio.h>

int main(){
	int a,i,sum=0;
	printf("\n Enter any number: ");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		sum=sum+i;
	}
	printf("Sum of %d natural number: %d",a,sum);
	return 0;
}