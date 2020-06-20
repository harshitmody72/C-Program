#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
int d,e,c;
clrscr();
printf("Enter Two value's");
scanf("%f%f",&a,&b);
printf("\nenter the operation");
printf("\n1. Add");
printf("\n2. Sub");
printf("\n3. multiply");
printf("\n4. divide");
printf("\n5. reminder");
scanf("%d",&c);
d=a;
e=b;
switch (c)
{
case 1:
printf("sum=%.2f",a+b);
break;
case 2:
printf("Sub = %.2f",a-b);
break;
case 3:
printf("multiply =%.2f",a*b);
break;
case 4: if(b==0)
{
printf("The value should graeter then 0");
}else
printf("divide =%.2f",a/b);
break;
case 5:
printf("reminder =%.2f",d%e);
break;
default :
printf("plz input correct number");
}
getch();
}
