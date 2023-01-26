#include <stdio.h>
#include "main.h"

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
