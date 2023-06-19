#include <stdio.h>
/**
 * main - numbers in orders
 *
 * Return: 0
 */

int main(void)
{
	int alpha;

	for (alpha = 0; alpha < 10; alpha++)
	{
		putchar(alpha + '0');
		if (alpha < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
