#include "main.h"

/**
 * get_func - Selects the correct function to handle a format specifier
 *
 * @s: The format specifier to match
 *
 * Return: Pointer to the corresponding function, or NULL if not found.
 */

int (*get_func(char s))(va_list, flags_t *)
{
	int j = 0;

	convert_t funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex_lower},
		{'X', print_hex_upper},
		{'S', print_S},
		{'p', print_pointer},
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
