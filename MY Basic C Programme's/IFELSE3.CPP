#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter Three Number's");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
}
else if(b>c)
{
printf("The greatest among the three number's is =%d",b);
}
if(a>c)
{
printf("The Greatest among the three number's is =%d",a);
}
else if(c>b)
{
printf("The Gretest among the three number's is =%d",c);
}
getch();
}