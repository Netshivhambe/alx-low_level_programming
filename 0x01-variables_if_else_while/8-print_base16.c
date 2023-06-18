#include <stdio.h>
/**
 * main - numbers in lowcase
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	int num;

	alpha = 'a';
	num = 0;
	while
		(num < 10) {
			putchar(num + '0');
			num++;
		}
	while
		(alpha <= 'f') {
			putchar(alpha);
			alpha++;
		}
	putchar('\n');
	return (0);
}
