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
	unsigned int index = 0;

	signal(SIGINT, signal_handler);
	while (1)
	{
		index++;
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
		if (exec(cmd, args) < 0)
		{
			write(STDERR_FILENO, "./hsh: ", 7);
			write(STDERR_FILENO, itoa(index), _strlen(itoa(index)));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, args[0], _strlen(args[0]));
			write(STDERR_FILENO, ": not found\n", 13);
			exit(EXIT_FAILURE);
		}
		free(args);	
		free(cmd);
	}
	return (0);
}
