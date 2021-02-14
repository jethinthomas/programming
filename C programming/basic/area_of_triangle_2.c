#include <conio.h> 
#include <stdio.h> 
#include <math.h> 
int main()
{
float a, b, c, area, side;
printf("Enter Value of side 1: ");
scanf("%f", &a);
printf("Enter Value of side 2: ");
scanf("%f", &b);
printf("Enter Value of side 3: ");
scanf("%f", &c);

side = (a + b +c)/2;
area = sqrt(side*(side-a)*(side-b)*(side-c));
printf("\nThe side of Triangle: %f\n", side);
printf("Area of triangle: %f", area);
getch();
return 0;
}
