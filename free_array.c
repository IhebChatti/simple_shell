#include "shell.h"

/**
 * 
 * 
 * 
 * 
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
	free(ar);
}