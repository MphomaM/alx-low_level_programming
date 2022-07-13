#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *char *src, int n)

{
int l;

l = 0;
while (l < n && src[l] != '\0')
{
dest[l] = src[l];
l++;
}

while (l < n)
{
dest[l] = '\0';
l++;
}

return (dest);

}
