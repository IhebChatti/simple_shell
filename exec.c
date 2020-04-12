#include "shell.h"

/**
 *exec - function to execute
 *@cmd: command
 *@args: args
 *
 *Return: void
 */

int exec(char *cmd, char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		signal(SIGINT, SIG_DFL);
		if (execve(cmd, args, environ) < 0)
		{
			return (-1);
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);
	return (0);
}
