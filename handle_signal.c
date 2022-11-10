#include "shell.h"

/**
 *handle_signal - It keeps is interactive mode
 *@m: the signal number
 * Return: 0
 */

void handle_signal(int m)
{
    (void)m;
    write(STDERR_FILENO, "\n", 1);
    write(STDERR_FILENO, "$ ", 2);
}
