#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter the character");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
{
ch=ch+32;
}
else
{
ch=ch-32;
}
printf("%c",ch);
getch();
}
