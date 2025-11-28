#include "main.h"

/**
 * print_S - Prints a string, handling non printable characters
 * @args: List of variadic arguments
 *
 * Description: Non printable chars (ASCII < 32 or >= 127)
 * are printed as \x followed by their uppercase hexadecimal code (2 digits).
 *
 * Return: Number of characters printed.
 */
int print_S(va_list args, flags_t *f)
{
	char *str = va_arg(args, char *);
	int i = 0, count = 0;
	int ch;
	char hex[2];

	(void)f;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		ch = str[i];

		if (ch < 32 || ch >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;

			hex[0] = "0123456789ABCDEF"[ch / 16];
			hex[1] = "0123456789ABCDEF"[ch % 16];

			_putchar(hex[0]);
			_putchar(hex[1]);
			count += 2;
		}
		else
		{
			_putchar(ch);
			count++;
		}

		i++;
	}

	return (count);
}
