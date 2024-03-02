#include "main.h"

/**
 *_strcmp - compare betweentwo strings
 *@s1: string to be evaluated
 *@s2: the given string
 *Return: a string of char
 */

int _strcmp(char *s1, char *s2)
{
int i, l, x, y;

i = 0;

while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
{
i++;
}
x = (s1[i] - '0');
y = (s2[i] - '0');
l = x - y;

return (l);
}
