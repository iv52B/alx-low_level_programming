#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	printf("Size of int: %lu bytes", sizeof(intType));
   	 printf("Size of float: %lu bytes", sizeof(floatType));
   	 printf("Size of double: %lu bytes", sizeof(doubleType));
    	printf("Size of char: %lu byte", sizeof(charType));
	return (0);
}
