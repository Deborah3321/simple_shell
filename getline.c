#include "shell.h"
/**
 * _getline -  Gets inputs
 * Return: The input.
 */

char *_getline(void)
{
	char *print = NULL;
	size_t count = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	if (getline(&print, &count, stdin) == -1)
	{
		free(print);
		return (NULL);
	}

	return (print);
}
