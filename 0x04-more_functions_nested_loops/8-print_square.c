#include "main.h"

/**
 * print_square - entry point
 *
 * Description: functions and nested loops
 *
 * @size: expected parameter in integer
 *
 * Return: void
 */

void print_square(int size)
{
	int m, i;

	m = 0;
	if (size < 1)
		_putchar('\n');
	while (m < size)
	{
		i = 0;

		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		m++;
	}
}

