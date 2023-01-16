#include "main.h"
/**
 * _islower - entry point
 *
 * Description: prints a-z
 *
 * @c: is the expected parameter
 *
 * Return: always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
