#include "main.h"
/**
 *leet - encodes a string into 1337
 *@s: input string.
 *Return: the pointer dest.
 */

char *leet(char *s)
{
int count = 0, k;
int lower_case[] = {97, 101, 111, 116, 108};
int upper_case[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};

while (*(s + count) != '\0'
{
for (k = 0; k < 5; k++)
{
if (*(s + count) == lower_case[k] || *(s + count) == upper_case[k])
{
*(s + count) = numbers[k];
break;
}
}
count++;
}

return (s);
}
