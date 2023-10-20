#include "main.h"

/**
 * _strlen - function to return the length of a string
 * @s: parameter to be checked
 * Return: returns length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
/**
 * _strlenc - function to return length of string
 * @s: parameter to be checked
 * Return: returns the length of a string
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
