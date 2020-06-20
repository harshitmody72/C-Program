#include<stdio.h>
#include<conio.h>
void main()
{
float basic,da,hra,gross_salary;
clrscr();
printf("Enter your Basic salary");
scanf("%f",&basic);
da=(basic*40)/100;
hra=(basic*20)/100;
gross_salary=basic+da+hra;
printf("Gross Salary = %.1f\n",gross_salary);
getch();
}