#include "main.h"
#include <stdint.h>

/**
 * _printf - mimics printf
 * @format: identifier look for
 * Return: integer
 */

int _printf(const char *format, ...)
{
	int p;

	conv_t func_list[] = {
		{"c", printf_char},
		{"%", print_persent}, {"d", print_int},
		{"i", print_int}, {"s", print_string},
		{NULL, NULL}
	};

	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	p = parser(format, func_list, arg);
	va_end(arg);
	return (p);
}
