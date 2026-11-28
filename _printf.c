#include <stddef.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string containing zero or more directives
 * @...: the values to print, one for each directive in format
 *
 * Return: the number of characters printed (excluding the null byte),
 * or -1 if format is NULL or ends with a lone '%'
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int (*f)(va_list) = NULL;
	va_list param;
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(param, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(param);
				return (-1);
			}

			f = get_print_func(format[i + 1]);
			if (f == NULL)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				count += 2;
			}
			else
				count += f(param);
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(param);
	return (count);
}
