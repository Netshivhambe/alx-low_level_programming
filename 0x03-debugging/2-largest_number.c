#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int large;
if (a > b && a > c)
{
large = a;
}
else if (a > b && c > a)
{
large = c;
}
else if (b > c)
{
large = b;
}
else
{
large = c;
}
return (large);
}

