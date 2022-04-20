#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  * rev_string - reverses a string
 *   * @s:input
 *    * Return: Always 0.
*/
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
