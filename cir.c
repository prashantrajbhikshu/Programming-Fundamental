#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.141519
void main(){
	float r1,r2,areain,areaout,area_bet;
	printf("Enter radius of inner circle: ");
	scanf("%f",&r1);
	printf("Enter radius of outer circle: ");
	scanf("%f",&r2);
	areain=pi*pow(r1,2);
	//areain=3.14*rin*rin;
	printf("\n Area of inner ciecle: %.3f",areain);
	//areaout=3.14*rout*rout;
	areaout=pi*pow(r2,2);
	printf("\n Area of outer ciecle: %.3f",areaout);
	area_bet=areaout-areain;
	printf("\n Area betwwen two circles: %.3f",area_bet);
	getch();
}
