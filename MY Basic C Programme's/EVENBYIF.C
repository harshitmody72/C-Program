#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a number");
scanf("%d",&a);
if(a%2==0)
{
printf("Even");
}
if(a%2!=0)
{
printf("odd");
}
getch();
}