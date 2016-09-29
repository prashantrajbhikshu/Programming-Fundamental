/*
Student's Name:Prashnat Raj Bhikshu
Subject:Programming Fundamentals
Lab: 02
Program:To print Area and Circumference of Circle
Date: 2016/09/19
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14151926536
void main(){
	float rad,area,circum;
	printf("\n Enter radius of a circle: ");
	scanf("%f",&rad);
	area=pi*pow(rad,2);
	printf("\n Area of a circle with radius %.2f:  %.3f",rad,area);	
	circum=2*pi*rad;
	printf("\n Circumference of a circle with radius %.2f:  %.3f",rad,circum);
		
	getch();
}