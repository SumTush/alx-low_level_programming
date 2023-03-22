#include <stdio.h>

/*
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return On success l.
 * On error, -i is returned, and errno is set appropriately.
 */
int_putchar(char c)

{
        return (write(1, &c, 1));
}
