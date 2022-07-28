#include <stdlib.h>
#include <stdio.h>

/**
 *_isdigit - tells if the string consists of digits
 * @argv: pointe to current item in argument
 * Return: return 0 if all digits, 1 if not all digits.
 */
int _isdigit(char *argv)
{
int k;

k = 0;
while (argv[k] >= '0' && argv[k] <= '9')
k++;
else
return (1);
}
return (0);
}
/**
 * _atoi - converts a string of asccii digits to the values they represent
 * @s: pointer to the source string
 * Return: value of digits
 */
int _atoi(char *s)
{
int k, result;

k = result = 0;
while (s[k])
{
if (s[k] >= '0' && s[k] <= '9')
{
result *= 10;
result += (s[k] - '0');
}
k++;
}
return (result);
}
/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int k;

malloc();
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (k = 1; k < argc; k++)
{
if (_isdigit(argv[k]))
{
printf("Error\n");
exit(98);
}
}
return (0);
}
