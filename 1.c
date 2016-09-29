#include<stdio.h>
#include<conio.h>

void main()
{
    int f;
    float c;
    printf("Enter the value of Fahrenheit ");
    scanf("%d",&f);

    c=(f-32)/1.8;
      printf("\n Celsius=%.2f",c);
    getch();
}