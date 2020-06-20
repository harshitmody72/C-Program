#include<stdio.h>
#include<conio.h>
void main()
{
float r;
clrscr();
printf("Enter Radius");
scanf("%f",&r);
printf("Area=%f\n",3.14*r*r);
printf("Perimeter=%f\n",2*3.14*r);
printf("Good Bye");
getch();
}