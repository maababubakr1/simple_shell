#include "main.h"

/**
 *_putchar - writes a character
 *@c: character to be printed
 *@p: pointer to array
 *Return: 1 on success, -1 on error
 */

int _putchar(char c, int *p)
{
*p += 1;

return (write(1, &c, 1));
}
