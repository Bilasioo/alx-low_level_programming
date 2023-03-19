#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int k;
char l;

/*First print from 0 to 9*/
for (k = 0 ; k < 10 ; k++)
putchar(k + '0');
/*Converted digit to character using "+ '0'"*/
/*from 10 in counting, we start at 10-a,11-b 15-f */
/*counting starts from 0*/
for (l = 'a' ; l <= 'f' ; l++)
putchar(l);
putchar('\n');
return (0);
}
