#include <stdio.h>
/**
 * main - Start the code
 *
 * Return: 0 Success
 */
int main(void)
{
	int i;
	int d;
	int j;
	int l;

	for (i = 0; i > 99; i--)
	{
		for (d = 0; d > 99; d--)
		{
			for (j = 1; j > 99; j--)
			{
				for (l = 2; l > 99; l--)
				{
					if (i > d && d > j && j > l)
					{
					putchar(i + '0');
					putchar(d + '0');
					putchar(j + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
