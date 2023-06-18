#include <stdio.h>
/**
 * main - exclude q & e
 *
 * Return: 0
 */
int main(void)
{
	char alpha;
	char e;
	char q;

	e = "e";
	q = "q";

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != e && alpha != q)
		putchar(alpha);
	putchar('\n');
	return (0);
}
