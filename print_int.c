#include "main.h"

/**
 * print_int - Prints an integer
 * @args: List of variadic arguments
 *
 * Description: Extracts an integer from the argument list and prints it.
 * Handles negative numbers and prints each digit recursively.
 * Return: Number of characters printed.
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int count = 0;
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        count++;
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
        count += print_number(num / 10);

    _putchar((num % 10) + '0');
    count++;

    return (count);
}

/**
 * print_number - Prints an unsigned integer recursively
 * @n: Number to print
 *
 * Return: Number of printed characters.
 */
int print_number(unsigned int n)
{
    int count = 0;

    if (n / 10)
        count += print_number(n / 10);

    _putchar((n % 10) + '0');
    count++;

    return (count);
}
