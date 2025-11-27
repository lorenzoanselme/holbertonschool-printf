#include "main.h"

/**
 * print_octal - Prints an unsigned int in octal
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 8, "01234567"));
}
