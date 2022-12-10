#include <stdio.h>

/**
 * main - print lowercase alphabet frm 'z' to 'a'
 * return: always 0
 */
int main(void)
{
	char zyx;

	for (zyx = 'z'; zyx >= 'a'; zyx--)
	       putchar(zyx);

	putchar('n');

	return (0);
}
