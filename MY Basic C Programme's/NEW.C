#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter zero to exist  the loop");
while(a==48)
{
	scanf("%c",&a);
	if(a>=65 && a<=90)
       {
	a=a+32;
       }
	else if(a>=97 &&  a<=122)
	{
	a=a-32;
	}
	printf("%c",a);
}
getch();
}
