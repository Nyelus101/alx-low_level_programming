#include "main.h"

/**
 * print_triangle - entry point
 *
 * Description: functions and nested loops
 *
 * @size: expected parameter in integer
 *
 * Return: void
 */

void print_triangle(int size)
{
	int m, i, j

	m = 0;
	i = size - 1;
	while (m < size)
	{
		i = size - 1 - m;
		j = m + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		m++;
	}
	if (size <= 0)
		_putchar('\n');
}

