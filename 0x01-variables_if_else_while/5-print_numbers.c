#include <stdio.h>

/**
 * main - print single digit numbers from 0 to 9
 * Retrun: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}
