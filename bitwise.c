#include<stdio.h>

int main(){
	int a,b;
	printf("\n USe of Bitwise operator");
	printf("\nEnter a number: ");
	scanf("%d",&a);
	printf("\nEnter second number: ");
	scanf("%d",&b);
	printf("\n\n Use of operator); 
	printf("\n A and B: %d ",a&b);
	printf("\n A OR B : %d ",a|b);
	printf("\n A XOR B : %d ",a^b);
	printf("\n A complement : %d",~a);
	printf("\n B complement : %d",~b);
	return 0;
}
