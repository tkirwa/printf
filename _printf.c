#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
va_list args;
int i = 0, j = 0, len = 0;
char *str;

va_start(args, format);
while (format[i])
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
putchar(va_arg(args, int));
len++;
break;
case 's':
str = va_arg(args, char*);
while (str[j])
{
putchar(str[j]);
j++;
len++;
}
j = 0;
break;
case '%':
putchar('%');
len++;
break;
default:
return (-1);
}
}
else
{
putchar(format[i]);
len++;
}
i++;
}
va_end(args);
return (len);
}
