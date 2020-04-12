#include "shell.h"

/**
 *free_arr - function to free an array
 *@ar: array of strings
 *
 *Return: Void
 */

void free_arr(char **ar)
{
	int i = 0;

	if (ar == NULL)
		return;
	while (ar[i])
	{
		free(ar[i]);
		i++;
	}
}
