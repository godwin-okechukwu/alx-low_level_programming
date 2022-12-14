#include "main.h"

/**
 * main - prints characters of the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'a')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
