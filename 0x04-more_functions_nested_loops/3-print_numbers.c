#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0-9
 * Return: void
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
