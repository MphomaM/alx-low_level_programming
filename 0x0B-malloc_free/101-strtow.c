#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string of words to be split
 * Return: double pointer to strings
 */
char **strtow(char *str)
{
char **ptr;
int l, m, len, start, end, k = 0;
int words = countWords(str);

if (!str || !countWords(str))
return (NULL);
ptr = malloc(sizeof(char *) * (words + 1));
if (!ptr)
return (NULL);
for (l = 0; l < words; l++)
{
start = startIndex(str, k);
end = endIndex(str, start);
len = end - start;
ptr[l] = malloc(sizeof(char) * (len + 1));
if (!ptr[l])
{
l -= 1;
while (l >= 0)
{
free(ptr[l]);
l--;
}
free(ptr);
return (NULL);
}
for (m = 0; m < len; m++)
ptr[l][m] = str[start++];
ptr[l][m++] = '\0';
k = end + 1;
}
ptr[l] = NULL;
return (ptr);
}

/**
 * isSpace - determines if character is a space or not
 * @c: input char
 * Return: 1 if true or 0 or not
 */
int is Space(char c)
{
return (c == ' ');
}

/**
 * startIndex - returns first index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of first non-space char
 */
int startIndex(char *s, int index)
{

while (isSpace(*(s + index)))
index++;
return (index);
}

/**
 * endIndex - returns last index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of last index of non-space char
 */
int endIndex(char *s, int index)
{
while (!isSpace(*(s + index)))
index++;
return (index);
}

/**
 * countWords - counts numbers of words in a string
 * @s: input string
 * Return: number of words
 */
int countWords(char *s)
{
int wordOn = 0;
int words = 0;

while (*s)
{
if (isSpace(*s) && wordOn)
wordsOn = 0;
else if (!isSpace(*s) && !wordOn)
{
wordOn = 1;
words++;
}
s++;
}
return (words);
}
