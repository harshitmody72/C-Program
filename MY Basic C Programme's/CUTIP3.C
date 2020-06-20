#include<stdio.h>
#include<conio.h>
int sum (int d ,int e);
void main()
{
int a,b,f,w;
clrscr();
printf("Enter a value");
scanf("%d%d",&b,&f);
a= sum(b,f);
w= sum(b,f);
printf("square=%d",a);
printf("sguare=%d",w);
getch();
}
int sum(int d, int e)
{
int c,t;
c=d*d;
t=e*e;
return c,t;
}

