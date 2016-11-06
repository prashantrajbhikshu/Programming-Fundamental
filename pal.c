#include<stdio.h>
//include<conio.h>
 
int main(){
int a,b,r,ri=0;
printf("\n Enter a number: ");
scanf("%d",&a);

b=a;
 while( a!=0 )
    {
r=a%10;
printf("\n r= %d",r);
ri=ri*10+r;
printf("\n\t\t ri= %d",ri);
a/=10;
printf("\n\t\t\t\t a= %d",a);
}

if (b==ri){
	printf("\n %d is palindrome",b);
	}
else
	printf("\n %d is not palindrome",b);
return 0;

}

