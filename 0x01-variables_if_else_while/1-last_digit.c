#include <stdio.h>
#include<stdio.h>
#include <stdlib.h>
/**
 * main - betty style doc
 * Return: 0
 */
int main(void)
{
	int n, int sec;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sec = n % 10;
	if (sec > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, sec);
	if (sec == 0)
		printf("Last digit of %d is %d and is 0\n", n, sec);
	if (sec < 6 && sec != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, sec);
	return (0);
}
