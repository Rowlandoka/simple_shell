#include "shell.h"

/**
 * exit_cmd - handles exit command
 * @command: tokenized command
 * @line: input read from stdin
 * 
 * Return: 0
 */

void exit_cmd(char **command, char *line)
{
    free(line);
    free_buffers(command);
    exit(0);
}