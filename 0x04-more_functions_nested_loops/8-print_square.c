#include "main.h"

/**
 * print_square - prints hashtags
 * @size: limit
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('a');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
