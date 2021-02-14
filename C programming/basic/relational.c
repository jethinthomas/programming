#include <conio.h> 
#include <stdio.h> 
int main()
{
int a=69,b=15,c; 
c = a==b;printf("(%d==%d) = %d\n", a, b, c);
c = a>b;printf("(%d>%d) = %d\n", a, b, c); 
c = a<b;printf("(%d<%d) = %d\n", a, b, c);
c = a!=b;printf("(%d!=%d) = %d\n", a, b, c); 
c = a>=b;printf("(%d>=%d) = %d\n", a, b, c); 
c = a<=b;printf("(%d<=%d) = %d\n", a, b, c); 
getch();
return 0;
}
