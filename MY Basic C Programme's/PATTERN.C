#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
printf("*");
}
printf("\n");
}
getch();
}