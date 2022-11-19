#include "main.h"
/**
 * print_last_digit - entry point
 *
 * Description: checks if parameter is alphabet
 *
 * @c: is the expected parameter
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int s;

	s = (c % 10);

	if (s < 0)
	{
		s = (-1 * s);
	}
	_putchar(s + '0');
	return (s);
}
