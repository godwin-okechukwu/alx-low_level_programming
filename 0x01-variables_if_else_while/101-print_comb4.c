#include <stdio.h>

/**
 * main - printing non-repeating three-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int units;
	int tens;
	int hundreds;

	for (hundreds = 48; hundreds <= 57; hundreds++)
	{
		for (tens = 48; tens <= 57; tens++)
		{
			for (units = 48; units <= 57; units++)
			{
				if (!((units == tens) || (tens == hundreds) || (tens > units) || (hundreds > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(units);
					if (!(units == 57 && hundreds == 55 && tens == 56))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
