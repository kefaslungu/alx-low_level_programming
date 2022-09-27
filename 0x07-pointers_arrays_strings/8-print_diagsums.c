#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int x = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (; x < max; x += size + 1)
		sum1 += a[x];

	for (x = size - 1; x < max - 1; x += size - 1)
		sum2 += a[x];

	printf("%d, %d\n", sum1, sum2);
}
