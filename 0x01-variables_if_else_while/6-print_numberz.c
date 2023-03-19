#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int k;
for (k = 0 ; k < 10 ; k++)
putchar(k + '0');
/*Digit has to be converted to a character by adding "+ '0'" to that digit*/
putchar('\n');
return (0);
}
