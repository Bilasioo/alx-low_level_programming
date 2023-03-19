#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - function
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
/* Getting last digit, divide digit by 10, remainder will be last digit*/
/*here we will use the modulo(%) operator*/
int main(void)
{
int n;
int k;
/*Declare variable int k that will store last value stored inside value of n*/

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
k = n % 10;
if (k > 5)
printf("Last digit of %d is %d and isgreater than 5", n, k);
else if  (k == 0)
printf("Last digit of %d is %d and is zero", n, k);
else if  (k < 6 && k != 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, k);
printf("\n");

return (0);
}
