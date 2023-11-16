#include "shell.h"
/**
 * path_func - handle the path function
 * @gmt: argument
 * @com: command set by the user
 * Return: command for exec
 */
char *path_func(char **gmt, char *com)
{
	char *hierachy;
       
	hierachy = malloc(_strlen("/bin/") + _strlen(com) + 1);
	if (!hierachy)
	{
		return (NULL);
	}
	_strcpy(hierachy, "/bin/");

	if (com[0] != '/' && com[0] != '.')
	{
		gmt[0] = _strcat(hierachy, com);
		return (gmt[0]);
	}
	free(hierachy);
	return (com);
}
