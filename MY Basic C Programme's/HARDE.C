#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,a,b;
clrscr();
printf("Enter a number");
scanf("%d",&n);
a=n*2 ;
b=a-1;
n=n+65;
for(i=65;i<=n;i++)
{
for(j=65;j<=a;j++)
{
printf("%d",b);
}
printf("\n");
}
getch();
}

