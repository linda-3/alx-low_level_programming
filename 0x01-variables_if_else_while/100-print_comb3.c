#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 30; x <= 39; x++)
	{
		for (y = 31; y <= 39; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 38 || y != 39)
				{
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

