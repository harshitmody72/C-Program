#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
int d,e;
clrscr();
printf("Enter Two Value's");
scanf("%f%f",&a,&b);
printf("\nEnter the number to performe the operation\n 1. Add \n 2. Sub \n 3. Multiply\n 4. Divide \n 5. Reminder \n");
scanf("%f",&c);
d=a;
e=b;
if(c==1)
{
printf("sum = %.2f",a+b);
}
else if(c==2)
{
printf("Sub = %.2f",a-b);
}
else if(c==3)
{
printf("multiply =%.2f",a*b);
}
else if(c==4)
{
printf("Divide =%.2f",a/b);
}
else if(c==5)
{
printf("reminder =%d",d%e);
}
else
{
printf("plz enter the correct operation");
}
getch();
}