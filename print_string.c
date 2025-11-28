#include "main.h"

/**
 * print_string - Prints a string
 * 
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */

int print_string(va_list args, flags_t *f)
{
	char *s = va_arg(args, char *);
	int count = 0, i = 0;

	(void)f;

	if (!s)
		s = "(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
		count++;
	}

	return (count);
}
