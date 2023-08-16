#include "main.h"

/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 *
 * @n: input number as an integer.
 *
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
