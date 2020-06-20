#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,a=1;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<=n-1;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d ",a);
a++;
}
}
getch();
}