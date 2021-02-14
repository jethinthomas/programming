#include<conio.h> 
#include<stdio.h> 
int main(){
float height, base; 
float area;
printf("Enter height of triangle: "); 
scanf("%f", &height); 
printf("Enter base of triangle: "); 
scanf("%f", &base);
area = (height * base)/2;
printf("Area of triangle with height %f and base %f is: %f", height, base, area);
getch();
return 0;
}
