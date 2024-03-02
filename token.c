#include "main.h"

/**
 *token_arg - tokinization of command line
 *@str: string created from input
 *Return: Arguments, pointer of pointer
 */

char **token_arg(char *str)
{
int i = 0, num = 0;
char **_args = NULL;
char *arg = NULL;
char *sep = " \t\r\n\a";

while (str[num])
num++;
_args = malloc(num * (sizeof(char *)));
if (!_args)
{
perror("Allocation failed\n");
exit(98);
}
arg = strtok(str, sep);
while (arg != NULL)
{
_args[i] = arg;
arg = strtok(NULL, sep);
i++;
}
_args[i] = NULL;
return (_args);
}
