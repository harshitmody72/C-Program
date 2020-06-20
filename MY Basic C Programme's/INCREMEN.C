#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a number");
scanf("%d",&a);
printf("Preincrement=%d\n",++a);
printf("a=%d\n",a);
printf("Postincrement=%d\n",a++);
printf("a=%d\n",a);
printf("Predecrement=%d\n",--a);
printf("a=%d\n",a);
printf("postdecrement=%d\n",a--);
printf("a=%d\n",a);
getch();
}