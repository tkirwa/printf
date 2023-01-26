#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_string_S - Prints a string, handling non-printable characters
 * @s: The string to print
 *
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
    return count;
}
