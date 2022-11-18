#include "main.h"
/**
 * print_sign - entry point
 *
 * Description: prints signs, 0 or 1
 *
 * @n: is the expected parameter
 *
 * Return: always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
