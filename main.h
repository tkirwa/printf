#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char*, ...);
int _puts(char *str);

int _putunbr(unsigned int);
int _putnbr(int);
int _putoct(unsigned int);
int _puthex(unsigned int, int);
int _putaddr(void *);
int print_char(int);
int print_string(char *);
int print_int(int);
int print_unsigned(unsigned int);
int print_octal(unsigned int);
int print_hex(unsigned int, int);
int print_pointer(void *);
int print_binary(unsigned int n);
int  _printf_buffer(const char *format, ...);
int print_non_printable_string(char *s);


#endif
