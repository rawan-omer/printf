#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
/**
 * struct conv - struct to map format specifiers to function
 *
 * @s: the format specifier
 * @f: pointer to the corresponding print function
 *
 * Description:
 * structure is used to map format specifiers to corresponding print function
 */
struct conv
{
	char *s;
	int (*f)(va_list);
};
typedef struct conv conv_t;

int _putchar(char c);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list arg);
int parser(const char *format, conv_t func_list[], va_list arg);
int printf_char(va_list);
int print_string(va_list arg);
int print_persent(va_list);
int print_unsigned(unsigned int n);
int print_int(va_list args);
int print_num(va_list);


#endif
