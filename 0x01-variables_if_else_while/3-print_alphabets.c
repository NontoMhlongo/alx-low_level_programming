#include <stdio.h>
/**
 * main - Start the code
 *
 * Return: 0 Success
 */
int main(void)
{
	int n = 97;
	int y = 65;
	while (n <= 122 && y <= 90)
	{
		putchar(n);
		n++;
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
