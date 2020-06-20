#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char st1[20],st2[20],st3[20],st4[20],st5[20];
int mst1,mst2,mst3,mst4,mst5;
clrscr();
printf("enter the name's\n ");                                  //strlen(st1)
gets(st1);
gets(st2);
gets(st3);
gets(st4);
gets(st5);
printf("Enter the mark's");
scanf("%d%d%d%d%d",&mst1,&mst2,&mst3,&mst4,&mst5);
puts(st1);
printf(" =%d\n",mst1);
puts(st2);
printf(" =%d\n",mst2);
puts(st3);
printf(" =%d\n",mst3);
puts(st4);
printf(" =%d\n",mst4);
puts(st5);
printf(" =%d\n",mst5);
getch();
}


