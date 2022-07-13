#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src, including the terminating
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, cost char *src)
{
int k = 0, dest_len = 0;

while (dest[k++])
dest_len++;

for (k = 0; src[k]; k++)
dest[dest_len++] = src[k];

return (dest);
}
