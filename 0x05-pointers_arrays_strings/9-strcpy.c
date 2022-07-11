#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
int len, k;

len = 0;

while (src[len] != '\0')
{
len++
}

for (k = 0; k < len; k++)
{
dest[k] = src[k];
}
dest[k] = '\0';

return (dest);
}
