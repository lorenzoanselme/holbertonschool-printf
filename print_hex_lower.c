#include "main.h"

/**
 * print_hex_lower - Prints an unsigned int in lowercase hexadecimal
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */
int print_hex_lower(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 16, "0123456789abcdef"));
}
