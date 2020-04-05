#include "shell.h"

/**
 *_memset - function to fill memery with constant byte
 *@s: pointer type char
 *@b: constant byte char
 *@n: size of memory int
 *Return: pointer to memeory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}

/**
*_strdup - function that returns a pointer to newly allocated space in mem
*@str: pointer type char
*Return: pointer type char
*/
char *_strdup(char *str)
{
	int i = 0;
	char *ing;
	char *temp;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ing = malloc(i + 1);
	temp = ing;
	if (ing == NULL)
		return (NULL);
	while (*str)
		*temp++ = *str++;
	*temp = '\0';
	return (ing);
	free(ing);
}