#include "holberton.h"

/**
  *_strncpy -concatenar strings
  *@dest: char destino
  *@src: char source
  *@n: int size
  *Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[j] = src[j];
		}
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
return (dest);
}
