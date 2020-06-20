#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
clrscr();
printf("Enter Temperature in Celsius:");
scanf("%f",&a);
b=(a*9/5)+32;
printf("%.2f Celsius = %.2f Fahrenheit", a, b);
getch();
}