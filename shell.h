#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>
#define MAX_C 10
/**
 * struct denum - structure that contains vars
 * @cnt: lines cnt
 */
typedef struct denum
{
	int cnt;
} denum;
void prompt(char **arg, char **envp, bool flg);
int _strcmp(char *str1, char *str2);
char *_strcat(char *dest, char *src);
char *path_func(char **gmt, char *com);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
void shell_exit(char *cmd);
void deb_pid(char **arg, char **men, char **unt);
char *deb_rm(char *com);
char *_strncpy(char *dest, char *src, int n);
char *get_path(char *cmd);
char *_getenv(char *name);
char **tokenize_env(char *path);
extern char **environ;
void err_type(denum *n, char **arv, char *cmd);

#endif
