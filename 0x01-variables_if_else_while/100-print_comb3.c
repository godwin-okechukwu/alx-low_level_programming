#include <stdio.h>

/**
 * main - printing different combinations of double-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int units;
	int tens;

	for (tens = 48; tens <= 57; tens++)
	{
		for (units = 48; units <= 57; units++)
		{
			if (!((units == tens) || (tens > units)))
			{
				putchar(tens);
				putchar(units);
				if (!(units == tens && tens == units))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
