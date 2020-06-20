#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0;
clrscr();
printf("enter a number to check the number is prime or not");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
if(a%b==0)
{
c=c++;
}
}
if(c==2)
{
printf("\nnumber is prime");
}
else
{
printf("\nnumber is not prime");
}
if(a==0)
printf(" nor composite");
if(a==1)
printf(" nor composite");
if(a%2==0)
printf("\nand the number is Even");
else
printf("\nand the number is odd");
getch();
}