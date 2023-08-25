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

/**
 * print_int - Print an integer
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
        int num = va_arg(args, int);
        int count = 0;

        if (num == 0)
        {
            _putchar('0');
            return (1);
        }

        if (num < 0)
        {
            _putchar('-');
            num = -num;
            count++;
        }

        count += print_recursive(num);
        return (count);
}

/**
 * print_recursive - Recursively prints the digits of a number
 * @num: The number to be printed
 * Return: Number of characters printed
 */
int print_recursive(int num)
{
        int count = 0;

        if (num != 0)
        {
            count += print_recursive(num / 10);
            _putchar(num % 10 + '0');
            count++;
        }

        return (count);
}

