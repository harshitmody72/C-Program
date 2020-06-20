#include<stdio.h>
#include<conio.h>
void chars(int);
void main()
{
int i,j,k,n,m;
clrscr();
printf("Enter a Number");
scanf("%d",&n);
printf(" \npattern print in \n1. Integer\n2. char");
scanf("%d",&m);
if(m==1)
{
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
printf(" ");
for(k=1;k<=i;k++)
printf("%d",k);
printf("\n");
}
}
else if(m==2)
{
chars(n);
}
else
printf("chutiya ha kya");
getch();
}
void chars(int x)
{

int i,j,k,n;
clrscr();
n=x+65;
for(i=65;i<=n;i++)
{
for(j=i;j<n;j++)
printf(" ");
for(k=65;k<=i;k++)
printf("%c",k);
printf("\n");
}
getch();
}
