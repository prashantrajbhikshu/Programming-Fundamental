/****************************************************
*	Name: Prashant Raj Bhikshu						*
* 	Subject: Programming Fundamentals				*
*	Program: To find if a no. is -ve,+ve or 0		*
*	Date:2016/10/17									*
****************************************************/

#include<stdio.h>

void main(){
	int a;
printf("**************************************************** \n
*	Name: Prashant Raj Bhikshu						*	\n
* 	Subject: Programming Fundamentals				*	\n
*	Program: To find if a no. is -ve,+ve or 0		*	\n
*	Date:2016/10/17									*	\n
**************************************************** );
	printf("\n Enter any number: ");
	scanf("%d",&a);
	if (a>0)
		printf("\n %d is Postive number",a);
	else if (a<0)
		printf("\n %d is Negetive number",a);
	else
		printf("\n Zero");
	
}
