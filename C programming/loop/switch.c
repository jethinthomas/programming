#include<stdio.h>
void main()
{
int a,b;
printf("enter number (10,20,30): ");
scanf("%d",&a);
switch(a)
{
    case 10:printf("you have entered 10\n");
    break;
    case 20:printf("you have entered 20\n");
    break;
    case 30:printf("you have entered 30\n");
    break;
    default:printf("you have entered a random number\n");
    break;
}
getch(); 
return 0;
}