#include<stdio.h>
#include<conio.h>
void swape(int *a,int*b);
int main()
{
int m,n;
printf("Enter");
scanf("%d%d",m,n);
swape(&m,&n);
return 0;
}
void swape(int *a,int*b)
{
*a = *a+*b;
*b= *a-*b;
*a= *a-*b;
printf("%d\n%d",*a,*b);
getch();
}

