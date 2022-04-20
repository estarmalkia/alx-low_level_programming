#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  * print_rev - prints the string in reverse
 *   * folowed by a new line
 *    *@s:input
 *     * Return: Always 0.
*/
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar('\n');
}
