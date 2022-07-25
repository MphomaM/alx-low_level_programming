#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
int k, l, m, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (k = 0; k < ac; k++)
{
for (l = 0; av[k][l] != '\0'; l++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

m = 0;

for (k = 0; k < ac; k++)
{
for (l = 0; av[k][l] != '\0'; l++)
{
str[m] = av[k][l];
m++;
}
str[m] = '\n';
m++;
}

return (str);
}
