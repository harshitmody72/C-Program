#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
do
{
printf("enter a number");
scanf("%d",&i);
i=i++;
sum=i+sum;
}while(i!=1);
printf("sum= %d",sum);
getch();
}