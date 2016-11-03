#include<stdio.h>

int main(){
		float a,b;
		printf("\n Enter a number: ");
		scanf("%f",&a);
		printf("\n Enter another number: ");
		scanf("%f",&b);
		
		printf("\n After Swap");
		a=a-b;
		b=a+b;
		a=b-a;
		printf("\n First number: %f",a);
		printf("\n Second number: %f",b);
		
		return 0;

}
