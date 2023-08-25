#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_rot13(va_list args);
int print_reverse(va_list args);
int print_custom(va_list args);
int print_int(va_list args);
int print_unsigned_number(unsigned int n);
int print_number(va_list args);
/**
 * struct print_functions - Struct to hold format specifier and corresponding function
 * @specifier: The format specifier
 * @func: The corresponding print function
 */
typedef struct print_functions
{
	char specifier;
	int (*func)(va_list);
} print_func;

#endif /* MAIN_H */
