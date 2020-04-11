#include "shell.h"

/**
 * 
 * 
 * 
 * 
 */

char *findpathof(char *filename)
{
	int i;
	char *_path, *pathdup;
	char **tokens;
	char *conc, *tok;
	struct stat st;

	pathdup = get_env("PATH");
	_path = _strdup(pathdup);
	tokens = tokenizer(_path);
	if (_strchr(filename, '/') != 0)
		return (filename);
	else
	{
		for (i = 0; tokens[i] != '\0'; i++)
		{
			tok = _strdup(tokens[i]);
			conc = _strcat(tok, filename);
			if (stat(conc, &st) == 0)
				break;
		}
	}
	free(_path);
	free(tok);
	return (conc);
}
