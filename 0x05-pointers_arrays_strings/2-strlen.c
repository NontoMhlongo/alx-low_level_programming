#include "main.h"
#include <stddef.h>
/**
 * _strlen - Returns the length of a string
 * @str: The string get the length of
 * Return: The length of @strlen
 */

size_t _strlen(const char *str)

{
	size_t length = 0;
	
	while (*str++)
		length++;
	return (length);
}
