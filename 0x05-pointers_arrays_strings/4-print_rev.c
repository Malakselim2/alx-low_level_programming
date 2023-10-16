#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
		s--;
	}
	_putchar('\n');
}
