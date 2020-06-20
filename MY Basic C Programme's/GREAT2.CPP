#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,big;
clrscr();
printf("Enter Two Number's");
scanf("%d%d",&a,&b);
big=(a>b?a:b);
printf("Greatest among the two number's =%d\n",big);
getch();
}