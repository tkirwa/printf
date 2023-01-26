#include <stdio.h>
#include "main.h"

/**
 * print_char - prints a single character
 * @c: the character to print
 *
 * Return: number of characters printed
 */
int print_char(int c)
{
putchar(c);
return (1);
}

/**
 * print_string - prints a string
 * @str: the string to print
 *
 * Return: number of characters printed
 */
int print_string(char *str)
{
return (fputs(str, stdout));
}

/**
 * print_int - prints an integer
 * @i: the integer to print
 *
 * Return: number of characters printed
 */
/*int print_int(int i)*/
/*{*/
/*return (_putnbr(i));*/
/*}*/

/**
 * print_unsigned - prints an unsigned integer
 * @u: the unsigned integer to print
 *
 * Return: number of characters printed
 */
int print_unsigned(unsigned int u)
{
return (_putunbr(u));
}

/**
 * print_octal - prints an unsigned integer in octal
 * @o: the unsigned integer to print
 *
 * Return: number of characters printed
 */
int print_octal(unsigned int o)
{
return (_putoct(o));
}
