#include <conio.h> 
#include <stdio.h> 
#include <math.h> 
int main()
{
int a, flag = 1; 
printf("Enter a Number: "); 
scanf("%d", &a);
for (int i = 2; i <= sqrt(a); i++)
{
if (a % 2 == 0)
{flag = 0; break;}
}
if (a==1)
{flag = 0;}
// printf("Number %d is: %s", a, (flag==1)? "Prime":"Not Prime");
if(flag==1)
{
    printf("%d is a prime number",a);
}
else
{
    printf("%d is not a prime number",a);
}

getch(); 
return 0;
}
