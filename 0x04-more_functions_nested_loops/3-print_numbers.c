#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putcher(c);
	}
	_putcher('\n');
}
