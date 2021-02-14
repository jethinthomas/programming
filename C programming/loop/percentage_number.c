#include <conio.h> 
#include <stdio.h> 
int main()
{
float a, b, perc;
printf("Enter 1st Number: ");
scanf("%f", &a);
printf("Enter 2nd Number: ");
scanf("%f", &b);
perc = (a/b)*100;
printf("%.02f is %.02f%% of %.02f", a, perc, b);
getch();
return 0;
}
