/*
 *	Student's Name:Prashant Raj Bhikshu 
 * 	Subject: Programming Fundamentals	
 * Program: To find sum of n numbers using loop
 * 	Lab: 08
 * Date: 2016/10/25
*/
#include<stdio.h>

int main(){
		int i=0,n,sum=0;
		printf("\n Enter a number: ");
		scanf("%d",&n);
		
		/* for (a=1;a<=n;a++){
			sum=sum + a;
			}
		printf("\n Sum =%d",sum);
		*/
		/*do { 
				
				sum += i;
				printf("\n\t Sum: %d",sum);
				i++;		
		
			while(i<=n)
		}*/
		 while(i<=n){
			sum += i;
				printf("\n\t\t Sum: %d",sum);
				i++;
		
	}
	
	return 0;
}
