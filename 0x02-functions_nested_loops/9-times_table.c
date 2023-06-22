#include "main.h"

/**
 * times_table - print times 9 tables from 0
 * Return: empty
 */

void times_table(void)

{
	int m, val, test;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');

		for (val = 1; val <= 9; val++)
		{
			_putchar(',');
			_putchar(' ');

			test = m * val;

			if (test <= 9)
				_putchar(' ');
			else
				_putchar((test / 10) + '0');
			_putchar((test % 10) + '0');
		}
		_putchar('\n');
	}
}
