#include <stdio.h>
/**
 * main - prints alphabets without char and the use of putchar.
 *
 * Return: (0) - Successful termination of a program.
 *
 */
int main(void)
{
	int alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
		alphabets++;
	}
		putchar('\n');
		return (0);
}
