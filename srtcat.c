#include "shell.h"
/**
 * _strcat - This function appends the src string to the dest string
 * @dest: string agument
 * @src: string argument
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count_d = 0, g;

	while (src[count] != '\0')
	{
		count++;
	}
	while (dest[count_d] != '\0')
	{
		count_d++;
	}
	for (g = 0; g < count; g++)
	{
		dest[count_d + g] = src[g];
	}
	dest[count_d + count] = '\0';
	return (dest);
}
