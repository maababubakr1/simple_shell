#include "main.h"

/**
 *str_concat - concatenate two strings
 *@s1: first string
 *@s2: second one
 *Return: a pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, l = 0;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
j++;
ptr = (char *) malloc(sizeof(char) * (i + j));
if (ptr == NULL)
return (NULL);
for (k = 0; k < i; k++)
{
ptr[k] = s1[k];
}
for (l = 0; l < j; l++)
{
ptr[i + l] = s2[l];
}
return (ptr);
}
