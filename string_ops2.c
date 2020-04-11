#include "shell.h"

/**
 *_strchr - function to locate a char in a string
 *@s: pointer type char
 *@c: char
 *Return: s or NULL if char not found
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
