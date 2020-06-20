#include<stdio.h>
#include<conio.h>
void main()
{
float salary,ta,da;
clrscr();
printf("Enter Salary");
scanf("%f",&salary);
ta=(10*salary)/100;
da=(12*salary)/100;
printf("The gross salary is = %f\n",salary+ta+da);
getch();
}