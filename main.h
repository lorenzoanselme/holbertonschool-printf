#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct flags - Stores active formatting flags
 * @plus: flag '+'
 * @space: flag ' '
 * @hash: flag '#'
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct convert - maps a specifier to its print function
 * @spec: the format specifier character
 * @f: the function that handles the specifier
 */
typedef struct convert
{
	char spec;
	int (*f)(va_list, flags_t *);
} convert_t;

int _printf(const char *format, ...);
int (*get_func(char s))(va_list, flags_t *);

int print_char(va_list args, flags_t *f);
int print_string(va_list args, flags_t *f);
int print_S(va_list args, flags_t *f);
int print_percent(va_list args, flags_t *f);
int print_int(va_list args, flags_t *f);
int print_unsigned(va_list args, flags_t *f);
int print_octal(va_list args, flags_t *f);
int print_hex_lower(va_list args, flags_t *f);
int print_hex_upper(va_list args, flags_t *f);
int print_pointer(va_list args, flags_t *f);
int print_binary(va_list args, flags_t *f);

int print_unsigned_base(unsigned long n, int base, char *digits);

int _putchar(char c);

#endif
