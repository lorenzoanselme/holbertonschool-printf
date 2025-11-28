#include "main.h"

/**
 * print_char - Prints a single character
 * 
 * @args: List of variadic arguments
 * 
 * Return: Number of characters printed (always 1).
 */

int print_char(va_list args, flags_t *f)
{
	char c = va_arg(args, int);

	(void)f;

	_putchar(c);
	return (1);
}
