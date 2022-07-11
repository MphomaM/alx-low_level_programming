#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * 
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int j, k, n, len, l, m;

j = 0;
k = 0;
n = 0;
len = 0;
l = 0;
m = 0;

while (s[len] != '\0')
len++;

while (j < len && l == 0)
{
if (s[j] == '-')
k++;

if (s[j] >='0' && s[j] <= '9')
{
m = s[j] - '0';
if (d % 2)
m = -m;
n = n * 10 + m;
l = 1;
if (s[j + 1] < '0' || s[j + 1] > '9')
break;
l = 0;
}
j++;
}

if (l == 0)
return (0);

return (n);
}
