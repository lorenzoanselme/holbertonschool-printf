#include "main.h"

/**
 * parse_flags - Parses +, space and # flags
 * @format: format string pointer
 * @i: pointer to index
 * @f: pointer to flags structure
 */
void parse_flags(const char *format, int *i, flags_t *f)
{
	while (format[*i] == '+' || format[*i] == ' ' || format[*i] == '#')
	{
		if (format[*i] == '+')
			f->plus = 1;
		else if (format[*i] == ' ')
			f->space = 1;
		else if (format[*i] == '#')
			f->hash = 1;

		(*i)++;
	}
}

/**
 * _printf - Custom printf function
 * @format: format string
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int (*func)(va_list, flags_t *);
	flags_t flags;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			flags.plus = flags.space = flags.hash = 0;

			parse_flags(format, &i, &flags);

			if (!format[i])
				return (-1);

			func = get_func(format[i]);
			if (!func)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
				count += func(args, &flags);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	_putchar(-1);

	return (count);
}
