#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,n,x;
float sum,y,z;
clrscr();
printf("Enter the value of 'x' ");
scanf("%d",&x);
j=x-1;
z = (float)j/x;
sum= z;
printf("enter the term of series");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
y= pow(z,i) * 0.5;
sum = sum+y;
}
printf("%f",sum);
getch();
}
