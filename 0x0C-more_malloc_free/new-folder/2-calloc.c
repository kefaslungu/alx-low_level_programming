#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - print 0s into 2D grid
 * @nmemb: array num
 * @size: size of ea array element
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
