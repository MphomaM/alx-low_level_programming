#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int l, m;

l = 0;
while (dest[l] != '\0')
{
l++;
}

m = 0;
while (m < n && src[m] != '\0')
{
dest[l] = src[m];
m++;
l++;
}

dest[l] = '\0';

return (dest);
}
