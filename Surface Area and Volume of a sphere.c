/* 
Students's Name:Prashnat Raj Bhikshu
Subject: Programming Fundamental
Roll:
Program: WAP to Print Surface Area and Volume of a sphere
Lab no.:01
Date:2016/9/18

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main(){
	float rad,sur,vol;
	printf("Enter the radius of sphere");
	scanf("%f",&rad);
	
	sur=4*pi*pow(rad,3);
	printf("\nSurface area of Sphere with radius %f: %f",rad,sur);
	
	vol=(4/3)*pi*pow(rad,3);
	printf("\nVolume of Sphere with radius %f: %f",rad,vol);
	
	getch();
}
