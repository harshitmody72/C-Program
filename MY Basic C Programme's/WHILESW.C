#include<stdio.h>
#include<conio.h>
void main()
{
int i=11,j,k,l,m,n,a,b,c,d,sum=1,count=0;
while(i!=10)
{
	printf("Select a option\n");
	printf("1. Factorial of a number\n2. Prime or not\n3. Odd or Even\n4. Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Enter a number\n");
			scanf("%d",&b);
			for(k=1;k<=b;k++)
			sum=sum*k;
			printf("Factorial of the number is %d",sum);
			i++;
			sum=1;
			break;

		case 2:
			printf("Enter a number");
			scanf("%d",&a);
			for(j=1;j<=a;j++)
			{
				if(a%j==0)
				count++;

			}
			if(count==2)
			printf("Number is prime");
			else
			printf("Number is not prime");
			count=0;
			i++;
			break;
		case 3:
			printf("Enter a number");
			scanf("%d",&c);
			if(c%2==0)
			printf("number is even");
			else
			printf("number is odd");
			i++;
			break;
		case 4:
			i=10;
			break;
		default:
			printf("Plz enter a correct input");

	}
	printf("\n\n\n\n");
}
getch();
}



