#include "main.h"
/**
 * print_rev - function that prints a string, in reverse.
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int text = 0;
	int o;

	while (*s != '\0')
	{
		text++;
		s++;
	}
	s--;
	for (o = text; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
