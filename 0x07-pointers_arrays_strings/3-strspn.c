#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @accept: string input to be check against
 * @s: string input to be check
 *
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int b, a;
for (b = 0; s[b]; b++)
{
for (a = 0; accept[a]; a++)
{
if (s[b] == accept[a])
break;
}
if (!accept[a])
break;
}
return (b);
}
