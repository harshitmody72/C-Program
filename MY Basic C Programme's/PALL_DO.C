#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,sum=0,count=0;
printf("Enter a number");
scanf("%d",&x);
y=x;
z=x;
while(x!=0)
{
sum = sum*10;
sum = sum + (x%10);
x=x/10;
}
do
{
count++;
y=y/10;
}while(y!=0);
if (sum == z)
printf("yes");
else
printf("no");
printf("\n%d",sum);
printf("\n%d",count);
getch();
}

