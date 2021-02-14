#include <conio.h> 
#include <stdio.h> 
int main(){
char name[30]; 
int roll;
float perc, physics, english, maths, computers; 
printf("Enter Your Name: "); 
scanf("%s", &name);
printf("Enter Your Roll Number: "); 
scanf("%d", &roll);
printf("\nEnter Your Score of physics: "); 
scanf("%f", &physics);
printf("Enter Your Score of english: "); 
scanf("%f", &english);
printf("Enter Your Score of maths: "); 
scanf("%f", &maths);
printf("Enter Your Score of computers: "); 
scanf("%f", &computers);
perc = (((physics + english + maths + computers)/400)*100); 

printf("\nName: %s\n", name);
printf("Roll Number: %d\n", roll); 
printf("Percentage: %.2f %%\n", perc); 
getch();
return 0;
}
