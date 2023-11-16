#include "shell.h"
/**
 * deb_rm - remove trailing spaces
 * @com: command
 * Return: command
 */
char *deb_rm(char *com)
{
	char *dupcmd;
	int d = 0, count;

	while (com[d] == ' ')
		d++;
	count = _strlen(com) - d + 1;
	dupcmd = malloc(count + 1);
	if (!dupcmd)
	{
		perror("Allocation Failed\n");
		return (NULL);
	}
	_strncpy(dupcmd, com + d, count);
	dupcmd[count] = '\0';
	_strcpy(com, dupcmd);
	free(dupcmd);
	return (com);
}
