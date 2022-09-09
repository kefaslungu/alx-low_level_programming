#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int Hex;
	char low;

	for (Hex = '0'; Hex <= '9'; Hex++)
		putchar(Hex);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
