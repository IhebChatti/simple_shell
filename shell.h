#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

/* eviron global variable*/

extern char **environ;

/* Header Files */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>
#include <linux/limits.h>
#include <errno.h>

/* environ global variable */

extern char **environ;

/* string handling functions */

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strchr(char *s, char c);
char **tokenizer(char *str);

/* builtin functions */

int built_ins(char **args);
void _abort(char **args);
int cd(char *path);
int help(void);

/* path & env handling */

char *findpathof(char *filename);
char *get_env(char *name);

/* signal handler */

void signal_handler(int sig);

/* free array func */

void free_arr(char **ar);

#endif
