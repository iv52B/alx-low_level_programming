#include "main.h"

/**
 *  print_alphabet - prints the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char f;

	f = 'a';

	for (; f <= 'z'; f++)
	{
		_ putchar(f);
	}
	 _ putchar('\n');
	return (0);
}
