#include "main.h"

/**
 * print_alphabet_x10 prints the alphabet ten times
 */
void print_alphabet_x10(void)
{
	int ten;
	char al;

	for (ten = 0; ten < 10; ten++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
	_putchar('\n');

}
