#include<stdio.h>
//#include<conio.h>

int main(){
	//int a,b,mod,sum,sub,mul,div;
	int v;
	
	/**
	printf("\n \t\t\t ************************************************");
	printf("\n \t\t\t * Student's Name:Prashnatrajbhikshu\t\t* ");
	printf("\n \t\t\t * Subject: Programming Fundamentals\t\t*");
	printf("\n \t\t\t * Progarm: To do arithmetic calculation\t*");
	printf("\n \t\t\t * Lab:09\t\t\t\t\t*");
	printf("\n \t\t\t * Date:2016/10/18\t\t\t\t*");
	printf("\n \t\t\t ************************************************");
	printf("\n Enter any two numbers: ");
	scanf("%d%d",&a,&b);
	
	
		sum=a+b;
		printf("\n Use of First(+) Operator");
		printf("\n The sum of two numbers %d and %d: %d",a,b,sum);
		
		if (a<b){
						
				sub=b-a;
				printf("\n Use of Second(-) Operator");
			printf("\n Substraction of %d from %.2 = %d",b,a,sub);
			}
		else{
				printf("\n Use of Second(-) Operator");
				sub=a-b;
				printf("\n Substraction of %d from %d = %d",a,b,sub);
			}
		mul= a*b;
			printf("\n Use of Third(x) Operator");
			printf("\n Multiplication of %d aand %d=%d",a,b,mul);
		div=a/b;
			printf("\n Use of forth(/) Operator");
			printf("\n Division of %d aand %d=%d",a,b,div);
		
		mod=a%b;
			printf("\n Remainder when %d divided by %d= %d",a,b,mod);
		*/
		printf("\n Enter the v integer value: ");
		scanf("%d",&v);
		printf("\n oRIGINAL vaLUE: %d",v);
		printf("\n The post fix increment: %d",v++);
		printf("\n the pre fix dincrement: %d",++v);
		
		
		//printf("\n\n oRIGINAL vaLUE: %d",v);
		printf("\n The post fix decrement: %d",v--);
		printf("\n the pre fix decrement: %d",--v);
		return(0);
		//getch();
}
			
