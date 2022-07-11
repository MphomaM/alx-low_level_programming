#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
int len, n, k

len = 0;

wwhile (str[len] != '\0')
{
len++
}

if (len % 2 == 0)
{
for (i = len / 2; str[k] != '\0'; k++)
{
_putchar(str[k]);
}
}
else if (len % 2)
{
for (n = (len -1) / 2; n < len -1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
