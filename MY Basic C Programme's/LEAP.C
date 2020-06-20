#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the year");
scanf("%d",&a);
if((a%4==0)||(a%400==0)&&(a%100!=0))
printf("leap year");
else
printf("Not a leap year");
getch();
}