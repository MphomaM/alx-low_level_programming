#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int k, d, n, len, f, digit;

k = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (k < len && f == 0)
{
if (s[k] == '-')
++d;

if (s[k] >= '0' && s[k] <= '9')
{
digit = s[k] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[k + 1] < '0' || s[k + 1] > '9')
break;
f = 0;
}
k++;
}

if (f == 0)
return (0);

return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
int sum, num, k, l, m;

sum = 0;

for (k = 1; k < argc; k++)
{
for (l = 0; argv[k][l] != '\0'; l++)
{
if (argv[k][l] > '9' || argv[k][l] < '0')
{
puts("Error");
return (1);
}
}
}

for (m = 1; m < argc; m++)
{
num = _atoi(argv[m]);
if (num >= 0)
{
sum += num;
}
}

printf("%d\n", sum);
return (0);
}
