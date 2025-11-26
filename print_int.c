#include "main.h"

/**
 * print_int - Prints an integer
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	count += print_number(num);

	return (count);
}
