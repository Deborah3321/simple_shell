#include "shell.h"
/**
 * _strlen - length of a string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int m = 0;

	while (*(str + m) != '\0')
	{
		m++;
	}
	return (m);
}
