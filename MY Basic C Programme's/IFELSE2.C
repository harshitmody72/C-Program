#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter two number's");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("The greatest number is=%d\n",a);
}
else if(b>a)
{
printf("The greatest number is=%d\n",b);
}
else
{
printf("Both are equal \n");
}
getch();
}