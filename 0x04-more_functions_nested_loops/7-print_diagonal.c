#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: functions and nested loops
 *
 * @n: expected parameter in integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int m, i;

	m = 0;
	while (n > 0)
	{
		i = m;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');

		m++;
		n--;
	}
	if (m < 1)
		_putchar('\n');
}

