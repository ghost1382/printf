#include "main.h"
#include <stdio.h>  /* Include the stdio.h header for printf
*/
int main(void)
{
    int len1, len2;

    len1 = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    printf("Length:[%d, %d]\n", len1, len2);

    return (0);
}
