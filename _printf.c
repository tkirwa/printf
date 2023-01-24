#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: character string containing zero or more directives
 *
 * Return: the number of characters printed (excluding...
 * the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
va_list args;
int len = 0;

va_start(args, format);
len = process_format(format, args);
va_end(args);

return (len);
}

/**
 * process_format - process the format string and print output
 * @format: character string containing zero or more directives
 * @args: variable argument list
 *
 * Return: the number of characters printed
 */
int process_format(const char *format, va_list args)
{
int i = 0, len = 0;

while (format[i])
{
if (format[i] == '%')
{
i++;
len += handle_conversion(format[i], args);
}
else
{
putchar(format[i]);
len++;
}
i++;
}

return (len);
}

/**
* handle_conversion - handle the conversion specifier and print output
* @conversion: the conversion specifier (c, s, or %)
* @args: variable argument list
*
* Return: the number of characters printed
*/
int handle_conversion(char conversion, va_list args)
{
int len = 0;

switch (conversion)
{
case 'c':
putchar(va_arg(args, int));
len++;
break;
case 's':
len += print_string(va_arg(args, char*));
break;
case '%':
putchar('%');
len++;
break;
default:
return (-1);
}

return (len);
}

/**
* print_string - print a string to stdout
* @str: the string to print
*
* Return: the number of characters printed
*/
int print_string(char *str)
{
int i = 0, len = 0;

while (str[i])
{
putchar(str[i]);
i++;
len++;
}

return (len);
}
