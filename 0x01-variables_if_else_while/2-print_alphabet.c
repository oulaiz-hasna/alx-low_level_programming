#include <stdio.h>
/**
 * main - prints the alphabets in lower case a-z
 *
 * Return: (0) - Successful termination of a program.
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
