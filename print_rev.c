#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @val: value
 * Return: returns string
 */

int print_rev(va_list val)
{
	int i;
	int c = 0;
	char *s = va_arg(val, char *);

	if (s == NULL)
		s = "(null)";
	while (s[c] != '\0')
		c++;
	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	return (c);
}

