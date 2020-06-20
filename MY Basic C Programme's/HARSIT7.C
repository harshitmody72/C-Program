#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter Two Number's");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("After Swapping a=%d and b=%d",a,b);
getch();
}