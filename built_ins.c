#include "shell.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

int built_ins(char **args, char **env)
{
	int i = 0;
	b_ins our_b_ins[] = {
		{"quit", _abort},
		{NULL, NULL}
	};

	if (args[0] == NULL)
		return (1);
	while (our_b_ins[i].name != NULL)
	{
		if (_strcmp(our_b_ins->name, args[0]) == 0)
			return (our_b_ins[i].fun(args, env));
		i++;
	}
	return (0);
}

int _abort(char **args, char **env)
{
	free(args);
	free(env);
	exit(0);
}
