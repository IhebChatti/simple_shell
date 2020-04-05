#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

/* Header Files */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>

/* Buildin struct */

typedef struct built_ins
{
	char *name;
	int (*fun)(char **, char **);
}b_ins;

/* string handling functions */

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *_strdup(char *str);
char **tokenizer(char *str);


int _abort(char **args, char **env);
int built_ins(char **args, char **env);

#endif