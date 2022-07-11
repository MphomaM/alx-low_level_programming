#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
char tmp;
int k, len, len1;

len = 0;
len1 = 0;

while (s[len] != '\0')
{
len++;
}

len1 = len - 1;

for (k = 0; k < len / 2; k++)
{
tmp = s[k];
s[k] = s[len1];
s[len1--] = tmp;
}
}
