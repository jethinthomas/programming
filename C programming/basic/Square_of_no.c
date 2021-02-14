#include<conio.h> 
#include<stdio.h> 
int main(){
int i;
printf("Enter Value of i: ");
scanf("%d", &i);
const int squ = i*i;
printf("Square of %d is: %d", i, squ); 
getch();
return 0;
}