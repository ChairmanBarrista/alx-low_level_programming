#include "main.h"
/**
 * main - function that prints the alphabet, in lowercase.
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');

	return (0);
}
