#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: numbers from 0 to 9
 */
void print_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{

		_putchar(m + '0');
	}
	_putchar('\n');
}
