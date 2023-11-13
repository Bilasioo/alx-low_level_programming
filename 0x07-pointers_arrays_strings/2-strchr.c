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
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
