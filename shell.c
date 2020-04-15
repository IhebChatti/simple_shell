#include "shell.h"

/**
 *main - Entry point
 *
 *Return: 0 on success
 *error at failure
 */

int main(void)
{
	char *cmd, *line = NULL, **args = NULL;
	size_t size = 0;
	int in_line = 0;
	unsigned int index = 0;

	signal(SIGINT, signal_handler);
	while (1)
	{
		free(args);
		args = NULL;
		index++;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		in_line = getline(&line, &size, stdin);
		if (in_line < 0)
		{
			free(line);
			line = NULL;
			write(STDIN_FILENO, "\n", 1);
			break;
		}
		args = tokenizer(line);
		if (args == NULL || *args == NULL)
			continue;
		if (built_ins(args))
			continue;
		cmd = findpathof(args[0]);
		if (exec(cmd, args) < 0)
		{
			free_arr(args);
			p_error(index, args);
			exit(EXIT_FAILURE);
		}
		if (cmd != args[0])
			free(cmd);
	}
	return (0);
}
