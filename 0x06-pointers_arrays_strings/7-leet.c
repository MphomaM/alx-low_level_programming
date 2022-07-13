#include "main.h"

/** 
 * leet - encodes a string to 1337
 * @str: The string to be encoded.
 *
 * Return: a pointer to the encoded string.
 */
char *leet(char *)
{
int k1 = 0, k2;
char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[k1])
{
for (k2 = 0; k2 <= 7; k2++)
{
if (str[k1] == leet[k2] ||
str[k1] - 32 == leet[k2])
str[k1] = k2 + '0';
}

k1++;
}

return (str);
}
