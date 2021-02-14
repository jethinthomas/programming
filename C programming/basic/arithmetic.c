#include<conio.h>
#include<stdio.h> 
int main(){
int i, j;
printf("Enter 1st number: "); 
scanf("%d", &i); printf("Enter 2nd number: "); 
scanf("%d", &j);
int sum = i+j; int diff = i-j; int mult = i*j; int div = i/j;
printf("Sum: %d\n", sum); 
printf("Difference: %d\n", diff);
printf("Multiplication: %d\n", mult); 
printf("Division: %d", div);
getch(); return 0;
}
