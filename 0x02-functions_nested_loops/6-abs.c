#include "main.h"
/**
 * _abs - entry point
 *
 * Description: return absolute integer
 *
 * @c: is the expected parameter
 *
 * Return: always 0 (success)
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
