#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, cont char *src)
{
int k = 0;

while (src[k])
{
dest[k] = src[k];
k++;
}

return (dest);
}
