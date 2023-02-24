#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14

*/
void more_numbers(void)
{
int y, n;


for (n = 10; n <= 14; n++)
{
for (y = 0; y <= 14; y++)
{
_putchar(y);
}
_putchar('\n');
}
}

