#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int kefas, lungu;

	for (kefas = '0'; kefas < '9'; kefas++)
	{
		for (lungu = kefas + 1; lungu <= '9'; lungu++)
		{
			if (lungu != kefas)
			{
				putchar(kefas);
				putchar(lungu);

				if (kefas == '8' && lungu == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
