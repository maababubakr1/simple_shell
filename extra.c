#include "main.h"

/**
 *fun_count - count letters
 *@s: a string
 *Return: number of letters
 */
int fun_count(char *s)
{
int i = 0, count = 0;

while (s[i])
{
if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
count++;
i++;
}
return (count);
}
