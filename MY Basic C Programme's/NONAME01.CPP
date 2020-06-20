#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,n,m,a=2,b=3,c=1;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=i;j<n;j++)
		printf(" ");
	printf("%d ",c);
	if((i%2!=0)&&(i!=1))
	{
		for(k=1;k<=i-2;k++)
		{
			printf("%d ",a);
			a=a+2;
		}
	}
	if((i%2==0)&&(i!=2))
	{
		for(m=1;m<=i-2;m++)
		{
			printf("%d ",b);
			b=b+2;
		}
	}
	if(i!=1)
		printf("%d ",c);
	printf("\n");
}
getch();
}

