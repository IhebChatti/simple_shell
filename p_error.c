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
	write(STDERR_FILENO, "./hsh: ", 7);
	write(STDERR_FILENO, itoa(index), _strlen(itoa(index)));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, args[0], _strlen(args[0]));
	write(STDERR_FILENO, ": not found\n", 13);
	return (0);
}
