#include<stdio.h>
#include<conio.h>
int fact(int *a);
void main()
{
int m,n;
printf("Enter");
scanf("%d",&n);
m=fact(&n);
printf("%d",m);
getch();
}
int fact(int *a)
{
int b;
b=*a;
if(b== 1)
return 1;
else
return (b*fact&(*a -1));
}