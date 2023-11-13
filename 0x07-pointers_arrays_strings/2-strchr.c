#include "main.h"
/**
 * _strchr - Entry point
 * @c: input character to check for
 * @s: input string to check for
 *
 * Return: 0 or pointer to spot in s with c
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) = c)

return (s + i);
return (0);
}
