#include <conio.h>
#include <stdio.h>
int main()
{
int a[5][2] = {{1,10},{2,9},{3,8},{4,7},{5,6}};
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("%d\t", a[i][j]);
    }
    printf("\n");
}
getch(); 
return 0;
}
