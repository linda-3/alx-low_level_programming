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
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
