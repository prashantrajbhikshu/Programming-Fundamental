#include<stdio.h>

int main(){
		int a,b,c,sum,av,mul;
		printf("\n Enter first number: ");
		scanf("%d",&a);
		printf("\n Enter second number: ");
		scanf("%d",&b);
		printf("\n Enter third number: ");
		scanf("%d",&c);
		
		sum=a+b+c;
		printf("\n Sum of %d ,%d and %d = %d ",a,b,c,sum);
		
		av=sum/3;
		printf("\n Average= %d",av);
		
		mul=a*b*c;
		printf("\n Multiplication= %d",mul);
		
		if (a>=b) 	{
						if (a>=c)
							printf("\n %d is greatest",a);
						else
							printf("\n %d is greatest",c);
					}
		
		else 		{	
						if (b>=c)
							printf("\n %d is greatest",b);
						else
							printf("\n %d is greatest",c);
					}
		(a<=b)?
			( a<=c? 
					printf("\n\n%d is smallest",a):
					printf("\n\n%d is smallest",c) 
			):
			
			(b<=c ? 
					printf("\n\n%d is smallest",b): 
					printf("\n\n%d is smallest",c) 
			);
	return 0;
}
