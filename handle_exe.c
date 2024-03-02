#include "main.h"

/**
 *handle_exe - create child process and schedule execution
 *@_args: arguments to use
 *@cycle: number of times a parameter is passed
 *@av: parameter indicating the shell's name
 *@env: environ variable
 *Return: 0 or 1
 */

int handle_exe(int *cycle, char **_args, char **av, char **env)
{
int status, childPID, _flag = 0, no_path;
char *str_ev = NULL;

no_path = stat_fun(&str_ev, &_flag, _args[0], *cycle, av[0], env);
if (str_ev != NULL)
{
_flag++;
childPID = fork();
if (childPID == 0)
execve(str_ev, _args, NULL);
else if (childPID < 0)
perror("command not found");
else
{
do {
waitpid(childPID, &status, WUNTRACED);
} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}

}

if (_flag == 0)
{
if (no_path != 1)
_printf("%s: %d: %s: not found\n", av[0], *cycle, _args[0]);
}

if (_flag == 2)
free(str_ev);
return (1);
}
