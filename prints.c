#include "main.h"
/**
 * prints - function to print string
 * @val: parameter
 * Return: returns the length of a string
 */
int prints(va_list val)
{
	int i;
	int length;
	char *s;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	else
	{
		length = _strlen(s);
		for (i = 0 ; i < length ; i++)
			_putchar(s[i]);
	}
	return (length);
}
