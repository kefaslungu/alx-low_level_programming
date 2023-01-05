#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int x, y;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		{
			n[x] = n[x] - cap;
		}

		cap = 0;

		for (y = 0; y <= 12; y++)
		{
			if (n[x] == separators[y])
			{
				y = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
