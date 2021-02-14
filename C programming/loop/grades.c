#include <conio.h> 
#include <stdio.h> 
int main()
{
float marks[6], total_marks = 0, perc = 0;
int i;

printf("Enter Number of Physics: ");
scanf("%f", &marks[0]);
printf("Enter Number of Chemistry: ");
scanf("%f", &marks[1]);
printf("Enter Number of Maths: ");
scanf("%f", &marks[2]);
printf("Enter Number of English: ");
scanf("%f", &marks[3]);
printf("Enter Number of Biology: ");
scanf("%f", &marks[4]);
total_marks += marks[0];
total_marks += marks[1];
total_marks += marks[2];
total_marks += marks[3];
total_marks += marks[4];

printf("Total Marks: %.02f\n", total_marks); perc = (total_marks / 500) * 100;
printf("Total Percentage: %.02f\nGrade: ", perc); 
if (perc > 95)
{printf("Extra Ordinary");}
else if (perc > 80 && perc <= 95)
{printf("Distinction");}
else if (perc > 65 && perc <= 80)
{printf("First division");}
else if (perc > 55 && perc <= 65)
{printf("Second division");}
else if (perc > 40 && perc <= 55)
{printf("Third division");}
else
{printf("Failed");}
getch(); 
return 0;
}
