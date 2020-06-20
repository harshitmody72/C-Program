#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
while(i!=0)
{
printf("Enter a Number");
scanf("%d",&i);
sum=i+sum;
}
printf("sum of above number's is = %d",sum);
getch();
}


