/*
Student's name: Prashant Raj Bhikshu
Lab:06
Subject:Programming Fundaments
Date2016/9/28
Program: To find area of a triangle by readingf the sides of trianle
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float a,b,c,e,s,area; 
	printf("Enter the first side: ");
	scanf("%f",&a);
	printf("Enter the second side: ");
	scanf("%f",&b);
	printf("Enter the third side: ");
	scanf("%f",&c);
	s=(a+b+c)/2;
	e=s*(s-a)*(s-b)*(s-c);
	area=pow(e,0.5);
	printf("\n Area of a triangle: %.3f",area);
	getch();
}