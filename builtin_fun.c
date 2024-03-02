#include "main.h"

/**
 *fun_cd - change directory
 *@_args: arguments with location
 *Return: Always 1
 */

int fun_cd(char **_args)
{
_printf("%s\n", _args[0]);
return (1);
}

/**
 *fun_pwd - print current directory
 *@_args: arguments with location
 *Return: Always 1
 */

int fun_pwd(char **_args)
{
_printf("%s\n", _args[0]);
return (1);
}

/**
 *fun_exit - exit the terminal
 *@_args: arguments with location
 *Return: Always 0 or 1
 */

int fun_exit(char **_args)
{
char *x = "exit";

if (_strcmp(_args[0], x) == 0)
return (0);
return (1);
}

/**
 *fun_envi - prints environmental variable
 *@env: environmental variable
 *Return: Always 1
 */

int fun_envi(char **env)
{
int i = 0;
while (env[i])
{
_printf("%s\n", env[i]);
i++;
}
return (1);
}
