#include "main.h"
/**
 *print_number - prints an integer.
 *@n: input integer.
 *Return: no return.
 */

void print_number(int n)
{
unsigned int l, m, count;

if (n < 0)
{
_putchar(45);
l = n * -1;
}
else
{
l = n;
}

m = l;
count = 1;

while (m > 9)
{
m /= 10;
count *= 10;
}

for (; count >= 1; count /= 10)
{
_putchar(((l / count) % 10) + 48);
}
}
