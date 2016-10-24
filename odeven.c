#include<stdio.h>

int main(){
	int a;
	printf("\n Enter a number: ");
		scanf("%d",&a);
			a%2==0? 	//condition
						printf("\aEven number"):	//expression (if true)
						printf("\aOdd number");	// expression (if false)  
	return 0;
}
