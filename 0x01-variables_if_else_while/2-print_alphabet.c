#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0 Success
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
		putchar("%c ", c);
	return (0);
}
