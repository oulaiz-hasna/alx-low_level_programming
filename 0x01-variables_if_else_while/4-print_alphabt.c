#include <stdio.h>
/**
 * main - prints lowercase alphabets except q and e.
 *
 * Return: (0) - Successful termination of a program.
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
