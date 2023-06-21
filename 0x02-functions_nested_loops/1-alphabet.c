#include "main.h"
/**
 * lower_alphabet - function that prints the alphabet, in lowercase.
 */

void lower_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
