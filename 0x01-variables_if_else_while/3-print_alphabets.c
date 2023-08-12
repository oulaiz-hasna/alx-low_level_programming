#include <stdio.h>
/**
 * main - prints alphabets in lower and upper case.
 *
 * Return: (0) - Successful termination of a program.
 *
 */
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
