#include "shell.h"

/**
 * get_env - function to get enviroment variable by name
 * @name: name of the variable
 * 
 * Return: environment on success
 * NULL on failure
 */

char *get_env(char *name)
{
	char **env_p;
	char *ch_p;
	char *name_p;

	env_p = environ;
	while (*env_p != NULL)
	{
	for (ch_p = *env_p, name_p = name; *ch_p == *name_p; ch_p++, name_p++)
	{
		if (*ch_p == '=')
			break;
		}
		if ((*ch_p == '=') && (*name_p == '\0'))
			return (ch_p+1);
		env_p++;
	}
	return (NULL);
}
