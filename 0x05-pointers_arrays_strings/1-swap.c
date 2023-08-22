#include "main.h"

/*
 * swap_int - swaps values of two integers a and b.
 *
 * @a: first integer.
 * @b: second integer.
 *
 * Return: no return.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
