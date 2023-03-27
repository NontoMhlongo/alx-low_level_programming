#include <stdio.h>
/**
 * main - Start the code here
 *
 * Return: 0 Success
 */
int main(void)
{
	int x;
	int m;

	for (x = 0; x < 10; x++)
	{
		for (m = 1; m < 10; m++)
		{
			if (x < m && x != m)
			{
				putchar(x + '0');
				putchar(m + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
