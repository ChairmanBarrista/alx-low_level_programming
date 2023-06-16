#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - display numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
