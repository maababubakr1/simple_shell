#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <sys/signal.h>
#include <dirent.h>
#include <sys/stat.h>

/**
 *struct bu_in - structure forthe right built in functoin
 *@s: string to be evaluated
 *@fun: function to be called
 */
typedef struct bu_in
{
char *s;
int (*fun)(char **);
} tpe_build;
/**
 *struct tpserPer - structure for percentage format
 *@t: a format to percentage
 *@f: function
 */
typedef struct tpserPer
{
char t;
void (*f)(va_list, int *);
} tpPer;
typedef void(*sighabdler_t)(int);
char *get_string(int *i);
int fun_count(char *s);
void printChar(va_list va, int *p);
void printString(va_list va, int *p);
void printInt(va_list va, int *p);
void printDec(va_list va, int *p);
int _putchar(char c, int *p);
int _printf(const char *format, ...);
int funper(const char *format, int i, va_list toPrint, int *pun);
int print_Number(int n, int *p);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void *_realloc(void *ptr, int old, int new);
int fun_cd(char **_args);
int fun_pwd(char **_args);
int fun_exit(char **_args);
int fun_envi(char **env);
int handle_exe(int *cycle, char **_args, char **av, char **env);
int handle_builtin(char **_args, char **env);
int exe_fun(int *cycle, char **_args, char **av, char **env);
int stat_fun(char **str, int *fl, char *com, int coun, char *av_0, char **env);
char **token_arg(char *str);
char *func_env(char *com, char **env, int *no_path);

#endif
