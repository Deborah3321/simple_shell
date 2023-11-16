#include "shell.h"

/**
 * _strcat - ncatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Origin string
 * Return: Always 0
 */



char *_strcat(char *dest, char *src)
{
	int y, z = 0;

	for (y = 0; dest[y] != '\0'; y++)
	{
	}
	for (z = 0; src[z] != '\0'; z++)
	{
		dest[y] = src[z];
		y++;
	}
	dest[y] = '\0';
return (dest);
}



/**
 * _strcmp - Compares two strings
 *
 * @str1: a string
 * @str2: Another string
 *
 * Return: multiple returns
 *
 */

int _strcmp(char *str1, char *str2)
{
	int p = 0;
	int count;

	while (str1[p] != 0 && str2[p] != 0 && str1[p] == str2[p])
		p++;
count = str1[p] - str2[p];
return (count);

}

/**
 * _strlen - gets the size of a string
 * @str: the string to measure
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;

	return (x);
}

/**
 *_strncmp -  function that compares two strings.
 *@str1: string one
 *@str2: string two
 *@n: number of characters
 * Return: difference
 */

size_t _strncmp(char *str1, char *str2, size_t n)
{
	size_t e, f;

	for (f = 0; str1[f] != '\0' && f < n; f++)
	{
		e = str1[f] - str2[f];

		if (e != 0)
		{
			return (e);
		}
	}
	return (0);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination of the copy
 * @src: source of the copy
 *
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int v = 0;

	for (v = 0; src[v] != '\0'; v++)
	{
		dest[v] = src[v];
	}
	dest[v + 1] = 0;
	return (dest);
}
