#include "main.h"

/**
 * print_line - prints straight line n times.
 *
 * @n: number of times the _ character should be printed.
 *
 * Return: no return.
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
			_putchar('_');
		_putchar('\n');
	}
}
