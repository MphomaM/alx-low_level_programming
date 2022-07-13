#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int k1 = 0, k2 = 0, l, m, o1, o2, add = 0;

while (*(n1 + k1) != '\0')
k1++;
while (*(n2 + k2) != '0')
k2++;
if (k1 >= k2)
m = k1;
else
m = k2;
if (size_r <= m + 1)
return (0);
r[m + 1] = '\0';
k1--, k2--, size_r--;
o1 = *(n1 + k1) - 48, o2 = *(n2 + k2) - 48;
while (m >= 0)
{
l = o1 + o2 + add;
if (l >= 10)
add = l / 10;
else
add = 0;
if (l > 0)
*(r + m) = (l % 10) + 48;
else
*(r + m) = '0';
if (k1 > 0)
k1--, o1 = *(n1 + k1) - 48;
else
o1 = 0;
if (k2 > 0)
k2--, o2 = *(n2 + k2) - 48;
else
o2 = 0;
m--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
