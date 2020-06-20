#include<stdio.h>
#include<conio.h>
void main()
{
float l,b,s,r;
clrscr();
printf("Enter The length of rectangle = ");
scanf("%f",&l);
printf("\nEnter The Breadth of rectangle = ");
scanf("%f",&b);
printf("\nEnter The Radius of Circle = ");
scanf("%f",&r);
printf("\nArea Of Rectangle =%.2f",l*b);
s=l+b;
printf("\nPerimeter of Rectangle =%.2f",2*s);
printf("\nArea of Circle =%.2f",3.14*r*r);
printf("\nCircumference of Circle =%.2f",2*3.14*r);
getch();
}