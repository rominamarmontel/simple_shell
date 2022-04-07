#include "simpleshell.h"

/**
  * _strcat - Concatonates two strings
  * @dest: The destination string
  * @src: The source string
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}
