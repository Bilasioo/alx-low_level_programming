#include "main.h"

/**
 * _strpbrk - searches a string input for any of a set of bytes
 * @accept: string to be check against
 * @s: string to be check
 *
 * Return: pointer to byte in s that matches
 * 	NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int b, a;
for (b=0; s[b]; b++)
{
for (a = 0; accept[a]; a++)
{
if (s[b] == accept[a])
break;
}
if (accept[a])
return (s + b);
}
return (0);
}
