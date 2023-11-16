#include "shell.h"


/**
 * _getenv - prts env to standard output
 *
 * @env: enviroment
 *
 */

void _getenv(char **env)
{
	size_t count = 0;

	while (env[count])
	{
		write(STDOUT_FILENO, env[count], _strlen(env[count]));
		write(STDOUT_FILENO, "\n", 1);
		count++;
	}
}
