#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>


int hsh_ctrld(char **args);
int hsh_cd(char **args);
int hsh_help(char **args);
extern char **environ;
int hsh_exit(char **args);
int _strcmp(char *str1, char *str2);
size_t _strncmp(char *str1, char *str2, size_t n);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _putchar(char c);

char *_get_path(char **env);
int _values_path(char **arg, char **env);
char *_getline(void);
void _getenv(char **env);
char **tokenize(char *str);
void _exit_command(char **args, char *str, int _exit);
int _fork_fun(char **arg, char **av, char **env,
char *lineptr, int np, int c);


#endif
