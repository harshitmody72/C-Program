#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n;
char ch[10]="JECRC";
clrscr();
//gets(ch);
//n=strlen(ch);
for(i=0;i<=10;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",ch[i]);
}
printf("\n");
}
getch();
}