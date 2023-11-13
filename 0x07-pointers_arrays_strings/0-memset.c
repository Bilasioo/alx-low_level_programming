#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory block with constant byte
 * @b: char to be used
 * @n: number of bytes to be used
 * @s: address to memory block
 *
 * Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
