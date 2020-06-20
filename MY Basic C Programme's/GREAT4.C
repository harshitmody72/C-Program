#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,big;
clrscr();
printf("Enter four number");
scanf("%d%d%d%d",&a,&b,&c,&d);
big=(a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d)));
printf("Greatest among the four number =%d",big);
getch();
}