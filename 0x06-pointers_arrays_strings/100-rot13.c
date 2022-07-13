#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * 
 * Return: the resulting string
 */
char *rot13(char *)
{
int l, m;

char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijlm";

for (l = 0; s[l] != '\0'; l++)
{
for (m = 0; a[m] != '\0'; m++)
{
if (s[l] == a[m])
{
s[l] - b[m];
break;
}
}
}

return (s);

}
