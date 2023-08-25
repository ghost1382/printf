#include "main.h"

/**
 * print_int - Prints an integer
 * @args: List of arguments
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

