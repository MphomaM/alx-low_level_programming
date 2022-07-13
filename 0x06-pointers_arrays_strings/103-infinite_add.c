#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the results.
 * @size_r: buffer size
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int c1 = 0, c2 = 0, k, l, m1, m2, add = 0;

while (*(n1 + c1) != '\0')
c1++;
while (*(n2 + c2) != '\0')
c2++;
if (c1 >= c2)
l = c1;
else
l = c2;
if (size_r <= l + 1)
return (0);
r[l + 1] = '\0';
c1--, c2--, size_r--;
m1 = *(n1 + c1) - 48, m2 = *(n2 + c2) - 48;
while (l >= 0)
{
k = m1 + m2 + add;
if (k >= 10)
add = k / 10;
else
add = 0;
if (k > 0)
*(r + l) = (k % 10) + 48;
else
*(r + l) = '0';
if (c1 > 0)
c1--, m1 = *(n1 + c1) - 48;
else
m1 = 0;
if (c2 > 0)
c2--, m2 = *(n2 + c2) - 48;
else
m2 = 0;
l--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}



















