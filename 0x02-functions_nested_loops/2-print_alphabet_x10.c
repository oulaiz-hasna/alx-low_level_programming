#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet a - z
 *                  10 times in lower case.
 */
void print_alphabet_x10(void)
{
	int alpha;
	int i = 0;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		i++;
	}
}
