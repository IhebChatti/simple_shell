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
 *_atoi - function to convert array to integer
 *@s: pointer type char
 *Return: converted int
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	return (sign * result);
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
