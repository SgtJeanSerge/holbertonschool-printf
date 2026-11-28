#include "main.h"

/**
 * get_print_func - selects the function that prints a given specifier
 * @c: the format specifier character that follows '%'
 *
 * Return: a pointer to the matching print function,
 * or NULL if the specifier is not supported
 */
int (*get_print_func(char c))(va_list)
{
	specifier_t arr[4] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL},
	};
	unsigned int i = 0;

	while (arr[i].inputchar != '\0')
	{
		if (arr[i].inputchar == c)
			return (arr[i].print);
		i++;
	}
	return (NULL);
}
