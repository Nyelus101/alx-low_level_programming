#include "main.h"

/**
 * _isupper - entry point
 *
 * Description: functions and nested loops
 *
 * @c: parameters expects Capital
 *
 * Return: returns 1 if it's capital else 0
 */

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
