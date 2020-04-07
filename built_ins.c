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
	int i = 0;
	b_ins our_b_ins[] = {
		{"exit", _abort},
		{NULL, NULL}
	};

	if (args[0] == NULL)
		return (1);
	while (our_b_ins[i].name != NULL)
	{
		if (_strcmp(our_b_ins->name, args[0]) == 0)
			return (our_b_ins[i].fun(args));
		i++;
	}
	return (0);
}

int _abort(char **args)
{
	printf("Bye have a great day\n");
	free(args);
	exit(0);
}
