#include "main.h"

/**
 * get_func - Selects the correct function to handle a format specifier
 *
 * @s: The format specifier to match
 *
 * Return: Pointer to the corresponding function, or NULL if not found.
 */

int (*get_func(char s))(va_list)
{
	int j = 0;

	convert_t funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}};

	while (funcs[j].spec != '\0')
	{
		if (funcs[j].spec == s)
		{
			return (funcs[j].f);
		}
		j++;
	}

	return (NULL);
}
