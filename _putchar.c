#include <unistd.h>

/**
 * _putchar - Writes a character to a static buffer, flushing when full
 * @c: Character to write, or -1 to flush the buffer
 *
 * Description: This function stores characters in a static buffer
 * of 1024 bytes. When the buffer is full, it writes the entire buffer
 * to stdout using a single write call. When c is -1, the buffer is flushed.
 *
 * Return: 1 if a normal character is written, 0 when flushing.
 */
int _putchar(char c)
{
    static char buffer[1024];
    static int index;

    if (c == -1)
    {
        write(1, buffer, index);
        index = 0;
        return (0);
    }

    buffer[index++] = c;

    if (index == 1024)
    {
        write(1, buffer, index);
        index = 0;
    }

    return (1);
}
