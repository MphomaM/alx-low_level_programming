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

sum = 0;
sum1 = 0;

for (k = 0; k < size; k++)
{
sum += a[(size * k) + k];
sum1 += a[(size * (k + 1)) - (k + 1)];
}

printf("%d, %d\n", sum, sum1);
}
