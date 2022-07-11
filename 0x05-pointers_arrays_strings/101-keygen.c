#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int j = 0, sum = 0, k1, k2;

srand(time(0));

while (sum < 2772)
{
password[j] = 33 + rand() % 94;
sum += password[j++];
}

password[j] = '\0';

if (sum != 2772)
{
k1 = (sum - 2772) / 2;
k2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
k1++;

for (j = 0; password[j]; j++)
{
if (password[j] >= (33 + k2))
{
password[j] -= k2;
break;
}
}
}

printf("%s", password);

return (0);
}
