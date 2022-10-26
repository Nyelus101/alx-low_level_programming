#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: prints a-z
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
