#include "shell.h"

/**
 * print_s - prints a string
 *@s: string to be printed
 *
 * Return: number of characters printed
 */
int print_s(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
    return (i);
}
