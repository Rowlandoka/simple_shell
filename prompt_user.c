#include "shell.h"

/**
 * prompt_user - prints $ to indicate program 
 * is ready to take input
 * prints the prompt if the shell is in interactive mode
 * Return: 0
 */

void prompt_user(void)
{
    if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
        flags.interactive = 1;
    if (flags.interactive)
        write(STDERR_FILENO, "$ ", 2);
}
