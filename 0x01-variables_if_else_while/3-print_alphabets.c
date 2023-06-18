#include <stdio.h>
/**
 * main - print alpha
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);
	for (alpha = 'a' ; alpha <= 'Z' ; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
