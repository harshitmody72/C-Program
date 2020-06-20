#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two number's");
scanf("%d%d",&a,&b);
b=a+b;
a=b-a;
b=b-a;
printf("After swapping a=%d and \t b=%d ",a,b);
getch();
}


