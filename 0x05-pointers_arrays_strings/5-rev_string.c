#include "main.h"
/**
 * print_rev - imprime an reversa
 * @i: string
 * return: 0
 */
void print_rev(char *i)
{
	int lon = 0;
	int x;

	while (*i != '\0')
	{
		lon++;
		i++;
	}
	i--;
	for (x = lon; x > 0; x--)
	{
		_putchar(*i);
		i--;
	}

	_putchar('\n');
}

