#include "shell.h"

/**
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
		write(STDOUT_FILENO, "$ ", 2);
	}
}
