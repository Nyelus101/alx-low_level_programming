#include "main.h"
/**
 * swap_int - entry point
 *
 * Description: Pointers, array and strings
 *
 * @a: parameter to be an int
 * @b: parameter to be an int
 *
 * Return: swaps the values;
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
