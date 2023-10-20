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

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}

	for (i = 0 ; i < length ; i++)
		_putchar(str[i]);
	return (length);
}
