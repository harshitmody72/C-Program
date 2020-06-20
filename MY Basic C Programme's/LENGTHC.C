#include<stdio.h>
#include<conio.h>
void main()
{
float d;
clrscr();
printf("Enter the length in kilometer = ");
scanf("%f",&d);
printf("Conversion In -\n");
printf("Microns=%.1f\n",1000000000*d);
printf("Millimeter=%.1f\n",1000000*d);
printf("Centimeter=%.1f\n",100000*d);
printf("Meter=%.3f\n",1000*d);
printf("Inch=%f\n",39370.08*d);
printf("Feet=%f\n",3280.84*d);
printf("Yards=%f\n",1093.613*d);
printf("Miles=%f\n",0.621371*d);
getch();
}
