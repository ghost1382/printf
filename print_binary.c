#include "main.h"
#include <stdarg.h>

/**
 * print_binary - Prints an unsigned integer in binary format.
 * @args: A va_list containing the unsigned integer to print.
 *
 * Return: The number of digits printed.
 */
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int binary[32];  /* Assuming 32-bit integers*/
    int i, count = 0;

    if (num == 0)
        return (_putchar('0'));

    for (i = 0; num > 0; i++)
    {
        binary[i] = num % 2;
        num /= 2;
    }

    for (i -= 1; i >= 0; i--)
    {
        _putchar(binary[i] + '0');
        count++;
    }

    return (count);
}

