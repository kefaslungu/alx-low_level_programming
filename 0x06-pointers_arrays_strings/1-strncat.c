#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; y < n; y++)
	{
		dest[x + y] = src[y];
		if (src[y] == '\0')
			y = n;
	}
	return (dest);
}
