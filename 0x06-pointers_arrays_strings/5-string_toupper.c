#include "main."
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @n: input string.
 *
 * Return: n.
*/
char *string_toupper(char *n)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
