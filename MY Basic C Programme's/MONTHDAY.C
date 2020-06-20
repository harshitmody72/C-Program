#include<stdio.h>
#include<conio.h>
void main()
{
int month;
clrscr();
printf("Enter no. of month");
scanf("%d",&month);
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("31 Day's");
break;
case 4:
case 6:
case 9:
case 11:
printf("30 Day's");
break;
case 2:
printf("28- 29 day's");
break;
default:
printf("month is not valid");
break;
}
getch();
}

