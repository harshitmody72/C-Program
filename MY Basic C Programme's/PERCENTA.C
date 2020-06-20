#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,f;
printf("Enter The Marks of Maths = ");
scanf("%d",&a);
printf("\nEnter The Marks of English = ");
scanf("%d",&b);
printf("\nEnter The Marks of Hindi = ");
scanf("%d",&c);
printf("\nEnter The Marks of Science = ");
scanf("%d",&d);
printf("\nEnter The Marks of Computer = ");
scanf("%d",&e);
f=a+b+c+d+e;
printf("\nAggregate Marks = %d",f);
printf("\nPercentage Obtained = %d%",f/5);
getch();
}

