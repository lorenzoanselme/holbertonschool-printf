#include "main.h"

/**
 * print_unsigned - prints an unsigned int
 * @args: argument list
 * @f: flags (unused)
 *
 * Return: number of chars printed
 */
int print_unsigned(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);

	(void)f;

	return (print_unsigned_base(n, 10, "0123456789"));
}
