#include <stdio.h>
#include "main.h"
#include <unistd.h>


/**
 * print_hex - prints an unsigned integer in hexadecimal
 * @x: the unsigned integer to print
 * @uppercase: flag indicating whether to use uppercase letters
 *
 * Return: number of characters printed
 */
int print_hex(unsigned int x, int uppercase)
{
return (_puthex(x, uppercase));
}

/**
 * print_pointer - prints the address of a pointer
 * @p: the pointer to print
 *
 * Return: number of characters printed
 */
int print_pointer(void *p)
{
return (_putaddr(p));
}

/**
 * print_binary - prints the binary representation of an unsigned int
 * @n: the unsigned int to convert to binary
 * Return: number of characters printed
 */

int print_binary(unsigned int n)
{
if (n == 0)
{
putchar('0');
return (1);
}
if (n == 1)
{
putchar('1');
return (1);
}
return (print_binary(n >> 1) + print_char((n & 1) + '0'));
}
