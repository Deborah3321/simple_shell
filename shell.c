#include "shell.h"
/**
 * main - main function
 * @argc: len argument
 * @argv: argv argument by user
 * @envp: envp argument env
 * Return: 0
 */
int main(int argc, char **argv, char **envp)
{
	bool interactive = (argc == 1 && isatty(STDIN_FILENO));

	prompt(argv, envp, interactive);
	return (0);
}
