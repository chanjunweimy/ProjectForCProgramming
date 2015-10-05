#include <stdio.h>

/*
 * Prints size of operands in Bytes
 */

int main()
{
    int i;
    double d;
    char c;
    float f;

    printf("Size of int: %lu bytes\n", (unsigned long)sizeof(i));
    printf("Size of double: %lu bytes\n", (unsigned long)sizeof(d));
    printf("Size of float: %lu bytes\n", (unsigned long)sizeof(f));
    printf("Size of char: %lu bytes\n", (unsigned long)sizeof(c));

    return 0;
}
