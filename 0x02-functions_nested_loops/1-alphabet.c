#include "main.h"
int _putchar(char c);
void print_alphabet(void);

/**
 * prints all alphabets
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		_putchar(letter);

	_putchar('\n');
}

