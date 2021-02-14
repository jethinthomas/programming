#include<stdio.h>
//extern int x=32;
//int b=8;
void main()
{
    extern int x=32;
    int b=8;
    int a=28;
    printf("the value a variable is %d\n",a);
    printf("the value if extern variable x and b :%d %d",x,b);
    x=15; 
    printf("the value of modified variable x%d \n",x);

}

