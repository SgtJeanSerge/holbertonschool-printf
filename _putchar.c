#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a characters
 * @c: input charaters
 *
 *  Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
