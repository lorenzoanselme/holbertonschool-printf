#include "main.h"

/**
 * print_string - Prints a string
 * 
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */

int print_string(va_list args)
{
    char *s = va_arg(args, char *);
    int i = 0;

    if (s == NULL)
        s = "(null)";

    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }

    return (i);
}
