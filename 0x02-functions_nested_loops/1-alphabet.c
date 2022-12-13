#include "main.h"

/**
 * print_alphabet - entry
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'Z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

}
