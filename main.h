#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char); 
int _printf(const char *format, ...);
int process_format(const char *format, va_list args);
int handle_conversion(char conversion, va_list args);
int print_string(char *str);

#endif /* MAIN_H */
