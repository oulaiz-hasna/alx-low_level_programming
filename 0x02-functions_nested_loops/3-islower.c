#include "main.h"

/**
 * _islower - function that checks if a char is lowercase
 *
 * @c: the char is ASCII code
 *
 * Return: returns 1 if 'c' is lowercase, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
