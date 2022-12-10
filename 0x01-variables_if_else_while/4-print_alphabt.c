#include <stdio.h>

/**
 * main - prints lowercase alphabets without 'e' and 'q'
 * Return: Always 0
 */
int main(void)
{
	char alpha_low;

	for (alpha_low = 'a'; alpha_low <= 'z'; alpha_low++)
	{
		if (alpha_low != 'e' && alpha_low != 'q')
			putchar(alpha_low);
	}

	putchar('\n');

	return (0);
}
