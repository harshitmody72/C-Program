#include<stdio.h>
#include<conio.h>
void main()
{
int i,c,sum=0;
clrscr();
printf("enter a number");
scanf("%d",&i);
printf("\nenter the condition");
scanf("%d",&c);
while(i<c)
{
sum = sum + i;
i=i++;
}
printf("\nsum =%d",sum);
getch();
}
