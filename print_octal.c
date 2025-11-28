#include "main.h"

/**
 * print_octal - prints unsigned int in octal
 * @args: argument list
 * @f: flags (# supported)
 *
 * Return: number printed
 */
int print_octal(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (f->hash && n != 0)
	{
		_putchar('0');
		count++;
	}

	count += print_unsigned_base(n, 8, "01234567");

	return (count);
}
