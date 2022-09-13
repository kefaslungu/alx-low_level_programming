#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int kdb)
{
	int wx;

	wx = (kdb % 10);

	if (wx < 0)
	{
		wx = (-1 * wx);
	}

	_putchar(wx + '0');
	return (wx);
}
