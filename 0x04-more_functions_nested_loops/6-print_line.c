#include "main.h"

/**
* print_line - draws a straight line
* @n : number of times the character _ is printed
*
* Return: n is 0 or less, print \n
*/
void print_line(int n)
{
int j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 1; j < n; j++)
{
_putchar(95);
}
_putchar('\n');
}
}
