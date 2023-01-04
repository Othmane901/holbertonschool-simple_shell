#include "main.h"

/**
* *_strcpy - function that copies the string
* @src: buffer pointer
* @dest: string pointer
* Description: copies from buffer to output
* Return: pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
* _strlen - function that returns the length of a string.
* @s: string.
* Return: Always 0.
*/

int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}

/**
* *_strncmp - function that compare n characters of two strings
* @s1: String 1
* @s2: String 2
* @n: numbers of characters
* Return: 0 if s1 = s2, negative value if s1 < s2 and positive if s1 > s2
*/

int _strncmp(char *s1, char *s2, int n)
{
int i;

for (i = 0; s1[i] && s2[i] && i < n; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}
