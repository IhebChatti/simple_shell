#include "shell.h"

/**
 *
 *
 *
 *
 *
 *
 */

void signal_handler(int sig)
{
	if (sig == SIGINT)
	{
		write(STDOUT_FILENO, "\n", 2);
		write(STDOUT_FILENO, "$", 2);
		exit(0);
	}
}
int main(void)
{
	pid_t pid;
	char *cmd;
	char *line = NULL;
	char **args = NULL;
	int status = 1;
	size_t size = 0;
	int in_line = 0;

	while (1)
	{
		signal(SIGINT, signal_handler);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$", 2);
		in_line = getline(&line, &size, stdin);
		if (in_line < 0)
		{
			write(STDIN_FILENO, "\n", 1);
			break;
		}
		args = tokenizer(line);
		if (built_ins(args))
			continue;
		pid = fork();
		if (pid == 0)
		{
			cmd = findpathof(args[0]);
			if (execve(cmd, args, NULL) == -1)
			{
				perror("Wrong usage");
				break;
			}
		}
		else
		{
			wait(&status);
		}
	}
	free(args);
	free(line);
	free(cmd);
	return (0);
}
