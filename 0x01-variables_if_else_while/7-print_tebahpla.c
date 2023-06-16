#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char xy;

	for (xy = 'z'; xy >= 'a'; xy--)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
