/*
 * Student's Name:Prashant Raj Bhikshu
 * Subject: Programming Fundamentals
 * Progarm: To take 3 i/p from user and find grestest number(terminal operator)
 * Lab: 07
 * Date:2016/10/24
*/
#include<stdio.h>

int main(){
		int a,b,c;
		printf("\n Enter first number: ");
		scanf("%d",&a);
		printf("\n Enter second number: ");
		scanf("%d",&b);
		printf("\n Enter third number: ");
		scanf("%d",&c);
		
		(a>=b)?
			( a>=c? 
					printf("%d is greatest",a):
					printf("%d is grestest",c) 
			):
			
			(b>=c ? 
					printf("%d is greatest",b): 
					printf("%d is greatest",c) 
			);
			
			
			/*/	(a<c) printf("%d is largest",a):
				
				
				printf("%d is largest",b);
				* */
	return 0;	
}
		
