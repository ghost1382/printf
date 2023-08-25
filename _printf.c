#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Additional arguments
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    int i = 0, count = 0;
    va_list args;
    print_func funcs[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        {'d', print_int},  /* Add %d handler */
        {'i', print_int},  /* Add %i handler */
        /* Add more format specifiers here */
        {'\0', NULL}
    };

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            int j = 0;
            i++;
            while (funcs[j].specifier)
            {
                if (funcs[j].specifier == format[i])
                {
                    count += funcs[j].func(args);
                    break;
                }
                j++;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }
    va_end(args);
    return (count);
}

