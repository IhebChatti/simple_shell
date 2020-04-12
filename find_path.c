#include "shell.h"

/**
 *findpathof - function to find the path env
 *@filename: name of the enviornment variable "PATH"
 *
 *Return: fullpath
 */

char *findpathof(char *filename)
{
	int i = 0;
	char *_path, *pathdup;
	char **tokens;
	char *conc;
	struct stat st;

	if (_strchr(filename, '/') != 0)
		return (filename);
	pathdup = get_env("PATH");
	_path = _strdup(pathdup);
	tokens = tokenizer(_path);
	while (tokens[i])
	{
		conc = _strcat(tokens[i], filename);
		if (stat(conc, &st) == 0)
			break;
		i++;
		if (!tokens[i])
			break;
		free(conc);
	}
	free(tokens);
	tokens = NULL;
	free(_path);
	_path = NULL;
	pathdup = NULL;
	return (conc);
}
