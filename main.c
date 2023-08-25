#include "main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;

    len1 = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    printf("Length:[%d, %d]\n", len1, len2);

    _printf("Printing an integer: %d\n", 1024);
    printf("Printing an integer: %d\n", 1024);

    return (0);
}

