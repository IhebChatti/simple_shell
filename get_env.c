#include "shell.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

extern char **environ;
char *get_env(char *name)
{
	int i=0;
	char *token, *ret;
	char **env;

	env = environ;
	while (env[i])
	{
		token = strtok(env[i], "=");
		if (_strcmp(token, name) == 0)
		{
			ret = strtok(NULL, "=");
			return (ret);
		}
		i++;
	}
	free (token);
	return (NULL);
}