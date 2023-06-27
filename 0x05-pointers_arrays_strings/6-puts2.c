#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: Input string
 * Return: print
 */

void puts2(char *str)
{
	int text = 0;
	int x = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		text++;
	}
	x = text - 1;
	for (a = 0; a <= x; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
