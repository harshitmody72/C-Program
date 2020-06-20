#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter single character");
ch=getchar();
switch(ch)
{
case 'a':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'e':
case 'i':
case 'o':
case 'u':
printf("vowel");
break;
default:
printf("consonent");
}
getch();
}