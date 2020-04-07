#include "shell.h"



char *findpathof(char *filename)
{
	int i;
	char *_path;
	char **tokens;
	char *conc, *tok;
	struct stat st;

	_path = get_env("PATH");
	tokens = tokenizer(_path);
	if (stat(filename, &st) == 0)
		return (filename);
	else
	{
		for (i = 0; tokens[i] != '\0'; i++)
		{
			tok = _strdup(tokens[i]);
			conc = _strcat(tok, "/");
			conc = _strcat(conc, filename);
			if (stat(conc, &st) == 0)
				return (conc);
		}
	}
	free(_path);
	free(tok);
	free(tokens);
	return (conc);
}
