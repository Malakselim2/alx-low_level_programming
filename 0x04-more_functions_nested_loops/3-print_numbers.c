#include "main.h"

/**
 * print_numbers - print 0-9
 * Return: Always 0
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
