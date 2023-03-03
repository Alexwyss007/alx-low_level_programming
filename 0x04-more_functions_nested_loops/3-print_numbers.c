#include "main.h"

/**
 * print_numbers -checks for a digit (0 through 9).
 *
 * Return: 0-9 followed by new line.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
