#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int e;

	for (i = 10;  <=  19; i++)
	{
		for (e = 10; e <= 19; e++)
		{
			if ((e % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((e % 10) + '0');
				if (i != 18 || e != 19)
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
