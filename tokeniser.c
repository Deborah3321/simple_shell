#include "shell.h"
/**
 * tokenize - tokenizes a stirng
 * @str: what the user inputed
 * Return: a ptr to arr of ptrs
 */

char **tokenize(char *str)
{
	char **command = NULL;
	char *token = NULL;
	size_t n = 0;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
	{
		if (str[n] == ' ')
			count++;
	}
	if ((count + 1) == _strlen(str))
		return (NULL);
	command = malloc(sizeof(char *) * (count + 2));
	if (command == NULL)
		return (NULL);

	token = strtok(str, " \n\t\r");

	for (n = 0; token != NULL; n++)
	{
		command[n] = token;
		token = strtok(NULL, " \n\t\r");
	}
	command[n] = NULL;
	return (command);
}
