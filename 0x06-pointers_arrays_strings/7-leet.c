#include "main.h"

/**
 * leet - Entry point
 * ONE if, TWO loops only
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int x, y;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (n[x] == find[y])
			{
				n[x] = replacer[y / 2];
				y = 9;
			}
		}
	}

	return (n);
}
