#include <conio.h> 
#include <stdio.h> 
int main(){
int a=100,b; 
b = a;printf("(b = a) = %d\n", b);
b += a;printf("(b += a) = %d\n",b);
b -= a;printf("(b -= a) = %d\n", b); 
b *= a;printf("(b *= a) = %d\n", b); 
b /= a;printf("(b /= a) = %d\n", b); 
b %= a;printf("(b %%= a) = %d\n", b);
 getch();
return 0;
}
