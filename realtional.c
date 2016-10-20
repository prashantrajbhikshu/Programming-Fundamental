/*
 * Student's Name:Prashnat raj bhikshu 
 * Subject: Programming Fundamentals
 * Progarm: Use of Relational Operator
 * Date:2016/10/19
*/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\n Enter a number: ");
    scanf("%d",&a);
    printf("\n Enter any other number: ");
    scanf("%d",&b);
    
    if(a==b)
		printf("\n %d is equal to %d",a,b);
	else
		printf("\n %d is not equal to %d",a,b);
	/*if(a!=b)
		printf("\n %d is not equal to %d",a,b);
	else
		printf("\n %d is equal to %d",a,b);*/
	/*if(a<b)
		printf("\n %d is less than %d",a,b);
	else
		printf("\n %d is geater than %d",b,a);
		*/
	if(a>b)
		printf("\n %d is greater than %d",a,b);
	else
		printf("\n %d is less than %d",b,a);
		
	 if(a<=b)
		printf("\n %d is less or equal to %d",a,b);
	else
		printf("\n %d is greater or equal to %d",a,b);
	return(0);
}
