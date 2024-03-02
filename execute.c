#include "main.h"

/**
 *exe_fun - pass argument to decide execution
 *@_args: arguments
 *@cycle: how many times a new command is pressed
 *@av: argument to print the shell's name
 *@env: environment variable
 *Return: 0 or 1
 */

int exe_fun(int *cycle, char **_args, char **av, char **env)
{
int i;
char *do_build[] = {"cd", "pwd", "exit", "env"};

for (i = 0; i < 4; i++)
{
if (_strcmp(_args[0], do_build[i]) == 0)
{
return (handle_builtin(_args, env));
}
}
return (handle_exe(cycle, _args, av, env));
}
