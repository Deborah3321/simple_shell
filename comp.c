#include "shell.h"
/**
 * _strncmp - compares i bytes of st1 and st2
 * @st1: first string
 * @st2: second string
 * @i: number of bytes to be checked
 * Return: > 0 if st2 is less than st1, < 0 if st1 < st2,
 * 0 is st1 is equal to st2
 */

int _strncmp(char *st1, char *st2, int i)
{
	if (!i)
		return (0);
	if (*st1 == *st2)
		return (*st1 ? _strncmp(st1 + 1, st2 + 1, i - 1) : 0);
	if (*st1)
		return (1);
	if (*st2)
		return (-1);
	return (*st1 - *st2);
}
