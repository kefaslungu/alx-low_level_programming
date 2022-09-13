#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * i = row, x = column, y = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int i, x, y;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (x = 1; x <= 9; x++)
		{
			y = (i * x);
			if ((y / 10) > 0)
			{
				_putchar((y / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((y % 10) + '0');

			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
