#include<conio.h>
#include<stdio.h>
int main(){
const float pi = 3.14;
float i, area; printf("Enter radius: "); 
scanf("%f", &i);
area = pi * i * i;
printf("Area: %f", area); 
getch();
return 0;
}
