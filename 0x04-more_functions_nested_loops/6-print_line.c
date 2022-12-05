#include "main.h"

/**
 * print_line - entry point
 *
 * Description: functions and nested loops
 *
 * @n: expected parameter in integer
 *
 * Return: void
 */

void print_line(int n)
{
	int m;

	m = 0;

	while (m < n)
	{
		_putchar('_');
		m++;
	}
	_putchar('\n');
}

