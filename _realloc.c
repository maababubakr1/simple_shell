#include "main.h"

/**
 *_realloc - function to reallocate memory
 *@ptr: block to be allocated
 *@old: size occupied
 *@new: size of new memory
 *Return: newly allocated string
 */

void *_realloc(void *ptr, int old, int new)
{
char *c;
int i = 0;

if (new == old)
return (ptr);
if (new == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
c = malloc(new);
if (c == NULL)
return (NULL);
if (ptr == NULL)
return (c);
while (i < new && i < old)
{
c[i] = ((char *) ptr)[i];
i++;
}
free(ptr);
return (c);
}
