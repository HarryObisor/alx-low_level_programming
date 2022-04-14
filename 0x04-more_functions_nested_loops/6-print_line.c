#include "main.h"

/**
 * print_line - prints underscore
 * @n: limit
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}
