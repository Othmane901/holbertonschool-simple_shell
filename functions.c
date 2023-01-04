#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _strcat - function that concatenates two strings.
* @src: buffer pointer
* @dest: string pointer
* Description: concatenates 2 strings.
* Return: pointer to dest.
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;

for (j = 0; src[j] != '\0'; j++, ++i)
dest[i] = src[j];

dest[i] = '\0';

return (dest);
}

/**
* _strcmp - function that compares the size of two strings.
* @s1: the first string
* @s2: the second string
* Return: negative if s1 < s2,
* 0 if s1 = s2, or positive if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] && s2[i] && s1[i] == s2[i])
i++;

return (s1[i] - s2[i]);
}
