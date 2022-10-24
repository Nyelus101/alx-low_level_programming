#include "main.h"
/**
 * rev_string - entry point
 *
 * Description: Pointers, array and strings
 *
 * @s: parameter to be an char
 *
 * Return: reverse the string;
 */
void rev_string(char *s)
{
	int n, m, o;
	char p;

	for (n = 0; s[n] != '\0'; n++)
		;
	o = n;
	for (n--, m = 0; m < o / 2; n--, m++)
	{
		p = s[m];
		s[m] = s[n];
		s[n] = p;
	}
}
