#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 * Return: Always 0
 */
void print_diagonal(int n)
{
int i, space;

if (n > 0)
{
for (i = 0; i < n; i++)
for (space = 0; space < i; space++)
_putchar(' ');
_putchar('\\');

if (i == n - 1)
continue;

_putchar('\n');
}
}

_putchar('\n');
}
