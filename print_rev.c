#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @val: value
 * Return: returns string
 */

int print_rev(va_list val)
{
	int i;
	int count = 0;
	char *s = va_arg(val, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	return (count);
}

