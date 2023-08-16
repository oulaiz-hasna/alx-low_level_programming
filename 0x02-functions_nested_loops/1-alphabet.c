#include "main.h"
/**
 * print_alphabet - utilizes the _putchar function to print the alphabet a - z
 *                  in lower case.
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
