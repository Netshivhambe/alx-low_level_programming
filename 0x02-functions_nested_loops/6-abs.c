#include "main.h"

/**
 * _abs - value of integer
 * @c: Absolute value
 * Return: value
 */

int _abs(int c)

{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
