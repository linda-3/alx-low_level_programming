#include <stdio.h>

/**
 * main - prints numbers btwn 0 to 9 and letters btwn a and f.
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; I < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}


