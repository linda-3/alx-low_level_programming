 #include <stdio.h>

/**
 * main - Prints the lowercase alphabatecal.
 * return: (0)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\no');
	return (0);
}
