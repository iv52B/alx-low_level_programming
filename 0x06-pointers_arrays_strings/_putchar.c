#include "mai.h"
#include <unistd.h>
/**
 * _putchar.c - writes the character c to stdout
 * @c : the character input
 *
 * Return: on sucess 1
 */
int_putchar (char c)
{
	return (write(1, &c, 1))
}
