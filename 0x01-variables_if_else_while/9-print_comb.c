#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int kefas;

	for (kefas = '0'; kefas <= '9'; kefas++)
	{
		putchar(kefas);
		if (kefas != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
