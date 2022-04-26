#include "main.h"
/**
 * _strchr - Return a pointer to the first occurrence
 * of the character c i the string s, or NULL if the
 * character is not found
 *
 * @s:string targeted
 * @c:character targeted
 *
 * Return: returns pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
