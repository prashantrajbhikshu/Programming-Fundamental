/* 
Students's Name:Prashnat Raj Bhikshu
Subject: Programming Fundamental
Roll:
Program: WAP to Print Area of Trapezium
Lab no.:01
Date:2016/9/18
*/

#include<stdio.h>
#include<conio.h>

void main(){
	float a,b,h,area;
	printf("Enter the base of trapezium");
	scanf("%f",&b);
	printf("Enter the length of trapezium");
	scanf("%f",&a);
	printf("Enter the height of trapezium");
	scanf("%f",&h);
	area=0.5*(a+b)*h;
	printf("Area of trapezium=%f",area);
	
	getch();
}