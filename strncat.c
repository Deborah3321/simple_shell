#include "shell.h"
/**
 * _strncat - Concantenates two strings where n number
 *            of bytes are copied from source.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: n bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_count = _strlen(dest);
	size_t q;

	for (q = 0; q < n && src[q] != '\0'; q++)
		dest[dest_count + q] = src[q];
	dest[dest_count + q] = '\0';

	return (dest);
}
