#include "main.h"

/**
 * print_percent - Prints a percent sign
 * 
 * @args: List of variadic arguments (unused)
 *
 * Return: Number of characters printed (always 1).
 */

int print_percent(va_list args)
{
    (void)args;

    _putchar('%');
    return (1);
}
