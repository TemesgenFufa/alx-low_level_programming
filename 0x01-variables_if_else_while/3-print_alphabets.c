#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: point alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* print a -z */
	for (CH; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	for (ch; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
