#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,h,l,g,d;
int a=1 ;
clrscr();
printf("Enter a number");
scanf("%d",&n);
h=n-1;
g=n-2;
for(i=1;i<=n;i++)
{
	for(j=i;j<=h;j++)
		printf(" ");
	for(k=1;k<=i;k++)
	{
		printf("%d ",a);
		a++;
	}
	for(l=1;l<g;l++)
		printf(" ");
	printf("\n");
}
getch();
}
