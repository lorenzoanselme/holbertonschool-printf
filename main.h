#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct convert - Structure associating a specifier with a print function
 * 
 * @spec: The format specifier character
 * @f: Pointer to the function that handles this specifier
 */

typedef struct convert
{
	char spec;
	int (*f)(va_list);
} convert_t;

int _printf(const char *format, ...);
int (*get_func(char s))(va_list);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_number(unsigned int n);
int print_binary(va_list args);

int _putchar(char c);

#endif