#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,big;
clrscr();
printf("Enter Three Number's");
scanf("%d%d%d",&a,&b,&c);
big=(a>b?(a>c?a:c):(b>c?b:c));
printf("The Greatest Among The Three Number's is %d",big);
getch();
}