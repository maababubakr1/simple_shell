#include "main.h"

/**
 *print_Number - print decimal and integer
 *@n: number to print
 *@p: pointer to known length
 *Return: number of digits in n
 */

int print_Number(int n, int *p)
{
unsigned int i = n;
int count;

if (n < 0)
{
_putchar('-', p);
i *= -1;
count = 1;
}
if (i / 10)
{
print_Number((i / 10), p);
}
_putchar(((i % 10) + '0'), p);
while (i > 10)
{
i /= 10;
count++;
}
count++;
return (count);
}
