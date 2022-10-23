#include "main.h"
/**
 * main - entry point
 *
 * Description: functions and nested loops
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
