#include "main.h"

/**
 * print_char - prints a charater
 * @arg: arguments from _printf
 *
 * Return: 0 (success)
 */
int print_char(va_list arg)
{
	char s = va_arg(arg, int);

	_putchar(s);
	return (1);
}
