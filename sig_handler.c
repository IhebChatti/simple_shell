#include "shell.h"

/**
 *signal_handler - signal handler function for ctr+C
 *@sig: int
 *
 *Return: Void
 */

void signal_handler(int sig)
{
	if (sig == SIGINT)
	{
		write(STDOUT_FILENO, "\n", 2);
		write(STDOUT_FILENO, "$ ", 2);
	}
}
