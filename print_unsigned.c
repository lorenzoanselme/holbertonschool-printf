#include "main.h"

/**
 * print_unsigned_base - Prints an unsigned number in any base
 * @n: Number to print
 * @base: Base to convert to (8, 10, 16, etc.)
 * @digits: String containing digit characters
 *
 * Return: Number of printed characters.
 */
int print_unsigned_base(unsigned long n, int base, char *digits)
{
	int count = 0;

	if (n / base)
		count += print_unsigned_base(n / base, base, digits);

	_putchar(digits[n % base]);
	count++;

	return (count);
}

/**
 * print_unsigned - Prints an unsigned int in decimal
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 10, "0123456789"));
}
