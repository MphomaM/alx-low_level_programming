#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chara,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int k = 0;

if (size == 0)
return (NULL);

p = (char *) malloc(sizeof(char) * size);

if (p == NULL)
return (0);

while (k < size)
{
*(p + k) = c;
k++;
}

*(p + k) = '\0';

return (p);
}
