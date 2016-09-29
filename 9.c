#include<stdio.h>
#include<conio.h>

void main(){
	//char ch;
	int marks1,marks2,marks3,marks4,marks5,marks6,marks7,total;
	float percent;
	//printf("\n Student's Name: ");
	//scanf("%c",ch);	
	printf("\n Enter marks in English: ");
	scanf("%d",&marks1);
	printf("\n Enter marks in Nepali: ");
	scanf("%d",&marks2);
	printf("\n Enter marks in C. Maths: ");
	scanf("%d",&marks3);
	printf("\n Enter marks in Science: ");
	scanf("%d",&marks4);
	printf("\n Enter marks in Social: ");
	scanf("%d",&marks5);
	printf("\n Enter marks in Computer: ");
	scanf("%d",&marks6);
	printf("\n Enter marks in O. Maths: ");
	scanf("%d",&marks7);
	total=marks1+marks2+marks3+marks4+marks5+marks6+marks7;
	printf("\n total= %d",total);
	percent=total/7;
	printf("\n Percentage: %.2f",percent);
	getch();
}