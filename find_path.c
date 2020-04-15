#include "shell.h"

/**
 *findpathof - function to find the path env
 *@filename: name of the enviornment variable "PATH"
 *
 *Return: fullpath
 */

char *findpathof(char *filename)
{
	int i = 0, flag = 0;
	char *_path, *pathdup;
	char **tokens;
	char *conc;
	struct stat st;

	if (_strchr(filename, '/') != 0)
		return (filename);
	pathdup = get_env("PATH");
	if (pathdup == NULL)
		return (filename);
	_path = _strdup(pathdup);
	tokens = tokenizer(_path);
	if (tokens == NULL)
		return (filename);
	while (tokens[i])
	{
		conc = _strcat(tokens[i], filename);
		if (stat(conc, &st) == 0)
		{
			flag += 1;
			break;
		}
		i++;
		free(conc);
	}
	free(tokens);
	tokens = NULL;
	free(_path);
	_path = NULL;
	pathdup = NULL;
	if (flag > 0)
		return (conc);
	else
		return (filename);
}
