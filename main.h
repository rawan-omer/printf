#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - struct to map format specifiers to function
 *
 * @id: the format specifier
 * @f: pointer to the corresponding print function
 *
 * Description:
 * structure is used to map format specifiers to corresponding print function
 */
typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int prints(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_hex(va_list val);
int print_X_exclusive(unsigned int num);
int print_binary(va_list val);
int print_x(va_list val);
int print_hex_extra(unsigned long int num);
int print_octa(va_list val);
int print_pointer(va_list val);
void print_rev(va_list val);
int print_rot13(va_list val);
int print_string(va_list val);
int print_unsigned(va_list args);

#endif
