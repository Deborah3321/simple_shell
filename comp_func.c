#include "shell.h"
/**
 * _strcmp - function that compares two strings
 * @str1: first string
 * @str2: second string
 * Return: val
 */
int _strcmp(char *str1, char *str2)
{
	int differ = 0;

	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	if (str1 != str2)
		differ = *str1 - *str2;

	return (differ);
}
