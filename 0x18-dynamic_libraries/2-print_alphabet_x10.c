#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints a-z x10
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
int i;
char x;

i = 0;
while (i < 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
i++;
}
}
