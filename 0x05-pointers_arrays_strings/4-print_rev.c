#include<stdio.h>

/**
 * print_rev - toma la cadena de la funcion.
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		putchar(str[l]);
		l++;
	}
	putchar('\n');
}
