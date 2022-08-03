#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_the_all(const unsigned int n, ...)
{
unsigned int k;
int sum = 0;
va_list list;

va_start(list, n);

for (k = 0; k < n; k++)
sum += va_arg(list, int);

va_end(list);

return (sum);
}
