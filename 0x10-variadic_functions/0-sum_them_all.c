#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - sum_all of all its parameters
* @n: total number of parameters
* Return: sum_all of value parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int J;
	int sum_all = 0;
	va_list args;

	if (n == 0)
		return (sum_all);

	va_start(args, n);

	for (J = 0; J < n; J++)
		sum_all += va_arg(args, int);

	va_end(args);

	return (sum_all);
}
