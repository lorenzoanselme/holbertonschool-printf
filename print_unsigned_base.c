#include "main.h"

/**
 * print_unsigned_base - prints an unsigned long number in any base
 * @n: number to print
 * @base: base to use (8, 10, 16, etc.)
 * @digits: string containing digit characters
 *
 * Return: number of characters printed.
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
