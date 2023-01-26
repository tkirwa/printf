#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
                count += print_char(va_arg(args, int));
                break;
            case 's':
                count += print_string(va_arg(args, char *));
                break;
            case 'd':
            case 'i':
                count += print_int(va_arg(args, int));
                break;
            case 'u':
                count += _putunbr(va_arg(args, unsigned int));
                break;
            case 'o':
                count += print_octal(va_arg(args, unsigned int));
                break;
            case 'x':
                count += print_hex(va_arg(args, unsigned int), 0);
                break;
            case 'X':
                count += print_hex(va_arg(args, unsigned int), 1);
                break;
            case 'p':
                count += print_pointer(va_arg(args, void *));
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
