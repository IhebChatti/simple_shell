#include "shell.h"

/**
 *
 *
 *
 *
 *
 *
 */

int main(void)
{
	char *cmd = NULL, *line = NULL, **args = NULL;
	size_t size = 0;
	pid_t pid;
	int in_line = 0, status;

	signal(SIGINT, signal_handler);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		in_line = getline(&line, &size, stdin);
		if (in_line < 0)
		{
			write(STDIN_FILENO, "\n", 1);
			break;
		}
		args = tokenizer(line);
		if (args == NULL || *args == NULL)
			continue;
		if (built_ins(args))
			continue;
		cmd = findpathof(args[0]);
			pid = fork();
		if (pid == 0)
		{
			signal(SIGINT, SIG_DFL);
			if (execve(cmd, args, environ) < 0)
			{
				perror(args[0]);
				exit(0);
			}
		}
		else
			wait(&status);
		free(args);
	}
	free_arr(args);
	free(line);
	return (0);
}
