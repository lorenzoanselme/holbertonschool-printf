#include "main.h"

/**
 * print_pointer - Prints a memory address in hexadecimal
 * @args: List of variadic arguments
 *
 * Description: Prints a pointer in the format 0xHEX...
 * If the pointer is NULL, prints "(nil)".
 *
 * Return: Number of characters printed.
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long addr;
	int count = 0;
	char *hex = "0123456789abcdef";

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

	addr = (unsigned long)ptr;

	_putchar('0');
	_putchar('x');
	count += 2;

	count += print_unsigned_base(addr, 16, hex);

	return (count);
}
