#include<stdio.h>
#include<conio.h>
int fibo(int*k);
void main()
{
int n,a,b,c,i;
printf("enter a number");
scanf("%d",&n);
a=0;
b=1;
for(i=1;i<=n;i++)
{
fibo(&a);
c=a+b;
b=a;
a=c;
}
getch();
}
int fibo(int *k)
{
printf("%d",*k);
return 0;
}
