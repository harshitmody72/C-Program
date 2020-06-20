#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Employee
{
char Ename[20];
int Eid;
float Salary;
char Address[30];
};
void main()
{
struct Employee *Employeeptr,Employee1;
Employeeptr = &Employee1;
printf("\n enter name \n");
scanf("%s",&Employeeptr ->Ename);
printf("\n enter Eid \n");
scanf("%d",&Employeeptr ->Eid);
printf("\n enter Salary \n");
scanf("%f",&Employeeptr-> Salary);
printf("\n enter Address \n");
scanf("%s",&Employeeptr->Address);
printf("Ename: %s \n",Employeeptr->Ename);
printf("Eid: %d\n",Employeeptr-> Eid);
printf("Salary: %f\n",Employeeptr->Salary);
printf("Address: %s\n",Employeeptr->Address);
getch();
}
