
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,r,count=0,sum=0,temp,k;
clrscr();
printf("Enter The number");
scanf("%d",&x);
k=x;
temp=x;
while(x!=0)
{
count++;
x=x/10;
}
while(k!=0)
{
r=k%10;
sum=sum+pow(r,count);
k=k/10;
}
if(temp==sum)
printf("number is chutiya");
else
printf("no. is not chutiya");
getch();
}