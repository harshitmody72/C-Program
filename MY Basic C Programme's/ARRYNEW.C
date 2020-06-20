#include<stdio.h>
#include<conio.h>
void main()
{
float avg;
int a,b, st[10], sum =0;
printf("Enter the number");
for(a=0;a<10;a++)
{
scanf("%d",&st[a]);
}
for(b=0;b<10;b++)
sum = sum + st[b] ;
avg= (float)sum/10;
printf("%f",avg);
getch();
}

