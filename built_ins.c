#include "shell.h"

/**
 *built_ins - function for builtin commands
 *@args: arguments
 *
 *Return: 0 on success
 */

int built_ins(char **args)
{
	int i, switch_args = 0;
	char *cmds_list[3];

	cmds_list[0] = "exit";
	cmds_list[1] = "cd";
	cmds_list[2] = "help";
	cmds_list[3] = "env";

	for (i = 0; i < 4; i++)
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
			cd(args[1], args);
			return (1);
		case 3:
			help();
			return (1);
			case 4:
				env();
				return (1);
		default:
			break;
	}
	return (0);
}

/**
 *_abort - exit function
 *@args: arguments
 *
 *Return: void
 */

void _abort(char **args)
{
	free_arr(args);
	exit(0);
}

/**
 *cd - change working directory
 *@path: path
 *@args: arguments
 *
 *Return: new working directory
 */
int cd(char *path, char **args)
{
	char *home;
	char *old;

	old = get_env("OLDPWD");
	home = get_env("HOME");
	if (!args[1])
	{
		return (chdir(home));
	}
	if (_strcmp(args[1], "-") == 0)
		return (chdir(old));
	else
		return (chdir(path));
	return (0);
}

/**
 *help - help function
 *
 *Return: always 0
 */

int help(void)
{
	write(STDOUT_FILENO, "Simple Shell\n", 14);
	write(STDOUT_FILENO, "Help:\n", 7);
	write(STDOUT_FILENO, "Builtin commands:\n", 19);
	write(STDOUT_FILENO, "cd: change current working directory\n", 38);
	write(STDOUT_FILENO, "exit: exit shell\n", 18);
	write(STDOUT_FILENO, "help: displays help\n", 21);
	return (0);
}

/**
 *env - function to print env
 *
 *Return: void
 */

void env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, (const void *) environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 2);
	}
}
