#include "main.h"
/**
 * function copies n bytes from memory area src to memory area dest
 *
 * Returrn: dest
 */
int main(void)
{
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
}
