#include<stdio.h>
/**
 * main - program that print different types of data
 * Return: 0
 */
int main(void)
{
	char t;
	int a;
	long int b;
	long long int c;
	float d;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(t));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of a float:%lu byte(s)\n",(unsigned long)sizeof(d));
return (0);
}
