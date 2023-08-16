#include "main.h"

/**
 * _isalpha - checks if input is a letter: both lower or upper case.
 *
 * @c: the char is ASCII code
 *
 * Return: returns 1 if 'c' is a letter, 0 otherwise.
*/
int _isalpaha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
