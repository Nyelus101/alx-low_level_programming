#include "main.h"

/**
 * _isdigit - entry point
 *
 * Description: functions and nested loops
 *
 * @c: parameters expects a digit
 *
 * Return: returns 1 if it's a digit
 */

int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
