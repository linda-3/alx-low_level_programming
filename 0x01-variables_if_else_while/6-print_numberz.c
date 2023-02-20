#include <stdio.h>

/**
 * main - Printing numbers
 * Return: 0 (Sucees)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
