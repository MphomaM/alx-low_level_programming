#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int k;

unsigned int s1, s2;

s1 = 0;
s2 = 0;

for (k = 0; k < size; k++)
{
s1 += a[(size * k) + k];
s2 += a[(size * (k + 1)) - (k + 1)];
}

print("%d, %d\n", s1, s2);
}
