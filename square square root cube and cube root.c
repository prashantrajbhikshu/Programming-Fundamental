/* 
Students's Name:Prashnat Raj Bhikshu
Subject: Programming Fundamental
Roll:
Program: WAP to Print Square Of Any Number
Lab no.:01
Date:2016/9/18
*/

#include<stdio.h>
#include<conio.h>

void main(){
	float n,sq,sqroot,cu,curoot;
	printf("Enter any number");
	scanf("%f",&n);
	
	//sq=n*n;
	sq=pow(n,2);
	printf("\nSquare of %f: %f",n,sq);
	
	sqroot=sqrt(n);
	printf("\nSquare root of %f: %f",n,sqroot);
	
	cu=pow(n,3);
	printf("\nCube of %f: %f",n,cu);
	
	curoot=cbrt(n);
	printf("\nCube root of %f: %f",n,curoot);
	getch();
}