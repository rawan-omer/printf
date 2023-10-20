#include "main.h"

/**
 * print_binary - function to convert integer to binary
 * @val: argument
 *
 * Return: number of binary printed
 */
int print_binary(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int mask;
	unsigned int result;

	for (i = 0; i < 32; i++)
	{
		mask = 1 << (32 - i);
		result = mask & num;

		if (result)
			flag = 1;
		if (flag)
		{
			b = result >> (31 - i);
			_putchar(b + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}

