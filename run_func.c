#include "shell.h"
/**
 * deb_pid - a function that run pid command
 * @men: argument
 * @arg: argument
 * @unt: argument
 */
void deb_pid(char **arg, char **men, char **unt)
{
	pid_t child_prog;
	int prob;

	child_prog = fork();

	if (child_prog == -1)
	{
		perror("Process Error");
		exit(EXIT_FAILURE);
	}
	if (child_prog == 0)
	{

		if (execve(arg[0], arg, unt) == (-1))
		{
			write(STDOUT_FILENO, men[0], _strlen(men[0]));
			write(STDOUT_FILENO, ": No such file or directory",
			_strlen(": No such file or directory"));
			write(STDOUT_FILENO, "\n", 1);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&prob);
	}
}
