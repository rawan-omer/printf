#include "main.h"
/**
 * has_flag - checks for a flag
 * @c: characters to be checked
 * Return: 1 if a flag, 0 if not
 */

int has_flag(char c)
{
	return (c == '+' || c == ' ' || c == '#');
}

/**
 * print_flag - prints corresponding flag
 * @c: character to be checked
 */
void print_flag(char c)
{
	if (c == '+')
		_putchar('+');
	else if (c == ' ')
		_putchar(' ');
	else if (c == '#')
	{
		_putchar('0');
		_putchar('x');
	}
}

/**
 * print_sign - prints sign
 * @args: argument
 * Return: number of characters printed
 */
int print_sign(va_list args)
{
	int num;
	char *sign = "";
	int printed_chars;

	num = va_arg(args, int);
	if (num >= 0)
	{
		if (has_flag('+'))
			sign = "+";
		else if (has_flag(' '))
			sign = " ";
	}
	printed_chars = _printf("%s%d", sign, num);
	return (printed_chars);
}


