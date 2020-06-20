#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,n,a,b,c;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	c=i;
	c=c+2;
	for(j=n;j>=i;j--)
	{
		b=65+n-j;
		printf("%c",b);
	}
	if(i==1)
	printf("");
	else if(i==2)
	printf(" ");
	else
	{
		for(k=1;k<c;k++)
			printf(" ");
	}
	for(l=n;l>i;l--)
	{
		a=65+n-l ;
		printf("%c",a);
	}
	printf("\n");
	}
getch();

}