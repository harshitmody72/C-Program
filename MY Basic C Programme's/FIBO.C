#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,b=1,c,a=0;
clrscr();
printf("Enter a Number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d,",a);
c=a+b;
a=b;
b=c;
 }
 getch();
 }
