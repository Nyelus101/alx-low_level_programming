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
	int i, j, k, l, m, n;

	i = j = k = l = 48;

	while (l < 58)
	{
		k = 48;

		while (k < 58)
		{
			j = 48;

			while (j < 58)
			{
				i = 48;

				while (i < 58)
				{
					m = (l * 10) + k;
					n = (j * 10) + i;
					if (m < n)
					{
						putchar(l);
						putchar(k);
						putchar(' ');
						putchar(j);
						putchar(i);

						if ((l == 57 && k == 56) && (j == 57 && i == 57))
							break;
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				j++;
			}
			k++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
