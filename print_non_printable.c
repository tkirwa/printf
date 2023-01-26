#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_non_printable_string - prints a string, with non-printable characters
 * represented as \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @s: the string to print
 * Return: number of characters printed
 */
int print_non_printable_string(char *s)
{
int count = 0;
for (; *s; s++)
{
if (*s >= 32 && *s < 127)
{
putchar(*s);
count++;
}
else
{
putchar('\\');
putchar('x');
count += print_hex((unsigned char)*s, 1);
count += 2;
}
}
return (count);
}
