#include "main.h"

/**
 * print_alphabet_x10 - alphabet_x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int d;

	d = 0;

	while (d < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		d++;
	}
}
