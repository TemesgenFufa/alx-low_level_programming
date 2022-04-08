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
	char lower_case;
	char upper_case;

	/* print a -z */
	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}

	putchar('\n');

	return (0);
}
