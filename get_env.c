#include "shell.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

char *get_env(char *name, char **env)
{
	int i=0;
	char *token, *ret;

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
	return (NULL);
}