#include <conio.h> 
#include <stdio.h> 
int main()
{
int a, b;
printf("Enter Value of a: ");
scanf("%d", &a);
printf("Enter Value of b: ");
scanf("%d", &b);

printf("Before Swap\na=%d, b=%d", a, b);
a=a+b;
b=a-b;
a=a-b;
printf("\n\nAfter Swap\na=%d, b=%d", a, b);
getch();
return 0;
}
