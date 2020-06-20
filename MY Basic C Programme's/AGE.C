#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter your age");
scanf("%d",&a);
if(a>=18)
{
printf("You are eligible for voting");
}
else
{
printf("you are not eligible for voting");
}
getch();
}