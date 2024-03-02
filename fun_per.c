#include "main.h"

/**
 *printChar - print char
 *@p: pointer to len
 *@va: varg argument
 *Return: void
 */

void printChar(va_list va, int *p)
{
char c = (char) va_arg(va, int);

_putchar(c, p);
}

/**
 *printString - print string
 *@p: pointer to len
 *@va: varg argument
 *Return: void
 */

void printString(va_list va, int *p)
{
char *s = va_arg(va, char*);
char n[] = "(null)";
int i = 0, l = 0;

if (s == NULL)
{
while (n[l])
{
_putchar(n[l], p);
l++;
}
}
else
{
while (s[i])
{
_putchar(s[i], p);
i++;
}
}
}

/**
 *printInt - print integer
 *@p: pointer to len
 *@va: varg argument
 *Return: void
 */

void printInt(va_list va, int *p)
{
int i;
int c = va_arg(va, int);

i = print_Number(c, p);
p += i;
}

/**
 *printDec - print decimal number
 *@p: pointer to len
 *@va: varg argument
 *Return: void
 */

void printDec(va_list va, int *p)
{
int i;
int c = va_arg(va, int);

i = print_Number(c, p);
p += i;
}
