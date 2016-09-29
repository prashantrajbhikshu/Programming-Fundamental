/*
Students's Name: Prashant Raj Bhikshu
Subject:Programming Fundamentals
Lab:07
Program: To print percentage of student assuming full marks is 100
*/
#include<stdio.h>
#include<conio.h>
int main(){
	char name [20];
	float m1,m2,m3,m4,m5,m6,m7,total,percent;
	printf("\n Enter student's name: ");
	scanf("%s",name);
	printf("\n Enter marks in Computer:");
	scanf("%f",&m1);
	printf("\n Enter marks in English:");
	scanf("%f",&m2);
	printf("\n Enter marks in Nepali:");
	scanf("%f",&m3);
	printf("\n Enter marks in Science:");
	scanf("%f",&m4);
	printf("\n Enter marks in Social:");
	scanf("%f",&m5);
	printf("\n Enter marks in O.maths:");
	scanf("%f",&m6);
	printf("\n Enter marks in EPH:");
	scanf("%f",&m7);
	total=m1+m2+m3+m4+m5+m6+m7;
	percent=total/7;
	printf("\n Percentage: %.2f ",percent);
	
	getch();
}