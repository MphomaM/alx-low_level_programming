#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int j, k;
if (argc == 3)
{
j = atoi(argv[1]);
k = atoi(argv[2]);
printf("%d\n", j *k);
return (0);
}
printf("Error\n");
return (1);
}
