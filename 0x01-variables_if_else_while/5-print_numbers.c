#include <stdio.h>
/**
 * main - prints numbers of base ten
 *
 * Return: (0) - Successful termination of a program.
 *
 */
int main(void)
{
	char base_ten = '0';

	while (base_ten <= '9')
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
