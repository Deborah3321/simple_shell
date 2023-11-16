#include "shell.h"
/**
 * _get_path - get variable PATH.
 * @env: enviromente local
 * Return: value of PATH.
 */

char *_get_path(char **env)
{
	size_t ind = 0, var = 0, count = 5;
	char *file = NULL;

	for (ind = 0; _strncmp(env[ind], "PATH=", 5); ind++)
		;
	if (env[ind] == NULL)
		return (NULL);

	for (count = 5; env[ind][var]; var++, count++)
		;
	file = malloc(sizeof(char) * (count + 1));

	if (file == NULL)
		return (NULL);

	for (var = 5, count = 0; env[ind][var]; var++, count++)
		file[count] = env[ind][var];

	file[count] = '\0';
	return (file);
}
