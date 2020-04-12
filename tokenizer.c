#include "shell.h"

/**
 *tokenizer - function to tokenize a string
 *@str: string to be tokenized
 *
 *Return: array of tokens
 */

char **tokenizer(char *str)
{

	int i = 0;
	char *token;
	char  **tokens;
	char *del = " \t\r\n\a:";

	tokens = malloc(sizeof(char *) * 64);
	if (tokens == NULL)
		return (NULL);
	*tokens = NULL;
	token = strtok(str, del);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, del);
	}
	if (token == NULL && *tokens == NULL)
	{
		free(tokens);
		free(token);
		return (NULL);
	}
	tokens[i] = NULL;
	return (tokens);
}
