#include <stdio.h>
/**
 * main - Start the code here
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int p;
	int v;

	for (n = 0; n < 10; n++)
	{
		for (p = 1; p < 10; p++)
		{
			for (v = 2; v < 10; v++)
			{
				if (n < p && p < v)
				{
					putchar(n + '0');
					putchar(p + '0');
					putchar(v + '0');
					if (n + p + v != 24)
					{
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
