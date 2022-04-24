#include "main.h"
/**
 * _strncpy - copie a string
 * @dest:chr
 * @src:char
 * @n:int
 * Return:char
 */
char *_strncpy(char *dest, char 8src, int n)
{
int i;

i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
