#include "main.h"

/**
 *_printf - a function to printa string
 *@format: char with string format to be printed
 *Return: Count of char or -1 on error
 */

int _printf(const char *format, ...)
{
int i = 0, res = 0, len = 0;
int *ptr;
va_list toPrint;

if (format == NULL)
{
return (-1);
}

ptr = &len;
va_start(toPrint, format);

while (format && format[i])
{
if (format[i] == '%')
{
res = funper(format, i, toPrint, ptr);
if (res == -1)
{
return (-1);
}
if (!res)
{
va_end(toPrint);
return (len);
}
i += res;
continue;

}
else
{
_putchar(format[i], ptr);
}
i++;
}
va_end(toPrint);
return (len);
}
