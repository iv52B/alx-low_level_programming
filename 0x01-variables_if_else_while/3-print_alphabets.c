#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char y;
	char m;

	y = 'a';
	m = 'A';
	while (y <= 'z')
	{
		putchar(y);
		y++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
