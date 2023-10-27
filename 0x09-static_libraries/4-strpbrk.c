#include "main.h"
/**
 * _strpbrk - bytes
 * @s: pointer
 * @accept: pointer
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
int x;

while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
return (s);
}}
s++;
}
return (0);
}
