#include "main.h"

/**
 * print_percent - Prints a percent sign
 * 
 * @args: List of variadic arguments (unused)
 *
 * Return: Number of characters printed (always 1).
 */
int print_percent(va_list args, flags_t *f)
{
	(void)args;
	(void)f;

	_putchar('%');
	return (1);
}
