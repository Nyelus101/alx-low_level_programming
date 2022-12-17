#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, j, k = 0, l = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		k = k + a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		l = l + a[j];
	printf("%d, %d\n", k, l);
}
