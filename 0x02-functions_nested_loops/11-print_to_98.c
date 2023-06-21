#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - All numbers end on 98
 * @m: Print from m
 * Return: 0
 */

void print_to_98(int m)

{
	if (m >= 98)
	{
		while (m > 98)
			printf("%d, ", m--);
		printf("%d\n", m);
	}
	else
	{
		while (m < 98)
			printf("%d, ", m++);
		printf("%d\n", m);
	}
}
