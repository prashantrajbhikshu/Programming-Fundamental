#include<stdio.h>
//#include<conio.h>
//#include<process.h>
#include<stdlib.h>

int main(){
	int a,b,res,o;
	l1:
	printf("\n \t\t\t*****************************************");
	printf("\n \t\t\t* \tSIMPLE CALCULATOR\t\t*");
	printf("\n \t\t\t* \tSelect 1 for Addition.\t\t*");
	printf("\n \t\t\t* \tSelect 2 for Substraction.\t*");
	printf("\n \t\t\t* \tSelect 3 for Multipliucation.\t*");
	printf("\n \t\t\t* \tSelect 4 for Division.\t\t*");
	printf("\n \t\t\t* \tSelect 5 for Modulus.\t\t*");
	printf("\n \t\t\t* \tSelect 9 for Exit.\t\t*");
	printf("\n \t\t\t*****************************************");
	
	
	printf("\n\n\n Selct an operator (+,-,*,/) :"); 
	scanf("%d",&o);
	
	printf("\n Enter first number: ");
	scanf("%d",&a);
	printf("\n Enter second number: ");
	scanf("%d",&b);
	
	//o=getchar();
	//(+/-/*///%)
	switch (o){
	 case 1 :
			res=a+b;
			//printf("%d",res);
				break;
		
		 case 2 :
			res=a-b;
				break;
			case 3 :
			res =a*b;
				break;
		case 4 :
			res= a/b;
				break;
	case 5 :
			res =a%b;
				break; 
			case 9:
				exit (0);
		default :
			printf("\n Choose valid operator");
			//exit (0);
		} 
		
		printf("Result = %d ",res);
		goto l1;
		return 0;
	}
	
