#include <stdio.h>
/**
 *  main - Prints the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[26] = 'abcdefghijklmnopqrstuvwxyz';
	int j;

	for (j = 0; j < 26; j++)
	{
		putchar(alpha[j]);
	}
	putchar('\n');
	return (0);
}
