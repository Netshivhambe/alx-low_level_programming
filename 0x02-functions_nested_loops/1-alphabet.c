#include "main.h"

/**
 * print_alphabet - enter only alphabet
 *
 * Return: void
 */

void print_alphabet (void)

{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
