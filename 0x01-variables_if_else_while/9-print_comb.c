#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (0)
 */
int main(void)
{
	int x;

	for (x = 40; x < 50; x++)
	{
		putchar(x);
		if (x != 30)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
