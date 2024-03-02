#include "main.h"

/**
 *stat_fun - evaluate initial condition
 *@str: pointer of pointer to evaluate
 *@fl: flag to control pointer free
 *@com: command on shell
 *@env: environ variable
 *@coun: count cycle
 *@av_0: first main argument
 *Return: 0 or 1
 */

int stat_fun(char **str, int *fl, char *com, int coun, char *av_0, char **env)
{
struct stat *bf;
int no_path = 0;

*str = func_env(com, env, &no_path);
if (*str != NULL)
*fl += 1;
if (*str == NULL)
{
bf = malloc(sizeof(struct stat));
if (bf == NULL)
return (1);
if (stat(com, bf) == 0 && S_ISDIR(bf->st_mode))
{
*fl += 1;
_printf("%s: %d: %s: Permission denied\n", av_0, coun, com);
free(bf);
return (1);
}
else if (stat(com, bf) == 0 && S_ISREG(bf->st_mode))
{
*str = com;
free(bf);
}
else
free(bf);
}
return (no_path);
}
