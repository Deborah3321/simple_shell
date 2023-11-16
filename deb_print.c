#include "shell.h"
/**
 * deb_print - handler cntrl c
 * @num: num argument
 */
void deb_print(int num)
{
	(void)num;
	write(STDOUT_FILENO, "\n$ ", _strlen("\n$ "));
}
/**
 * prompt - a shell using c
 * @arg: argument by user
 * @envp: envirement variable argument
 * @flg: flag argument for mode
 */
void prompt(char **arg, char **envp, bool flg)
{
	size_t z = 0;
	ssize_t num_c = 0;
	char *cmd = NULL, *rgv[MAX_C];
	int j/*, stat,path*/;

	while (1)
	{
		if (flg && isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", _strlen("$ "));
		signal(SIGINT, deb_print);
		num_c = getline(&cmd, &z, stdin);
		if (num_c == -1) /*handles the end file case*/
		{
			free(cmd);
			exit(EXIT_SUCCESS);
		}
		if (cmd[num_c - 1] == '\n')
			cmd[num_c - 1] = '\0';
		cmd = deb_rm(cmd);
		if (_strlen(cmd) == 0)
			continue;
		j = 0;
		rgv[j] = strtok(cmd, " \n");
		shell_exit(cmd);
		path_func(rgv, cmd);
		while (rgv[j])
		{
			rgv[j] = strtok(NULL, " \n");
			j++;
		}
		deb_pid(rgv, arg, envp); /* envir */
	}
	free(cmd);
}
