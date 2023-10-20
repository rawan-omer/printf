#include "main.h"
/**
 * print_int - function to print an integer
 * @arg: argument
 * Return: returns number of character printed
 */
int print_num(va_list arg)
{
	int n, ch = 1, len = 0;
	unsigned int nu;

	n = va_arg(arg, int);
	if (n < 0)
	{
		len += _putchar('-');
		nu = -1 * n;
	}
	else
		nu = n;
	for (; nu / ch > 9; )
		ch *= 10;
	for (; ch != 0; )
	{
		len += _putchar('0' + nu / ch);
		nu %= ch;
		ch /= 10;
	}
	return (len);
}

/**
 * print_unsigned - function to print an integer
 * @n: argument
 * Return: returns number of character printed
 */
int print_unsigned(unsigned int n)
{
	int len = 0, ch = 0;
	unsigned int num;

	num = n;
	for (; num / ch > 9; )
		ch *= 10;
	for (; ch != 0; )
	{
		len += _putchar('0' + num / ch);
		num %= ch;
		ch /= 10;
	}
	return (len);
}

/**
 * print_char - function to print an integer
 * @arg: argument
 * Return: returns number of character printed
 */
int print_char(va_list arg)
{
	char v = va_arg(arg, int);

	_putchar(v);
	return (1);
}

/**
 * print_srting - function to print an integer
 * @arg: argument
 * Return: returns number of character printed
 */
int print_string(va_list arg)
{
	int i;
	const char *s;

	s = va_arg(arg, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_int - function to print an integer
 * @arg: argument
 * Return: returns number of character printed
 */
int print_int(va_list arg)
{
	int n;

	n = print_num(arg);
	return (n);
}
