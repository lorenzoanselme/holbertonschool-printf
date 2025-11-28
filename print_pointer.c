#include "main.h"

/**
 * print_pointer - prints a pointer address in hexadecimal
 * @args: argument list
 * @f: flags (unused)
 *
 * Return: number of chars printed
 */
int print_pointer(va_list args, flags_t *f)
{
	void *ptr = va_arg(args, void *);
	unsigned long n;
	int count = 0;

	(void)f;

	if (ptr == NULL)
	{
		char *nil = "(nil)";
		int i = 0;

		while (nil[i])
		{
			_putchar(nil[i]);
			i++;
		}
		return (i);
	}

	n = (unsigned long)ptr;

	_putchar('0');
	_putchar('x');
	count += 2;

	count += print_unsigned_base(n, 16, "0123456789abcdef");

	return (count);
}
