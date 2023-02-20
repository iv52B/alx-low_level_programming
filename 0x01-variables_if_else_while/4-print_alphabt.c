#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char f;

	f = 'a';

	while (f <= 'z')
	{
		if (f == 'q' && f == 'e')
		{
			putchar(f);
			f++;
		}
	}
	putchar('\n');
	return (0);
}


