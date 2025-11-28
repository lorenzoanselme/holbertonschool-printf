#include "main.h"

/**
 * print_int - prints an integer with + and space flags
 * @args: arguments
 * @f: flags
 *
 * Return: number of characters printed
 */
int print_int(va_list args, flags_t *f)
{
	long n = va_arg(args, int);
	unsigned long num;
	int count = 0;

	if (n >= 0)
	{
		if (f->plus)
		{
			_putchar('+');
			count++;
		}
		else if (f->space)
		{
			_putchar(' ');
			count++;
		}
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
		num = n;

	count += print_unsigned_base(num, 10, "0123456789");

	return (count);
}
