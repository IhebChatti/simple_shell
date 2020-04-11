#include "shell.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

int built_ins(char **args)
{
	int i, switch_args = 0;
	char* cmds_list[3];

	cmds_list[0] = "exit";
	cmds_list[1] = "cd";
	cmds_list[2] = "help";

	for (i = 0; i < 3; i++)
	{
		if (_strcmp(args[0], cmds_list[i]) == 0)
		{
			switch_args = i + 1;
			break;
		}
	}
	switch (switch_args)
	{
		case 1:
			_abort(args);
		case 2:
			cd(args[1]);
			return (1);
		case 3:
			help();
			return (1);
		default:
			break;
	}
	return (0);
}

int _abort(char **args)
{
	free_arr(args);
	exit(0);
}

int cd(char *path)
{
	return(chdir(path));
}

int help(void)
{
	write(STDOUT_FILENO, "Simple Shell\n",14);
	write(STDOUT_FILENO, "Help:\n",7);
	write(STDOUT_FILENO, "Builtin commands:\n", 19);
	write(STDOUT_FILENO, "cd: change current working directory\n", 38);
	write(STDOUT_FILENO, "exit: exit shell\n", 18);
	write(STDOUT_FILENO, "help: displays help\n", 21);
	return (0);
}