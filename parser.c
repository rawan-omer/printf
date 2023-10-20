#include "main.h"
/**
 * parser - function
 * @format: form
 * @func_list: list
 * @arg: arguments
 * Return: integer
*/

int parser(const char *format, conv_t func_list[], va_list arg)
{
	int i, j, r, p = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].s != NULL; j++)
			{
				if (format[i + 1] == func_list[j].s[0])
				{
					r = func_list[j].f(arg);
					if (r == -1)
						return (-1);
					p += r;
					break;
				}
			}
			if (func_list[j].s == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					p = p + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			p++;
		}
	}
	return (p);
}
