#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* _printf - a custom implementation of the printf function
* @format: string that contains the directives for output
*
* Return: the number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;

va_start(args, format);
for (; *format; format++)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
putchar(va_arg(args, int));
count++;
break;
case 's':
count += fputs(va_arg(args, char *), stdout);
break;
case 'd':
case 'i':
count += _putnbr(va_arg(args, int));
break;
case 'u':
count += _putunbr(va_arg(args, unsigned int));
break;
case 'o':
count += _putoct(va_arg(args, unsigned int));
break;
case 'x':
count += _puthex(va_arg(args, unsigned int), 0);
break;
case 'X':
count += _puthex(va_arg(args, unsigned int), 1);
break;
case 'p':
count += _putaddr(va_arg(args, void *));
break;
case '%':
putchar('%');
count++;
break;
default:
putchar('%');
putchar(*format);
count += 2;
break;
}
}
else
{
putchar(*format);
count++;
}
}
va_end(args);
return (count);
}
