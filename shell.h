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
char *itoa(unsigned int n);
int intlen(int num);
void rev_arr(char *arr, int len);

/* builtin functions */

int built_ins(char **args, char *line);
void _abort(char **args, char *line);
int cd(char *path, char **args);
int help(void);
void env(void);

/* path & env handling */

char *findpathof(char *filename);
char *get_env(char *name);

/* execute function */
int exec(char *cmd, char **args);

/* signal handler */

void signal_handler(int sig);

/* free array func */

void free_arr(char **ar);

/* function to print error to stderr */

int p_error(int index, char **args);

#endif
