#include "main.h"

/**
 * print_last_digit - Digit printed
 * @m: last value return
 * Return: value of last digit
 */

int print_last_digit(int m)

{
	int digit;

	digit = m % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
