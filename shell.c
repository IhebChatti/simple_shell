#include "shell.h"

/**
 *main - Entry point
 *
 *Return: 0 on success
 *error at failure
 */

int main(void)
{
	char *cmd = NULL, *line = NULL, **args = NULL;
	size_t size = 0;
	int in_line = 0;

	signal(SIGINT, signal_handler);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		in_line = getline(&line, &size, stdin);
		if (in_line < 0)
		{
			write(STDIN_FILENO, "\n", 1);
			free(line);
			break;
		}
		args = tokenizer(line);
		if (args == NULL || *args == NULL)
			continue;
		if (built_ins(args))
		{
			free(args);
			continue;
		}
		cmd = findpathof(args[0]);
		exec(cmd, args);
		free(args);
		free(cmd);
	}
	return (0);
}
