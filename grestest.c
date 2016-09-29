/*
Student's name: Prashant Raj Bhikshu
Lab:06
Subject:Programming Fundaments
Date2016/9/28
Program: To find greatest number
*/

#include<stdio.h>
#include<conio.h>
void main(){
	float a,b,c;
	printf("Enter first number: ");
	scanf("%f",&a);
	printf("Enter second number: ");
	scanf("%f",&b);
	printf("Enter third number: ");
	scanf("%f",&c);
	if (a>b && a>c)
		printf("%.2f is greatest among 3",a);
	else if (b>c && b>a)
		printf("%.2f is greatest among 3",b);
	else
		printf("%.2f is greatest among 3",c);
	getch();
}

	