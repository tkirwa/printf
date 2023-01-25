#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int process_format(const char *format, va_list args);
int handle_conversion(char conversion, va_list args);
int print_string(char *str);
int _putchar(char c);

#endif /* MAIN_H */
