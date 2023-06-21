#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char xy;
int a;
a = 1;
while (a <= 10)
{
for (xy = 'a'; xy <= 'z'; xy++)
{
_putchar(xy);
}
_putchar('\n');
a++;
}
}
