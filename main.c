#include "main.h"

/**
 *main - main function to control shell
 *@ac: number of arguments
 *@av: array of arguments
 *@env: environmental variable
 *Return: 0 on success
 */

int main(int ac, char **av, char **env)
{
char *str = NULL, *no_command = "\n";
char **_args = NULL;
int report = 1, kil = 0, cicle = 1;
size_t _size_str;

kil = isatty(STDIN_FILENO);
if (kil)
_printf("$ ");
while (report && (getline(&str, &_size_str, stdin) != EOF))
{
if (fun_count(str) > 0)
{
if (_strcmp(str, no_command) != 0)
{
_args = token_arg(str);
report = exe_fun(&cicle, _args, av, env);
free(str);
free(_args);
str = NULL;
_args = NULL;
if (kil && report != 0)
_printf("$ ");
cicle++;
}
}
else if (kil != 0)
_printf("$ ");
}
if (kil && report != 0)
_printf("\n");
free(str);
free(_args);
ac = ac;
return (0);
}
