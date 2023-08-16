#include "main.h"
/**
 * print_alphabet - utilizes the _putchar function to print the alphabet a - z
 *                  10 times in lower case.
 */
void print_alphabet(void)
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
