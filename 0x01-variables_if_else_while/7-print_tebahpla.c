#include<stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
