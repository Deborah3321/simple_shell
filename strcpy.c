#include "shell.h"
/**
 * _strcpy - copy a string
 * @dest: dest string arg
 * @src: source arg
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int n, count = 0;

	while (src[count] != '\0')
	{
		count++;
	}
	for (n = 0; n < count; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
