#include<stdio.h>
#include<conio.h>
void main()
{
int v,i,j,k,l,n,m,a,b,c,d=1;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
a=65+j-i;
printf("%c",a);
}
if(i==1)
{
printf("");
}
else
{
for(v=1;v<=d;v++)
{
printf(" ");
}
d=d+2;
}
if(i==1)
{
for(l=1;l<n;l++)
{
b=65+n-l-1;
printf("%c",b);
}
}
else
{
for(m=i;m<=n;m++)
{
c=65+n-m;
printf("%c",c);
}
}
printf("\n");
}
getch();
}