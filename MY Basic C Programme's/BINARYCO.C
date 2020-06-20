#include<stdio.h>
#include<conio.h>
#include<math.h>
int sq(long int a);
void main()
{
long int n,m;
printf("enter a number");
scanf("%ld",&n);
m=sq(n);
printf("%ld",m);
getch();
}
int sq(long int a)
{
int d=0,b,i=0;
while(a!=0)
{
b=a%10;
d=d+b*pow(2,i);
a=a/10;
++i;
}
return d;
	 }


