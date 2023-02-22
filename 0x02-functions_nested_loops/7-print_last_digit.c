#include "main.h"
/**
 * n: the int number
 * print_last_digit - Write a function that prints the last digit of a number.
 * Return: n
 */
int print_last_digit(int x)
{
	int d = x % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');

	return (0);
}


