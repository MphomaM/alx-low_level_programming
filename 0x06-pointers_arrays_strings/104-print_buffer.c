#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable characters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
int j, k;

for (j = 0; j < size; j += 10)
{
printf("%08x: ", j);

for (k = 0; k < 10; k++)
{
if ((k + j) >= size)
printf(" ");

else
printf("%02x", *(b + k + j));
if ((k % 2) != 0 && k != 0)
printf(" ");
}

for (k = 0; k < 10; k++)
{
if ((k + j) >= size)
break;

else if (*(b + k +j) >= 31 &&
*(b + k + j) <= 126)
printf("%c", *(b + k + j));

else
printf(".");
}

if (j >= size)
continue;

printf("\n");
}

if (size <= 0)
printf("\n");
}
