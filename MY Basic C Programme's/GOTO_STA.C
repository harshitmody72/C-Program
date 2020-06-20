#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter a charcter");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("vowel");
break ;
case 't':
printf("not");
goto case 'a';
default :
printf("not vowel");
}
getch();
}