#include <stddef.h>
#include "main.h"

/**
 * print_char - prints a charater
 * @arg: arguments from _printf
 *
 * Return: The number of character printed (Always 1)
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * print_percent - Print '%'
 * @arg: Unused parameter, always print '%' when called
 *
 * Return: The number of character printed (Always 1)
 */
int print_percent(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * print_str - Print a string
 * @arg: arguments from _printf
 *
 * Return: The number of character printed
 */
int print_str(va_list arg)
{
	char *s = va_arg(arg, char *);
	char *err = "(null)";
	int i;
	int count = 0;

	if (s == NULL)
		s = err;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
