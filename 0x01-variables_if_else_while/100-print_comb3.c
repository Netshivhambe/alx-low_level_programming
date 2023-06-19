#include<stdio.h>
/**
 * main - different combination
 *
 * Return: 0
 */
int main(void)
{
	int lows = '0';
	int highs = '0';

	for (lows = '0'; lows <= '9'; lows++)
	{
		for (highs = '0'; highs <= '9'; highs++)
		{
			if (!((lows == highs) || (lows > highs)))
			{
				putchar(lows);
				putchar(highs);
				if (!(lows == '9' && highs == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
