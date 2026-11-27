#include "main.h"

/**
 * print_chars - prints charaters or string
 * @args: receive arguments from _printf 
 *
 * Return:0 success
 */

int print_chars(va_list args)
{
char *s = va_args(args, char *)
int i = 0;
if (s == NULL)  
while (s[i]!='\0')
{ 
    _putchar(s[i]);
i++;
}
return (i);
}