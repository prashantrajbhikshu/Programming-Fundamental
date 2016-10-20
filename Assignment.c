/*
 * Student's Name:Prashnat raj bhikshu 
 * Subject: Programming Fundamentals
 * Progarm: Use of assignment operator
 * Date:2016/10/20
*/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\n Enter a number: ");
    scanf("%d",&a);
    printf("\n Enter any other number: ");
    scanf("%d",&b);
    a += b;
    printf("\n Use of += : %d",a);
    
    a -= b;
    printf("\n Use of -= : %d",a);
    
    a *= b;
    printf("\n Use of *= : %d",a);
    
    a /= b;
    printf("\n Use of /= : %d",a);

	a %= b;
    printf("\n Use of %= : %d",a);
    a = b;
    printf("\n Use of = (a=b): %d",b);
	return 0;
}
