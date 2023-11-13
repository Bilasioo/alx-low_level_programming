#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * *@n: number of bytes to BE COPIED
 * @dest: memory area to be copied TO
 * @src: memory area to be copied FROM
 *
 * Return: pointer to copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
