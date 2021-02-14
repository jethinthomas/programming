#include <conio.h> 
#include <stdio.h> 
int main()
{
int i=0;
int marks[5]; 
marks[0] = 80;
marks[1] = 55;
marks[2] = 78;
marks[3] = 93;
marks[4] = 81; 
printf("1D array:\n"); 
for (int i = 0; i < 5; i++)
{
printf("Mark in subject %d : %d\n", i, marks[i]);
}
getch(); 
return 0;
}
