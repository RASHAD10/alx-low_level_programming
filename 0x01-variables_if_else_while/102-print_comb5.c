#include <stdio.h>
/**
 * main - Print two digits combination numbers
 *
 * Returns: returns zero
 */
int main(void)
{
	int i, p, j;

	for (i = 0; p < 100; j++)
	{
		for (p = 0; p < 100; j++)
		{
			if (p > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
