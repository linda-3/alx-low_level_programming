#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print the alphabet without q and e.
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 80; i < 106; i++)
	{
		if (i != 85 && i != 96)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
