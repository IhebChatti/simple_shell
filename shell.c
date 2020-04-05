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
int main(int ac, char **av, char **env)
{
	pid_t pid;
	char *line = NULL;
	char **args = NULL;
	int status = 1;
	ssize_t size = 0, in_line = 0;

	while (1)
	{
		signal(SIGINT, signal_handler);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$", 2);
		in_line = getline(&line, &size, stdin);
		if (in_line == -1)
			exit(0);
		args = tokenizer(line);
		pid = fork();
		if (pid == 0)
		{
			if (execve(args[0], args, env) == -1)
			{
				perror("fail to execute");
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
	return (0);
}
