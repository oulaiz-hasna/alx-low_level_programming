#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse mode.
 *
 * Return: (0) - Successful termination of a program.
 *
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
		putchar('\n');
		return (0);
}
