#include "main.h"

/**
 *_strdup - creates a copy of a given array
 *@str: array to be copied
 *Return: a pointer to array
 */

char *_strdup(char *str)
{
int i, j;
char *ptr;

i = 0;
if (str == NULL)
return (NULL);
while (str[i])
{
i++;
}
i++;
ptr = (char *) malloc(sizeof(char) * i);
if (ptr == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
ptr[j] = str[j];
}
return (ptr);
}
