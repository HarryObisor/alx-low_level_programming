#include "main.h"

/**
 * _isalpha - checks if is an alphabetic character or not
 * @c: the character to be checked
 *
 * Return: 1 if is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A' && c <= 'z' || c <= 'Z')
		return (1);
	else
		return (0);
}
