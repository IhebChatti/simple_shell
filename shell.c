#include "shell.h"

/**
 *
 *
 *
 *
 *
 *
 */
extern char **environ;
int main(void)
{
	pid_t pid;
	char *cmd = NULL;
	char *line = NULL;
	char **args = NULL;
	int status = 1;
	size_t size = 0;
	int in_line = 0;
	char **envp = environ;

	while (1)
	{
		signal(SIGINT, signal_handler);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$", 2);
		in_line = getline(&line, &size, stdin);
		if (in_line == -1)
		{
			free(line);
			write(STDIN_FILENO, "\n", 1);
			exit(0);
		}
		args = tokenizer(line);
		if (built_ins(args))
			continue;
		pid = fork();
		if (pid == 0)
		{
			cmd = findpathof(args[0]);
			if (execve(cmd, args, envp) == -1)
			{
				perror("Wrong usage");
				break;
			}
		}
		else
		{
			wait(&status);
		}
		free(args);
	}
	free(line);
	return (0);
}
