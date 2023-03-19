#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int k;
int l;
int m;

for (k = 0 ; k < 10 ; k++)
{
for (l = 0 ; l < 10 ; l++)
{
for (m = 0 ; m < 10 ; m++)
{
putchar(k + '0');
putchar(l + '0');
putchar(m + '0');
if (k + l + m != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
