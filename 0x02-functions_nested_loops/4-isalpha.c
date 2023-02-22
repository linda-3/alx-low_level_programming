#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic characte
 * c: the char tobe checked
 * Return: 1 if char is letter lower or upper case, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && <= 'Z')
		return (1);
	else
		return (0);
}
