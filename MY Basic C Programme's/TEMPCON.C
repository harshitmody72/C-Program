#include<stdio.h>
#include<conio.h>
void main()
{
float f,b,g=5,h=9;
float a;
clrscr();
printf("Enter The Temperature of City (in Fahrenheit degrees) = ");
scanf("%f",&f);
a=g/h;
b=f-32;
printf("Temperature of City (in centigrade degrees) = %f",b*a);
getch();
}

