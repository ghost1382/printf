#include "main.h"
#include <stdarg.h>

/**
 * print_number - Print an integer
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_number(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	count += print_unsigned_number(n);

	return (count);
}

/**
 * print_unsigned_number - Print an unsigned integer
 * @n: The unsigned integer to print
 * Return: Number of characters printed
 */
int print_unsigned_number(unsigned int n)
{
	int count = 0;

	if (n / 10 != 0)
		count += print_unsigned_number(n / 10);
	_putchar(n % 10 + '0');
	count++;

	return (count);
}

