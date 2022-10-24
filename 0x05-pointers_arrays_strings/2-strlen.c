#include "main.h"
/**
 * _strlen - entry point
 *
 * Description: Pointers, array and strings
 *
 * @s: parameter to be an char
 *
 * Return: returns the length of the string;
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
