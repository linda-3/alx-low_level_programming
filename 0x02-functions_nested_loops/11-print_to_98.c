#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		_putchar("%i, ", n);
		n--;
	}
	_putchar("98");
	_putchar('\n');
}

