#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number of month");
scanf("%d",&a);
switch(a)
{
case 1:
printf("jan");
break;
case 2:
printf("feb");
break;
case 3:
printf("Mar");
break;
case 4:
printf("Apr");
break;
case 5:
printf("may");
break;
case 6:
printf("jun");
break;
case 7:
printf("jul");
break;
case 8:
printf("Aug");
break;
case 9:
printf("Step");
break;
case 10:
printf("Oct");
break;
case 11:
printf("Nov");
break;
case 12:
printf("Dec");
break;
default:
printf("not a month");
}
getch();
}
