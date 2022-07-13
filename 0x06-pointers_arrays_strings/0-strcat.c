#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int l, m;

l = 0;
m = 0;

while (dest[l] != '\0')
l++;

while (src[m] != '\0')
{
dest[l] = src[m];
m++;
l++;
}

dest[l] = '\0';

return (dest);
}
