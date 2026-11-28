#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * specifier - Structures use as an index to functions
 *
 * @inputchar: the specifier we wanna test
 * @print: the fonction who will print the specifier's argument
 */
typedef struct specifier
{
	char inputchar;
	int (*print)(va_list);
} specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print_func(char c))(va_list);
int print_char(va_list);

#endif
