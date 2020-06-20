#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("Enter a value's");
scanf("%d",&a);
e=(a-1);
for(b=1;b<=a;b++)
{
for(c=e;c>=b;c--)
{
printf(" ");
}
for(d=1;d<=b;d++)
{
printf("*");
}
printf("\n");
}
getch();
}