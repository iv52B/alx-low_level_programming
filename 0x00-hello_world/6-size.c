#include<stdio.h>
/**
* main: entry of the point of the program
*
* return: 0 (success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: %zu byte(s)\n", sizeof(a));
printf("Size of int: %zu byte(s)\n", sizeof(b));
printf("Size of long int: %zu byte(s)\n", sizeof(c));
printf("Size of long long int: %zu byte(s)\n", sizeof(d));
printf("Size of float: %zu byte(s)\n", sizeof(f))
return (0);
}
