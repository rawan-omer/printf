#include "main.h"

/**
 * _printf - mimics printf
 * @format: identifier look for
 * Return: integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", prints},
		{"%%", print_37}, {"%d", print_int},
		{"%i", print_int}, {"%S", print_string},
		{"%b", print_x}, {"%o", print_octa},
		{"%R", print_rot13}, {"%u", print_unsigned},
		{"%r", print_rev}, {"%p", print_pointer},
		{"%X", print_hex}, {"%x", print_x}
	};

	va_list args;
	int j;
	int i = 0, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
