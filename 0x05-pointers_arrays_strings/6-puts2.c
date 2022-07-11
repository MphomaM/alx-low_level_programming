#include "main.h"

/**
 * puts2 - prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
int j = 0, k = 0;

while (str[j++])
k++;

for (j = 0; j < k; j += 2)
_putchar(str[j]);

_putchar('\n');
}
