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

for (k = 0 ; k < 10 ; k++)
{
for (l = 0 ; l < 10 ; l++)
{
if (k < l && k != l)
{
putchar(k + '0');
putchar(l + '0');
if (k + l != 17)
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
/*end*/
