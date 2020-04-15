#include "shell.h"

/**
 *p_error - function to prints error
 *@index: number of cmd line
 *@args: arguments
 *
 *Return: 0 on success
 */

int p_error(int index, char **args)
{
	char *index_str = itoa(index);
	char *ar = args[0];
	write(STDERR_FILENO, "./hsh: ", 7);
	write(STDERR_FILENO, index_str, _strlen(index_str));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, ar, _strlen(ar));
	write(STDERR_FILENO, ": not found\n", 13);
	free(index_str);
	return (0);
}
