#include "shell.h"
/**
 * len_val - a func that det len later
 * @h: a parameter
 * Return: the lenth.
 */
int len_val(int h)
{
	unsigned int count;
	int len = 1;

	if (h < 0)
	{
		count = h * -1;
		len++;
	}
	else
	{
		count = h;
	}
	while (count > 9)
	{
		count = count / 10;
		len++;
	}

	return (len);
}
/**
 * _itoa - a func that uses int to get char later
 * @num: a passing param.
 * Return: buff if not NULL.
 */
char *_itoa(int num)
{
	char *buf;
	size_t  k;
	int len = len_val(num);

	buf = malloc(len + 1);
	if (!buf)
	{
		return (NULL);
	}
	buf[len] = '\0';
	if (num < 0)
	{
		k = num * -1;
		*buf = '-';
	}
	else
		k = num;
	len--;

	do {
		*(buf + len) = (k % 10) + '0';
		k /= 10;
		len--;
	} while (k > 0);
		return (buf);
}
/**
 * err_type - a function that runs error command
 * @n: argument
 * @arv: arv argument
 * @cmd: the command.
 * Return: void.
 */
void err_type(denum *n, char **arv, char *cmd)
{
	int count;
	char *error_msg, *cnt_str;

	cnt_str = _itoa(n->cnt);
	count = _strlen(arv[0]) + _strlen(cmd) + _strlen(cnt_str) + 17;
	error_msg = malloc(count);
	if (!error_msg)
	{
		return;
	}
	_strcpy(error_msg, arv[0]);
	_strcat(error_msg, ": ");
	_strcat(error_msg, cnt_str);
	_strcat(error_msg, ": ");
	_strcat(error_msg, cmd);
	_strcat(error_msg, ": not found\n");
	_strcat(error_msg, "\0");
	write(STDOUT_FILENO, error_msg, count);
	free(error_msg);
}
