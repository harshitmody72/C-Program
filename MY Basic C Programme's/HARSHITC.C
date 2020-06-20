#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
int c,d;
clrscr();
printf("Enter Two Number's");
scanf("%f%f",&a,&b);
printf("Sum=%.2f\n",a+b);
printf("Subtraction=%.2f\n",a-b);
printf("Multiplication=%.2f\n",a*b);
printf("Division=%.2f\n",a/b);
c=a;
d=b;
printf("Reminder=%d\n",c%d);
getch();
}
