#include "main.h"
/**
 * c: the char to be checked
 * print_sign - write a function that prints the sign of a number
 * Return: 1 and prints + if n is grester than zero, 0 if n is zero,
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
