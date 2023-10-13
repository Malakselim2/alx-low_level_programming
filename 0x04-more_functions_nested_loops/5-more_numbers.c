#iclude "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * return: void
 */

void more_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c * 10);
	}
	_putchar('\n')
}
