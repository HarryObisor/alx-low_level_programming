#include "main.h"
/**
 * _isdigit - checks if the no is b/n 0 to 9
 * @c: Input no
 * Return: 1 if is a number
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
