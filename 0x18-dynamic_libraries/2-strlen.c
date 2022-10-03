#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The lenth of @s.
 */
int _strlen(char *s)
{
int j;

j = 0;

while (s[j] != '\0')
{
j++;
}

return (j);
}
