#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp array
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int kdb, kjl, cs, py;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (kdb = 0; s1[kdb] != '\0'; kdb++)
	{
	}

	for (kjl = 0; s2[kjl] != '\0'; kjl++)
	{
	}

	if (n < kjl)
		kjl = n;

	kjl += kdb;
	array = malloc(sizeof(char *) * (kjl + 1));

	if (array == NULL)
		return (NULL);

	for (cs = 0; cs < kdb; cs++)
		array[cs] = s1[cs];
	for (py = 0; cs < kjl; py++)
	{
		array[cs] = s2[py];
		cs++;
	}
	cs++;
	array[cs] = '\0';
	return (array);
}
