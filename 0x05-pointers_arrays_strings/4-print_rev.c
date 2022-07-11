#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int j = 0, k;

while (s[k++])
j++;

for (k = j - 1; k >= 0; k--)
_putchar(s[k]);

_putchar('\n');
}
