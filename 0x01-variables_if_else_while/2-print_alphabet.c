#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
char k;

for (k = 'a' ; k <= 'z' ; k++)
/*first case is initialize the loop where loop starts (a)*/
/*2nd is the condition that will stop the loo (z)*/
/*depending on purpose of the loop you can either incre/decrement the loop*/
putchar(k);
/*Lastly print the value*/
putchar('\n');
return (0);
}
