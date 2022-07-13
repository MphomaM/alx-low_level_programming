#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed.
 * @src:  A pointer to a character that will also be changed.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int l, m;

l = 0;
while (dest[l] != '\0')
{
l++;
}

m = 0;
while (src[m] != '\0')
{
dest[l] = src[m];
m++;
l++;
}

dest[l] = '\0';

return (dest);
}
