#include <stdarg.h>
#include "main.h"

/**
* _printf - function that produces output according to a format
* @format: character string containing zero or more directives
*
* Return: the number of characters printed (excluding the null byte used to end output to strings)
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
_putchar(format[i]);
len++;
}
i++;
}
return (len);
}

/**
* handle_conversion - handle the specific conversion specifier
* @conversion: conversion specifier
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
_putchar(va_arg(args, int));
len++;
break;
case 's':
len += print_string(va_arg(args, char*));
break;
case '%':
_putchar('%');
len++;
break;
default:
_putchar('%');
_putchar(conversion);
len += 2;
break;
}

return (len);
}

/**
* print_string - print a given string
* @str: string to be printed
*
* Return: the number of characters printed
*/
int print_string(char *str)
{
int len = 0, i;
if (!str)
{
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
return (6);
}

for (i = 0; str[i]; i++)
{
_putchar(str[i]);
len++;
}

return (len);
}
