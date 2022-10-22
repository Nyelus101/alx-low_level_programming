#include <stdio.h>
/**
 * main - entry point
 *
 * Description: conditional statements
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char x;
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
