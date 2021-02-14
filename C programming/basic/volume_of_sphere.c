#include <conio.h>  
#include <stdio.h> 
int main()
{
float i, area, vol, pi; 
printf("Enter value of PI: "); 
scanf("%f", &pi); 
printf("Enter radius: "); 
scanf("%f", &i);
area = ((4/3) * pi * i * i); 
vol = ((4/3) * pi * i * i * i);
printf("Area of sphere: %f\n", area); 
printf("Volumn of sphere: %f", vol); 
getch();
return 0;
}
