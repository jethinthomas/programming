#include <conio.h> 
#include <stdio.h> 
int main(){
int a=100,b=50,c=75,d; 
d = (a==b) && (c>b);printf("(a==b) && (c>b) = %d\n", d);
d = (a==b) && (c<b);printf("(a==b) && (c<b) = %d\n", d);
d = (a==b) || (c<b);printf("(a==b) || (c<b) = %d\n", d);
d = (a!=b) || (c>b);printf("(a!=b) && (c>b) = %d\n", d);
d = !(a==b);printf("!(a==b) = %d\n", d);
d = !(a!=b);printf("!(a!=b) = %d\n", d); 
getch();
return 0;
}
