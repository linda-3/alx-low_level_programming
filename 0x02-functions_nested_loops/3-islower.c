#include "main.h"
/**
 * _islower - write a function that checks for lowercase character
 * return: 1 if c is lowercase
 * return: 0 otherwise
 * c: is the character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
