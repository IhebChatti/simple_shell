#include "shell.h"

/**
 *_strlen - function to calculate lenght of string
 *@s: string to be calculated
 *
 *Return: lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
return (i);
}

/**
 *_strncpy - a function that copies a string
 *@dest: destination
 *@src: source
 *@n: int
 *Return: string
*/
char *_strcpy(char *dest, char *src)
{
	char *res = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*src != '\0')
			*dest++ = *src++;
		*dest = '\0';
	}
	return (res);
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
	
}

/**
*_strcmp - a function to compare 2 strings
*@s1: pointer type char
*@s2: pointer type char
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		return (*s1 - *s2);
}

/**
*_strcat - a function that concatinates two strings
*@dest: pointer type char for destination
*@src: pointer typ char for source
*Return: char
*/
char *_strcat(char *dest, char *src)
{
int i = 0, length = 0;

	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	return (dest);
}
