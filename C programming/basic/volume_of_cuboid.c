#include <conio.h> 
#include <stdio.h> 
int main()
{
float l, b, h, vol; 
printf("Enter Length: "); 
scanf("%f", &l); 
printf("Enter Breadth: "); 
scanf("%f", &b); 
printf("Enter Height: "); 
scanf("%f", &h);
vol = l * b * h;
printf("Volumn of Cuboid is: %f", vol); 
getch();
return 0;
}
