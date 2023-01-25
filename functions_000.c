#include <stdio.h>
#include <inttypes.h>

/**
 * _putunbr - write an unsigned integer to stdout
 * @n: unsigned integer to write
 *
 * Return: the number of characters written
 */
int _putunbr(unsigned int n)
{
  int count = 0;

  if (n >= 10)
    {
      count += _putunbr(n / 10);
    }
  putchar(n % 10 + '0');
  count++;
  return (count);
}

/**
 * _putnbr - write an integer to stdout
 * @n: integer to write
 *
 * Return: the number of characters written
 */

int _putnbr(int n)
{
  int count = 0;

  if (n < 0)
    {
      putchar('-');
      count++;
      n = -n;
    }
  count += _putunbr(n);
  return (count);
}

/**
 * _putoct - write an unsigned octal integer to stdout
 * @n: unsigned integer to write
 *
 * Return: the number of characters written
 */
int _putoct(unsigned int n)
{
  int count = 0;

  if (n >= 8)
    {
      count += _putoct(n / 8);
    }
  putchar(n % 8 + '0');
  count++;
  return (count);
}

/**
 * _puthex - write an unsigned hexadecimal integer to stdout
 * @n: unsigned integer to write
 * @upper: flag for upper case
 *
 * Return: the number of characters written
 */
int _puthex(unsigned int n, int upper)
{
  int count = 0;

  if (n >= 16)
    {
      count += _puthex(n / 16, upper);
    }
  if (n % 16 < 10)
    {
      putchar(n % 16 + '0');
    }
  else
    {
      putchar(n % 16 - 10 + (upper ? 'A' : 'a'));
    }
  count++;
  return (count);
}

/**
 * _putaddr - write a pointer address to stdout
 * @p: pointer to write
 *
 * Return: the number of characters written
 */
int _putaddr(void *ptr)
{
  unsigned long address = (unsigned long)ptr;
  return printf("0x%llx", address);
}
