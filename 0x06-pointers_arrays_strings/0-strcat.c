#include "main.h"
/**
 * _strcat - concatenates two strings,
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: the pointer to dest.
*/
char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	/* Find the size of dest array */
	while (dest[c1])
		c++;

	/* Iterate through each src array value without the null type */
	for (c2 = 0; src[c2]; c2++)
		/* append src[c2] to dest[c1] while overwriting the null type in dest */
		dest[c++] = src[c2];

	return (dest);
}
