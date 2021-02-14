#include <conio.h> 
#include <stdio.h>
enum week{monday, tuesday, wednesday, thrusday, friday, saturday, sunday};
int main()
{
enum week day; 
day = sunday;
printf("The day chosen: %d\n", day); 
getch();
return 0;
}
