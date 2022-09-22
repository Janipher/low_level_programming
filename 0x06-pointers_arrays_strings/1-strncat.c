#include "main.h"

/**
 * _strncat - concentrate two strings but instead add inputted number of bytes
 * @dest: to be appended on
 * @src: to be completed at the end of dest
 * @n: integer parameter to compare index to
 * Return: new concentrated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
