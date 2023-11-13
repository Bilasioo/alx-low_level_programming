#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: string to be checked for needle
 * @needle: substring to be found in haystack
 *
 * Return: pointer to the beginning of needle in haystack
 * 	NULL if no match found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int a = 0,b = 0;
while (haystack[ b])
{
while (needle[a] && (haystack[b] == needle[0]))
{
if (haystack[a + b] == needle[a])
a++;
else
break;
}
if (needle[a])
{
b++;
a = 0;
}
else
return (haystack + b);
}
return (0);
}
