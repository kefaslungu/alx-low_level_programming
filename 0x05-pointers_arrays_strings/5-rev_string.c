#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
	void rev_string(char *s)
{
	int len = 0, i = 0;
	char kdb;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		kdb = s[i];
		s[i++] = s[len];
		s[len] = kdb;
	}
}
