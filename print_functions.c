#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Print a character
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - Print a string
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	int i;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_percent - Print a percent character
 * @args: Arguments list (unused)
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
int print_int(va_list args)
{
	return (print_number(args));
}
