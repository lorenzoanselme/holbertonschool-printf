#include "main.h"

/**
 * print_hex_upper - Prints an unsigned int in uppercase hexadecimal
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 16, "0123456789ABCDEF"));
}
