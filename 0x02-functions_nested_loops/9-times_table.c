#include "main.h"

/**
 * times_table - to print a 9 times table starting from 0
 */
void times_table(void)
{
	int nine;

	for (int i = 0; i <= 9; i++)
	 nine = nine * i;
	nine++;
	_putchar(nine);
}
