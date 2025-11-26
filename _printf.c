#include "main.h"

/**
 * _printf - Custom implementation of printf
 * 
 * @format: Format string containing the characters and specifiers
 *
 * Return: The total number of characters printed, or -1 on error.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0;
	int count = 0;
	int (*func)(va_list);

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;

			if (format[index] == '\0')
			{
				return (-1);
			}

			func = get_func(format[index]);

			if (func != NULL)
			{
				count += func(args);
			}
			else
			{
				_putchar('%');
				_putchar(format[index]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[index]);
			count++;
		}

		index++;
	}

	va_end(args);
	return (count);
}

