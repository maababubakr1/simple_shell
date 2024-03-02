#include "main.h"

/**
 *func_env - search for a path
 *@com: command to search in path
 *@env: array of arrays in path
 *@no_path: number of elemnts
 *Return: a string or NULL
 */

char *func_env(char *com, char **env, int *no_path)
{
int i = 0;
char *delim = "=:";
char *slash = "/";
char *key = "PATH";
char *concat_dir = NULL;
char *concat_param = NULL;
char *temp = NULL;
char *_token = NULL;

while (env[i])
{
temp = _strdup(env[i]);
_token = strtok(temp, delim);
if (_strcmp(_token, key) == 0)
{
while (_token)
{
*no_path = *no_path + 1;
concat_dir = str_concat(_token, slash);
concat_param = str_concat(concat_dir, com);
if (access(concat_param, F_OK) == 0)
{
free(temp);
temp = NULL;
free(concat_dir);
return (concat_param);
}
free(concat_dir);
free(concat_param);
_token = strtok(NULL, delim);
concat_param = NULL;
concat_dir = NULL;
}
_token = NULL;
}
free(temp);
temp = NULL;
i++;
}
return (NULL);
}
